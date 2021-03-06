#ifndef RUN_H
#define RUN_H

#include "pup_stl.h"
#include "utility.h"
#include "run.decl.h"
#include <stdlib.h>

/*readonly*/ CProxy_Main mainProxy;
/*readonly*/ CProxy_Cell cellProxy;
/*readonly*/ CProxy_Flux fluxProxy;
/*readonly*/ CProxy_Interface interfaceProxy;
/*readonly*/ int dimX;
/*readonly*/ int dimY;
/*readonly*/ int dimZ;
/*readonly*/ int t_steps;
/*readonly*/ double dt;
/*readonly*/ double dx;
/*readonly*/ int ndiv;
/*readonly*/ double gma;

/*readonly*/ string1D species;
/*readonly*/ double1D Cp, Eb;
/*readonly*/ double3D K;

/*readonly*/ double Te;
/*readonly*/ double end_time_chem; // in s
/*readonly*/ double dt_chem; // in s
/*readonly*/ int    iter_chem;
/*readonly*/ double R; // Gas constat in J/mol.K
/*readonly*/ double Av; // Avogadro's number

class Main: public CBase_Main{
public:
    int numSpecies;
    
    Main(CkArgMsg*);
    void done();
    void InterfaceIsUp();
    void read_file(); // added for chem
};

class Cell: public CBase_Cell{
	public:
		Cell_SDAG_CODE
		flow3D val_new, val_old;
		double3D P;
		int iter;
    
        double1D sp; // warning: since I assume sp is related to each cell, so add it as a member variable
        int size;
        int wf; // frequency of writing output
        int Tg;

		Cell();
		Cell(CkMigrateMessage* m){}
		void pup(PUP::er &p){
			CBase_Cell::pup(p);
			__sdag_pup(p);
			p|val_new;
			p|val_old;
			p|P;
			p|iter;
		}
		void update();
		void initialize();
		void gaslaw();
		void calcvar3D(flow3D&,flow3D,flow3D);
    
        // functions for chemical reactions
        void solve_rnx();
        void initialize_sp();
        void write_file(int);
        void calc_change(double1D& t_k, double1D& t_s);
        void calc_temp(double1D& k);
        void WriteOutput();
};

class Flux: public CBase_Flux{
	public:
		Flux_SDAG_CODE
		flow3D flux_c, cell_val;
		flow4D flux_f;
		double3D P;
		//int iter;

		Flux();
		Flux(CkMigrateMessage* m){}
		void pup(PUP::er &p){
			CBase_Flux::pup(p);
			__sdag_pup(p);
			p|flux_c;
			p|flux_f;
			p|P;
			p|cell_val;
		}
		void inviscidFlux();
		void fluxFacetoCell();
};

class Interface: public CBase_Interface{
	public:
		Interface_SDAG_CODE
		flow2D val_l, val_r, flux;
		double2D P_left, P_right;
		int iter;

		Interface();
		Interface(CkMigrateMessage* m){}
		void pup(PUP::er &p){
			CBase_Interface::pup(p);
			__sdag_pup(p);
			p|val_l;
			p|val_r;
			p|P_left;
			p|P_right;
			p|flux;
		}
		void calc();
		void wall(flow2D&,flow2D,double2D&,double2D);
};

#endif
