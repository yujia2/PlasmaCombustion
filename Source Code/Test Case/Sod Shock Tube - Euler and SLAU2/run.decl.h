#ifndef _DECL_run_H_
#define _DECL_run_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CProxy_Main mainProxy;
 */

/* DECLS: readonly CProxy_Cell cellProxy;
 */

/* DECLS: readonly CProxy_Flux fluxProxy;
 */

/* DECLS: readonly CProxy_Interface interfaceProxy;
 */

/* DECLS: readonly int dimX;
 */

/* DECLS: readonly int dimY;
 */

/* DECLS: readonly int dimZ;
 */

/* DECLS: readonly int t_steps;
 */

/* DECLS: readonly double dt;
 */

/* DECLS: readonly double dx;
 */

/* DECLS: readonly int ndiv;
 */

/* DECLS: readonly double gma;
 */

/* DECLS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void done(void);
void InterfaceIsUp(void);
};
 */
 class Main;
 class CkIndex_Main;
 class CProxy_Main;
/* --------------- index object ------------------ */
class CkIndex_Main:public CkIndex_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Main(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Main_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_Main_CkArgMsg() {
      static int epidx = reg_Main_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_Main_CkArgMsg(); }
    
    static void _call_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void done(void);
     */
    // Entry point registration at startup
    
    static int reg_done_void();
    // Entry point index lookup
    
    inline static int idx_done_void() {
      static int epidx = reg_done_void();
      return epidx;
    }

    
    inline static int idx_done(void (Main::*)(void) ) {
      return idx_done_void();
    }


    
    static int done(void) { return idx_done_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_done_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_done_void() {
      static int epidx = reg_redn_wrapper_done_void();
      return epidx;
    }
    
    static int redn_wrapper_done(CkReductionMsg* impl_msg) { return idx_redn_wrapper_done_void(); }
    
    static void _call_redn_wrapper_done_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_done_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_done_void(void* impl_msg, void* impl_obj);
    /* DECLS: void InterfaceIsUp(void);
     */
    // Entry point registration at startup
    
    static int reg_InterfaceIsUp_void();
    // Entry point index lookup
    
    inline static int idx_InterfaceIsUp_void() {
      static int epidx = reg_InterfaceIsUp_void();
      return epidx;
    }

    
    inline static int idx_InterfaceIsUp(void (Main::*)(void) ) {
      return idx_InterfaceIsUp_void();
    }


    
    static int InterfaceIsUp(void) { return idx_InterfaceIsUp_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_InterfaceIsUp_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_InterfaceIsUp_void() {
      static int epidx = reg_redn_wrapper_InterfaceIsUp_void();
      return epidx;
    }
    
    static int redn_wrapper_InterfaceIsUp(CkReductionMsg* impl_msg) { return idx_redn_wrapper_InterfaceIsUp_void(); }
    
    static void _call_redn_wrapper_InterfaceIsUp_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_InterfaceIsUp_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_InterfaceIsUp_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_Main:public CProxy_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    CProxy_Main(void) {};
    CProxy_Main(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_Main(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p); }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    Main *ckLocal(void) const
    { return (Main *)CkLocalChare(&ckGetChareID()); }
/* DECLS: Main(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);
    CProxy_Main(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);

/* DECLS: void done(void);
 */
    
    void done(void);

/* DECLS: void InterfaceIsUp(void);
 */
    
    void InterfaceIsUp(void);

};
PUPmarshall(CProxy_Main)
#define Main_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_Main>CBase_Main;

/* DECLS: array Cell: ArrayElement{
Cell(void);
void ftoc(const flow3D &c_f);
void solve_c(void);
Cell(CkMigrateMessage* impl_msg);
};
 */
 class Cell;
 class CkIndex_Cell;
 class CProxy_Cell;
 class CProxyElement_Cell;
 class CProxySection_Cell;
/* --------------- index object ------------------ */
class CkIndex_Cell:public CkIndex_ArrayElement{
  public:
    typedef Cell local_t;
    typedef CkIndex_Cell index_t;
    typedef CProxy_Cell proxy_t;
    typedef CProxyElement_Cell element_t;
    typedef CProxySection_Cell section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Cell(void);
     */
    // Entry point registration at startup
    
    static int reg_Cell_void();
    // Entry point index lookup
    
    inline static int idx_Cell_void() {
      static int epidx = reg_Cell_void();
      return epidx;
    }

    
    static int ckNew(void) { return idx_Cell_void(); }
    
    static void _call_Cell_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Cell_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ftoc(const flow3D &c_f);
     */
    // Entry point registration at startup
    
    static int reg_ftoc_marshall2();
    // Entry point index lookup
    
    inline static int idx_ftoc_marshall2() {
      static int epidx = reg_ftoc_marshall2();
      return epidx;
    }

    
    inline static int idx_ftoc(void (Cell::*)(const flow3D &c_f) ) {
      return idx_ftoc_marshall2();
    }


    
    static int ftoc(const flow3D &c_f) { return idx_ftoc_marshall2(); }
    
    static void _call_ftoc_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ftoc_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ftoc_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ftoc_marshall2(PUP::er &p,void *msg);
    /* DECLS: void solve_c(void);
     */
    // Entry point registration at startup
    
    static int reg_solve_c_void();
    // Entry point index lookup
    
    inline static int idx_solve_c_void() {
      static int epidx = reg_solve_c_void();
      return epidx;
    }

    
    inline static int idx_solve_c(void (Cell::*)(void) ) {
      return idx_solve_c_void();
    }


    
    static int solve_c(void) { return idx_solve_c_void(); }
    
    static void _call_solve_c_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_solve_c_void(void* impl_msg, void* impl_obj);
    /* DECLS: Cell(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Cell_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Cell_CkMigrateMessage() {
      static int epidx = reg_Cell_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Cell_CkMigrateMessage(); }
    
    static void _call_Cell_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Cell_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Cell : public CProxyElement_ArrayElement{
  public:
    typedef Cell local_t;
    typedef CkIndex_Cell index_t;
    typedef CProxy_Cell proxy_t;
    typedef CProxyElement_Cell element_t;
    typedef CProxySection_Cell section_t;

    CProxyElement_Cell(void) {}
    CProxyElement_Cell(const ArrayElement *e) : CProxyElement_ArrayElement(e){  }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    Cell *ckLocal(void) const
    { return (Cell *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Cell(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_Cell(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}

    CProxyElement_Cell(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_Cell(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}
/* DECLS: Cell(void);
 */
    
    void insert(int onPE=-1);
/* DECLS: void ftoc(const flow3D &c_f);
 */
    
    void ftoc(const flow3D &c_f, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void solve_c(void);
 */
    
    void solve_c(void) ;

/* DECLS: Cell(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_Cell)
/* ---------------- collective proxy -------------- */
 class CProxy_Cell : public CProxy_ArrayElement{
  public:
    typedef Cell local_t;
    typedef CkIndex_Cell index_t;
    typedef CProxy_Cell proxy_t;
    typedef CProxyElement_Cell element_t;
    typedef CProxySection_Cell section_t;

    CProxy_Cell(void) {}
    CProxy_Cell(const ArrayElement *e) : CProxy_ArrayElement(e){  }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Generalized array indexing:
    CProxyElement_Cell operator [] (const CkArrayIndex3D &idx) const
    { return CProxyElement_Cell(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Cell operator() (const CkArrayIndex3D &idx) const
    { return CProxyElement_Cell(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Cell operator () (int i0,int i1,int i2) const 
        {return CProxyElement_Cell(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_Cell operator () (CkIndex3D idx) const 
        {return CProxyElement_Cell(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_Cell(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Cell(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Cell(void);
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions());
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb);
    static CkArrayID ckNew(const int s1, const int s2, const int s3);
    static void ckNew(const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb);

/* DECLS: void ftoc(const flow3D &c_f);
 */
    
    void ftoc(const flow3D &c_f, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void solve_c(void);
 */
    
    void solve_c(void) ;

/* DECLS: Cell(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_Cell)
/* ---------------- section proxy -------------- */
 class CProxySection_Cell : public CProxySection_ArrayElement{
  public:
    typedef Cell local_t;
    typedef CkIndex_Cell index_t;
    typedef CProxy_Cell proxy_t;
    typedef CProxyElement_Cell element_t;
    typedef CProxySection_Cell section_t;

    CProxySection_Cell(void) {}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_Cell operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_Cell(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Cell operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_Cell(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Cell operator () (int idx) const 
        {return CProxyElement_Cell(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex3D *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l1, int u1, int s1, int l2, int u2, int s2, int l3, int u3, int s3) {
      CkVec<CkArrayIndex3D> al;
      for (int i=l1; i<=u1; i+=s1) 
        for (int j=l2; j<=u2; j+=s2) 
          for (int k=l3; k<=u3; k+=s3) 
          al.push_back(CkArrayIndex3D(i, j, k));
      return CkSectionID(aid, al.getVec(), al.size());
    } 
    CProxySection_Cell(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell(const CkArrayID &aid, CkArrayIndex *elems, int nElems) 
        :CProxySection_ArrayElement(aid,elems,nElems) {}
    CProxySection_Cell(const CkSectionID &sid)       :CProxySection_ArrayElement(sid) {}
    CProxySection_Cell(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) {}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
/* DECLS: Cell(void);
 */
    

/* DECLS: void ftoc(const flow3D &c_f);
 */
    
    void ftoc(const flow3D &c_f, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void solve_c(void);
 */
    
    void solve_c(void) ;

/* DECLS: Cell(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_Cell)
#define Cell_SDAG_CODE                                                         \
public:                                                                        \
  void solve_c();                                                              \
private:                                                                       \
  void solve_c_end();                                                          \
  void _slist_0();                                                             \
  void _slist_0_end();                                                         \
  void _for_0();                                                               \
  void _for_0_end();                                                           \
  void _slist_1();                                                             \
  void _slist_1_end();                                                         \
  void _atomic_0();                                                            \
  SDAG::Continuation* _when_0();                                               \
  void _when_0_end(Closure_Cell::ftoc_2_closure* gen0);                        \
  void _atomic_1(Closure_Cell::ftoc_2_closure* gen0);                          \
  void _atomic_2();                                                            \
public:                                                                        \
  void ftoc(Closure_Cell::ftoc_2_closure* genClosure);                         \
  void ftoc(flow3D c_f);                                                       \
public:                                                                        \
  std::auto_ptr<SDAG::Dependency> __dep;                                       \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_Cell_send_to_flux_from_cell();                          \
  static int _sdag_reg_Cell_send_to_flux_from_cell();                          \
  static int _sdag_idx_Cell_receive_from_flux_to_cell();                       \
  static int _sdag_reg_Cell_receive_from_flux_to_cell();                       \
  static int _sdag_idx_Cell_atomic_2();                                        \
  static int _sdag_reg_Cell_atomic_2();                                        \

typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_Cell>CBase_Cell;

/* DECLS: array Flux: ArrayElement{
Flux(void);
void itof(int tag, const flow2D &f);
void ctof(const flow3D &val_c, const double3D &Pt);
Flux(CkMigrateMessage* impl_msg);
};
 */
 class Flux;
 class CkIndex_Flux;
 class CProxy_Flux;
 class CProxyElement_Flux;
 class CProxySection_Flux;
/* --------------- index object ------------------ */
class CkIndex_Flux:public CkIndex_ArrayElement{
  public:
    typedef Flux local_t;
    typedef CkIndex_Flux index_t;
    typedef CProxy_Flux proxy_t;
    typedef CProxyElement_Flux element_t;
    typedef CProxySection_Flux section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Flux(void);
     */
    // Entry point registration at startup
    
    static int reg_Flux_void();
    // Entry point index lookup
    
    inline static int idx_Flux_void() {
      static int epidx = reg_Flux_void();
      return epidx;
    }

    
    static int ckNew(void) { return idx_Flux_void(); }
    
    static void _call_Flux_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Flux_void(void* impl_msg, void* impl_obj);
    /* DECLS: void itof(int tag, const flow2D &f);
     */
    // Entry point registration at startup
    
    static int reg_itof_marshall2();
    // Entry point index lookup
    
    inline static int idx_itof_marshall2() {
      static int epidx = reg_itof_marshall2();
      return epidx;
    }

    
    inline static int idx_itof(void (Flux::*)(int tag, const flow2D &f) ) {
      return idx_itof_marshall2();
    }


    
    static int itof(int tag, const flow2D &f) { return idx_itof_marshall2(); }
    
    static void _call_itof_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_itof_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_itof_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_itof_marshall2(PUP::er &p,void *msg);
    /* DECLS: void ctof(const flow3D &val_c, const double3D &Pt);
     */
    // Entry point registration at startup
    
    static int reg_ctof_marshall3();
    // Entry point index lookup
    
    inline static int idx_ctof_marshall3() {
      static int epidx = reg_ctof_marshall3();
      return epidx;
    }

    
    inline static int idx_ctof(void (Flux::*)(const flow3D &val_c, const double3D &Pt) ) {
      return idx_ctof_marshall3();
    }


    
    static int ctof(const flow3D &val_c, const double3D &Pt) { return idx_ctof_marshall3(); }
    
    static void _call_ctof_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ctof_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ctof_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ctof_marshall3(PUP::er &p,void *msg);
    /* DECLS: Flux(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Flux_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Flux_CkMigrateMessage() {
      static int epidx = reg_Flux_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Flux_CkMigrateMessage(); }
    
    static void _call_Flux_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Flux_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Flux : public CProxyElement_ArrayElement{
  public:
    typedef Flux local_t;
    typedef CkIndex_Flux index_t;
    typedef CProxy_Flux proxy_t;
    typedef CProxyElement_Flux element_t;
    typedef CProxySection_Flux section_t;

    CProxyElement_Flux(void) {}
    CProxyElement_Flux(const ArrayElement *e) : CProxyElement_ArrayElement(e){  }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    Flux *ckLocal(void) const
    { return (Flux *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Flux(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_Flux(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}

    CProxyElement_Flux(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_Flux(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}
/* DECLS: Flux(void);
 */
    
    void insert(int onPE=-1);
/* DECLS: void itof(int tag, const flow2D &f);
 */
    
    void itof(int tag, const flow2D &f, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ctof(const flow3D &val_c, const double3D &Pt);
 */
    
    void ctof(const flow3D &val_c, const double3D &Pt, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Flux(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_Flux)
/* ---------------- collective proxy -------------- */
 class CProxy_Flux : public CProxy_ArrayElement{
  public:
    typedef Flux local_t;
    typedef CkIndex_Flux index_t;
    typedef CProxy_Flux proxy_t;
    typedef CProxyElement_Flux element_t;
    typedef CProxySection_Flux section_t;

    CProxy_Flux(void) {}
    CProxy_Flux(const ArrayElement *e) : CProxy_ArrayElement(e){  }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Generalized array indexing:
    CProxyElement_Flux operator [] (const CkArrayIndex3D &idx) const
    { return CProxyElement_Flux(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Flux operator() (const CkArrayIndex3D &idx) const
    { return CProxyElement_Flux(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Flux operator () (int i0,int i1,int i2) const 
        {return CProxyElement_Flux(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_Flux operator () (CkIndex3D idx) const 
        {return CProxyElement_Flux(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_Flux(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Flux(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Flux(void);
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions());
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb);
    static CkArrayID ckNew(const int s1, const int s2, const int s3);
    static void ckNew(const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb);

/* DECLS: void itof(int tag, const flow2D &f);
 */
    
    void itof(int tag, const flow2D &f, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ctof(const flow3D &val_c, const double3D &Pt);
 */
    
    void ctof(const flow3D &val_c, const double3D &Pt, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Flux(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_Flux)
/* ---------------- section proxy -------------- */
 class CProxySection_Flux : public CProxySection_ArrayElement{
  public:
    typedef Flux local_t;
    typedef CkIndex_Flux index_t;
    typedef CProxy_Flux proxy_t;
    typedef CProxyElement_Flux element_t;
    typedef CProxySection_Flux section_t;

    CProxySection_Flux(void) {}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_Flux operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_Flux(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Flux operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_Flux(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Flux operator () (int idx) const 
        {return CProxyElement_Flux(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex3D *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l1, int u1, int s1, int l2, int u2, int s2, int l3, int u3, int s3) {
      CkVec<CkArrayIndex3D> al;
      for (int i=l1; i<=u1; i+=s1) 
        for (int j=l2; j<=u2; j+=s2) 
          for (int k=l3; k<=u3; k+=s3) 
          al.push_back(CkArrayIndex3D(i, j, k));
      return CkSectionID(aid, al.getVec(), al.size());
    } 
    CProxySection_Flux(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Flux(const CkArrayID &aid, CkArrayIndex *elems, int nElems) 
        :CProxySection_ArrayElement(aid,elems,nElems) {}
    CProxySection_Flux(const CkSectionID &sid)       :CProxySection_ArrayElement(sid) {}
    CProxySection_Flux(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Flux(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) {}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
/* DECLS: Flux(void);
 */
    

/* DECLS: void itof(int tag, const flow2D &f);
 */
    
    void itof(int tag, const flow2D &f, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ctof(const flow3D &val_c, const double3D &Pt);
 */
    
    void ctof(const flow3D &val_c, const double3D &Pt, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Flux(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_Flux)
#define Flux_SDAG_CODE                                                         \
public:                                                                        \
  void ctof(flow3D val_c, double3D Pt);                                        \
  void ctof(Closure_Flux::ctof_3_closure* gen0);                               \
private:                                                                       \
  void ctof_end(Closure_Flux::ctof_3_closure* gen0);                           \
  void _slist_0(Closure_Flux::ctof_3_closure* gen0);                           \
  void _slist_0_end(Closure_Flux::ctof_3_closure* gen0);                       \
  void _atomic_0(Closure_Flux::ctof_3_closure* gen0);                          \
  void _overlap_0(Closure_Flux::ctof_3_closure* gen0);                         \
  void _overlap_0_end(Closure_Flux::ctof_3_closure* gen0);                     \
  void _olist_0(Closure_Flux::ctof_3_closure* gen0);                           \
  void _olist_0_end(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0); \
  void _atomic_1(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0);    \
  SDAG::Continuation* _when_0(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0);\
  SDAG::Continuation* _when_0(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, int refnum_0);\
  void _when_0_end(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2);\
  void _atomic_2(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2);\
  SDAG::Continuation* _when_1(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0);\
  SDAG::Continuation* _when_1(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, int refnum_0);\
  void _when_1_end(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2);\
  void _atomic_3(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2);\
  SDAG::Continuation* _when_2(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0);\
  SDAG::Continuation* _when_2(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, int refnum_0);\
  void _when_2_end(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2);\
  void _atomic_4(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2);\
  SDAG::Continuation* _when_3(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0);\
  SDAG::Continuation* _when_3(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, int refnum_0);\
  void _when_3_end(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2);\
  void _atomic_5(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2);\
  SDAG::Continuation* _when_4(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0);\
  SDAG::Continuation* _when_4(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, int refnum_0);\
  void _when_4_end(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2);\
  void _atomic_6(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2);\
  SDAG::Continuation* _when_5(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0);\
  SDAG::Continuation* _when_5(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, int refnum_0);\
  void _when_5_end(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2);\
  void _atomic_7(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2);\
  void _atomic_8(Closure_Flux::ctof_3_closure* gen0);                          \
public:                                                                        \
  void itof(Closure_Flux::itof_2_closure* genClosure);                         \
  void itof(int tag, flow2D f);                                                \
public:                                                                        \
  std::auto_ptr<SDAG::Dependency> __dep;                                       \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_Flux_atomic_0();                                        \
  static int _sdag_reg_Flux_atomic_0();                                        \
  static int _sdag_idx_Flux_flux_calc();                                       \
  static int _sdag_reg_Flux_flux_calc();                                       \
  static int _sdag_idx_Flux_atomic_2();                                        \
  static int _sdag_reg_Flux_atomic_2();                                        \
  static int _sdag_idx_Flux_atomic_3();                                        \
  static int _sdag_reg_Flux_atomic_3();                                        \
  static int _sdag_idx_Flux_atomic_4();                                        \
  static int _sdag_reg_Flux_atomic_4();                                        \
  static int _sdag_idx_Flux_atomic_5();                                        \
  static int _sdag_reg_Flux_atomic_5();                                        \
  static int _sdag_idx_Flux_atomic_6();                                        \
  static int _sdag_reg_Flux_atomic_6();                                        \
  static int _sdag_idx_Flux_atomic_7();                                        \
  static int _sdag_reg_Flux_atomic_7();                                        \
  static int _sdag_idx_Flux_atomic_8();                                        \
  static int _sdag_reg_Flux_atomic_8();                                        \

typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_Flux>CBase_Flux;

/* DECLS: array Interface: ArrayElement{
Interface(void);
void ftoi(int tag, const flow2D &f, const double2D &P);
void solve_i(void);
Interface(CkMigrateMessage* impl_msg);
};
 */
 class Interface;
 class CkIndex_Interface;
 class CProxy_Interface;
 class CProxyElement_Interface;
 class CProxySection_Interface;
/* --------------- index object ------------------ */
class CkIndex_Interface:public CkIndex_ArrayElement{
  public:
    typedef Interface local_t;
    typedef CkIndex_Interface index_t;
    typedef CProxy_Interface proxy_t;
    typedef CProxyElement_Interface element_t;
    typedef CProxySection_Interface section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Interface(void);
     */
    // Entry point registration at startup
    
    static int reg_Interface_void();
    // Entry point index lookup
    
    inline static int idx_Interface_void() {
      static int epidx = reg_Interface_void();
      return epidx;
    }

    
    static int ckNew(void) { return idx_Interface_void(); }
    
    static void _call_Interface_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Interface_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ftoi(int tag, const flow2D &f, const double2D &P);
     */
    // Entry point registration at startup
    
    static int reg_ftoi_marshall2();
    // Entry point index lookup
    
    inline static int idx_ftoi_marshall2() {
      static int epidx = reg_ftoi_marshall2();
      return epidx;
    }

    
    inline static int idx_ftoi(void (Interface::*)(int tag, const flow2D &f, const double2D &P) ) {
      return idx_ftoi_marshall2();
    }


    
    static int ftoi(int tag, const flow2D &f, const double2D &P) { return idx_ftoi_marshall2(); }
    
    static void _call_ftoi_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ftoi_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ftoi_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ftoi_marshall2(PUP::er &p,void *msg);
    /* DECLS: void solve_i(void);
     */
    // Entry point registration at startup
    
    static int reg_solve_i_void();
    // Entry point index lookup
    
    inline static int idx_solve_i_void() {
      static int epidx = reg_solve_i_void();
      return epidx;
    }

    
    inline static int idx_solve_i(void (Interface::*)(void) ) {
      return idx_solve_i_void();
    }


    
    static int solve_i(void) { return idx_solve_i_void(); }
    
    static void _call_solve_i_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_solve_i_void(void* impl_msg, void* impl_obj);
    /* DECLS: Interface(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Interface_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Interface_CkMigrateMessage() {
      static int epidx = reg_Interface_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Interface_CkMigrateMessage(); }
    
    static void _call_Interface_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Interface_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Interface : public CProxyElement_ArrayElement{
  public:
    typedef Interface local_t;
    typedef CkIndex_Interface index_t;
    typedef CProxy_Interface proxy_t;
    typedef CProxyElement_Interface element_t;
    typedef CProxySection_Interface section_t;

    CProxyElement_Interface(void) {}
    CProxyElement_Interface(const ArrayElement *e) : CProxyElement_ArrayElement(e){  }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    Interface *ckLocal(void) const
    { return (Interface *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Interface(const CkArrayID &aid,const CkArrayIndex4D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_Interface(const CkArrayID &aid,const CkArrayIndex4D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}

    CProxyElement_Interface(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_Interface(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}
/* DECLS: Interface(void);
 */
    
    void insert(int onPE=-1);
/* DECLS: void ftoi(int tag, const flow2D &f, const double2D &P);
 */
    
    void ftoi(int tag, const flow2D &f, const double2D &P, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void solve_i(void);
 */
    
    void solve_i(void) ;

/* DECLS: Interface(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_Interface)
/* ---------------- collective proxy -------------- */
 class CProxy_Interface : public CProxy_ArrayElement{
  public:
    typedef Interface local_t;
    typedef CkIndex_Interface index_t;
    typedef CProxy_Interface proxy_t;
    typedef CProxyElement_Interface element_t;
    typedef CProxySection_Interface section_t;

    CProxy_Interface(void) {}
    CProxy_Interface(const ArrayElement *e) : CProxy_ArrayElement(e){  }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Generalized array indexing:
    CProxyElement_Interface operator [] (const CkArrayIndex4D &idx) const
    { return CProxyElement_Interface(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Interface operator() (const CkArrayIndex4D &idx) const
    { return CProxyElement_Interface(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Interface operator () (short int i0,short int i1,short int i2,short int i3) const 
        {return CProxyElement_Interface(ckGetArrayID(), CkArrayIndex4D(i0,i1,i2,i3), CK_DELCTOR_CALL);}
    CProxyElement_Interface operator () (CkIndex4D idx) const 
        {return CProxyElement_Interface(ckGetArrayID(), CkArrayIndex4D(idx), CK_DELCTOR_CALL);}
    CProxy_Interface(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Interface(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Interface(void);
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions());
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb);

/* DECLS: void ftoi(int tag, const flow2D &f, const double2D &P);
 */
    
    void ftoi(int tag, const flow2D &f, const double2D &P, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void solve_i(void);
 */
    
    void solve_i(void) ;

/* DECLS: Interface(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_Interface)
/* ---------------- section proxy -------------- */
 class CProxySection_Interface : public CProxySection_ArrayElement{
  public:
    typedef Interface local_t;
    typedef CkIndex_Interface index_t;
    typedef CProxy_Interface proxy_t;
    typedef CProxyElement_Interface element_t;
    typedef CProxySection_Interface section_t;

    CProxySection_Interface(void) {}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_Interface operator [] (const CkArrayIndex4D &idx) const
        {return CProxyElement_Interface(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Interface operator() (const CkArrayIndex4D &idx) const
        {return CProxyElement_Interface(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Interface operator () (int idx) const 
        {return CProxyElement_Interface(ckGetArrayID(), *(CkArrayIndex4D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex4D *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l1, int u1, int s1, int l2, int u2, int s2, int l3, int u3, int s3, int l4, int u4, int s4) {
      CkVec<CkArrayIndex4D> al;
      for (int i=l1; i<=u1; i+=s1) 
        for (int j=l2; j<=u2; j+=s2) 
          for (int k=l3; k<=u3; k+=s3) 
            for (int l=l4; l<=u4; l+=s4) 
              al.push_back(CkArrayIndex4D(i, j, k, l));
      return CkSectionID(aid, al.getVec(), al.size());
    } 
    CProxySection_Interface(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Interface(const CkArrayID &aid, CkArrayIndex *elems, int nElems) 
        :CProxySection_ArrayElement(aid,elems,nElems) {}
    CProxySection_Interface(const CkSectionID &sid)       :CProxySection_ArrayElement(sid) {}
    CProxySection_Interface(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Interface(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) {}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
/* DECLS: Interface(void);
 */
    

/* DECLS: void ftoi(int tag, const flow2D &f, const double2D &P);
 */
    
    void ftoi(int tag, const flow2D &f, const double2D &P, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void solve_i(void);
 */
    
    void solve_i(void) ;

/* DECLS: Interface(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_Interface)
#define Interface_SDAG_CODE                                                    \
public:                                                                        \
  void solve_i();                                                              \
private:                                                                       \
  void solve_i_end();                                                          \
  void _slist_0();                                                             \
  void _slist_0_end();                                                         \
  void _atomic_0();                                                            \
  void _for_0();                                                               \
  void _for_0_end();                                                           \
  void _slist_1();                                                             \
  void _slist_1_end();                                                         \
  void _if_0();                                                                \
  void _if_0_end();                                                            \
  void _else_0();                                                              \
  void _else_0_end();                                                          \
  void _if_1();                                                                \
  void _if_1_end();                                                            \
  void _else_1();                                                              \
  void _else_1_end();                                                          \
  void _slist_2();                                                             \
  void _slist_2_end();                                                         \
  void _if_2();                                                                \
  void _if_2_end();                                                            \
  void _else_2();                                                              \
  void _else_2_end();                                                          \
  void _if_3();                                                                \
  void _if_3_end();                                                            \
  void _else_3();                                                              \
  void _else_3_end();                                                          \
  void _slist_3();                                                             \
  void _slist_3_end();                                                         \
  void _overlap_0();                                                           \
  void _overlap_0_end();                                                       \
  void _olist_0();                                                             \
  void _olist_0_end(SDAG::CCounter* _co0);                                     \
  SDAG::Continuation* _when_0(SDAG::CCounter* _co0);                           \
  SDAG::Continuation* _when_0(SDAG::CCounter* _co0, int refnum_0);             \
  void _when_0_end(SDAG::CCounter* _co0, Closure_Interface::ftoi_2_closure* gen1);\
  void _atomic_1(SDAG::CCounter* _co0, Closure_Interface::ftoi_2_closure* gen1);\
  SDAG::Continuation* _when_1(SDAG::CCounter* _co0);                           \
  SDAG::Continuation* _when_1(SDAG::CCounter* _co0, int refnum_0);             \
  void _when_1_end(SDAG::CCounter* _co0, Closure_Interface::ftoi_2_closure* gen1);\
  void _atomic_2(SDAG::CCounter* _co0, Closure_Interface::ftoi_2_closure* gen1);\
  void _atomic_3();                                                            \
  void _slist_4();                                                             \
  void _slist_4_end();                                                         \
  SDAG::Continuation* _when_2();                                               \
  SDAG::Continuation* _when_2(int refnum_0);                                   \
  void _when_2_end(Closure_Interface::ftoi_2_closure* gen0);                   \
  void _atomic_4(Closure_Interface::ftoi_2_closure* gen0);                     \
  void _slist_5();                                                             \
  void _slist_5_end();                                                         \
  SDAG::Continuation* _when_3();                                               \
  SDAG::Continuation* _when_3(int refnum_0);                                   \
  void _when_3_end(Closure_Interface::ftoi_2_closure* gen0);                   \
  void _atomic_5(Closure_Interface::ftoi_2_closure* gen0);                     \
  void _slist_6();                                                             \
  void _slist_6_end();                                                         \
  void _if_4();                                                                \
  void _if_4_end();                                                            \
  void _else_4();                                                              \
  void _else_4_end();                                                          \
  void _if_5();                                                                \
  void _if_5_end();                                                            \
  void _else_5();                                                              \
  void _else_5_end();                                                          \
  void _slist_7();                                                             \
  void _slist_7_end();                                                         \
  void _overlap_1();                                                           \
  void _overlap_1_end();                                                       \
  void _olist_1();                                                             \
  void _olist_1_end(SDAG::CCounter* _co1);                                     \
  SDAG::Continuation* _when_4(SDAG::CCounter* _co1);                           \
  SDAG::Continuation* _when_4(SDAG::CCounter* _co1, int refnum_0);             \
  void _when_4_end(SDAG::CCounter* _co1, Closure_Interface::ftoi_2_closure* gen1);\
  void _atomic_6(SDAG::CCounter* _co1, Closure_Interface::ftoi_2_closure* gen1);\
  SDAG::Continuation* _when_5(SDAG::CCounter* _co1);                           \
  SDAG::Continuation* _when_5(SDAG::CCounter* _co1, int refnum_0);             \
  void _when_5_end(SDAG::CCounter* _co1, Closure_Interface::ftoi_2_closure* gen1);\
  void _atomic_7(SDAG::CCounter* _co1, Closure_Interface::ftoi_2_closure* gen1);\
  void _atomic_8();                                                            \
  void _slist_8();                                                             \
  void _slist_8_end();                                                         \
  SDAG::Continuation* _when_6();                                               \
  SDAG::Continuation* _when_6(int refnum_0);                                   \
  void _when_6_end(Closure_Interface::ftoi_2_closure* gen0);                   \
  void _atomic_9(Closure_Interface::ftoi_2_closure* gen0);                     \
  void _slist_9();                                                             \
  void _slist_9_end();                                                         \
  SDAG::Continuation* _when_7();                                               \
  SDAG::Continuation* _when_7(int refnum_0);                                   \
  void _when_7_end(Closure_Interface::ftoi_2_closure* gen0);                   \
  void _atomic_10(Closure_Interface::ftoi_2_closure* gen0);                    \
  void _slist_10();                                                            \
  void _slist_10_end();                                                        \
  void _if_6();                                                                \
  void _if_6_end();                                                            \
  void _else_6();                                                              \
  void _else_6_end();                                                          \
  void _if_7();                                                                \
  void _if_7_end();                                                            \
  void _else_7();                                                              \
  void _else_7_end();                                                          \
  void _slist_11();                                                            \
  void _slist_11_end();                                                        \
  void _overlap_2();                                                           \
  void _overlap_2_end();                                                       \
  void _olist_2();                                                             \
  void _olist_2_end(SDAG::CCounter* _co2);                                     \
  SDAG::Continuation* _when_8(SDAG::CCounter* _co2);                           \
  SDAG::Continuation* _when_8(SDAG::CCounter* _co2, int refnum_0);             \
  void _when_8_end(SDAG::CCounter* _co2, Closure_Interface::ftoi_2_closure* gen1);\
  void _atomic_11(SDAG::CCounter* _co2, Closure_Interface::ftoi_2_closure* gen1);\
  SDAG::Continuation* _when_9(SDAG::CCounter* _co2);                           \
  SDAG::Continuation* _when_9(SDAG::CCounter* _co2, int refnum_0);             \
  void _when_9_end(SDAG::CCounter* _co2, Closure_Interface::ftoi_2_closure* gen1);\
  void _atomic_12(SDAG::CCounter* _co2, Closure_Interface::ftoi_2_closure* gen1);\
  void _atomic_13();                                                           \
  void _slist_12();                                                            \
  void _slist_12_end();                                                        \
  SDAG::Continuation* _when_10();                                              \
  SDAG::Continuation* _when_10(int refnum_0);                                  \
  void _when_10_end(Closure_Interface::ftoi_2_closure* gen0);                  \
  void _atomic_14(Closure_Interface::ftoi_2_closure* gen0);                    \
  void _slist_13();                                                            \
  void _slist_13_end();                                                        \
  SDAG::Continuation* _when_11();                                              \
  SDAG::Continuation* _when_11(int refnum_0);                                  \
  void _when_11_end(Closure_Interface::ftoi_2_closure* gen0);                  \
  void _atomic_15(Closure_Interface::ftoi_2_closure* gen0);                    \
public:                                                                        \
  void ftoi(Closure_Interface::ftoi_2_closure* genClosure);                    \
  void ftoi(int tag, flow2D f, double2D P);                                    \
public:                                                                        \
  std::auto_ptr<SDAG::Dependency> __dep;                                       \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_Interface_atomic_0();                                   \
  static int _sdag_reg_Interface_atomic_0();                                   \
  static int _sdag_idx_Interface_atomic_15();                                  \
  static int _sdag_reg_Interface_atomic_15();                                  \
  static int _sdag_idx_Interface_atomic_14();                                  \
  static int _sdag_reg_Interface_atomic_14();                                  \
  static int _sdag_idx_Interface_atomic_11();                                  \
  static int _sdag_reg_Interface_atomic_11();                                  \
  static int _sdag_idx_Interface_atomic_12();                                  \
  static int _sdag_reg_Interface_atomic_12();                                  \
  static int _sdag_idx_Interface_atomic_13();                                  \
  static int _sdag_reg_Interface_atomic_13();                                  \
  static int _sdag_idx_Interface_atomic_10();                                  \
  static int _sdag_reg_Interface_atomic_10();                                  \
  static int _sdag_idx_Interface_atomic_9();                                   \
  static int _sdag_reg_Interface_atomic_9();                                   \
  static int _sdag_idx_Interface_atomic_6();                                   \
  static int _sdag_reg_Interface_atomic_6();                                   \
  static int _sdag_idx_Interface_atomic_7();                                   \
  static int _sdag_reg_Interface_atomic_7();                                   \
  static int _sdag_idx_Interface_atomic_8();                                   \
  static int _sdag_reg_Interface_atomic_8();                                   \
  static int _sdag_idx_Interface_atomic_5();                                   \
  static int _sdag_reg_Interface_atomic_5();                                   \
  static int _sdag_idx_Interface_atomic_4();                                   \
  static int _sdag_reg_Interface_atomic_4();                                   \
  static int _sdag_idx_Interface_atomic_1();                                   \
  static int _sdag_reg_Interface_atomic_1();                                   \
  static int _sdag_idx_Interface_atomic_2();                                   \
  static int _sdag_reg_Interface_atomic_2();                                   \
  static int _sdag_idx_Interface_atomic_3();                                   \
  static int _sdag_reg_Interface_atomic_3();                                   \

typedef CBaseT1<ArrayElementT<CkIndex4D>, CProxy_Interface>CBase_Interface;













/* ---------------- method closures -------------- */
class Closure_Main {
  public:


    struct done_2_closure;


    struct InterfaceIsUp_3_closure;

};

/* ---------------- method closures -------------- */
class Closure_Cell {
  public:


    struct ftoc_2_closure;


    struct solve_c_3_closure;


};

/* ---------------- method closures -------------- */
class Closure_Flux {
  public:


    struct itof_2_closure;


    struct ctof_3_closure;


};

/* ---------------- method closures -------------- */
class Closure_Interface {
  public:


    struct ftoi_2_closure;


    struct solve_i_3_closure;


};

extern void _registerrun(void);
extern "C" void CkRegisterMainModule(void);
#endif
