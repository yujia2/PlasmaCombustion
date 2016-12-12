











/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::done_2_closure : public SDAG::Closure {
      

      done_2_closure() {
        init();
      }
      done_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~done_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(done_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::InterfaceIsUp_3_closure : public SDAG::Closure {
      

      InterfaceIsUp_3_closure() {
        init();
      }
      InterfaceIsUp_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~InterfaceIsUp_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(InterfaceIsUp_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Cell::ftoc_2_closure : public SDAG::Closure {
      flow3D c_f;


      ftoc_2_closure() {
        init();
      }
      ftoc_2_closure(CkMigrateMessage*) {
        init();
      }
      flow3D & getP0() { return c_f;}
      void pup(PUP::er& __p) {
        __p | c_f;
        packClosure(__p);
      }
      virtual ~ftoc_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(ftoc_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Cell::solve_c_3_closure : public SDAG::Closure {
      

      solve_c_3_closure() {
        init();
      }
      solve_c_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~solve_c_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(solve_c_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Flux::itof_2_closure : public SDAG::Closure {
      int tag;
      flow2D f;


      itof_2_closure() {
        init();
      }
      itof_2_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return tag;}
      flow2D & getP1() { return f;}
      void pup(PUP::er& __p) {
        __p | tag;
        __p | f;
        packClosure(__p);
      }
      virtual ~itof_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(itof_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Flux::ctof_3_closure : public SDAG::Closure {
      flow3D val_c;
      double3D Pt;


      ctof_3_closure() {
        init();
      }
      ctof_3_closure(CkMigrateMessage*) {
        init();
      }
      flow3D & getP0() { return val_c;}
      double3D & getP1() { return Pt;}
      void pup(PUP::er& __p) {
        __p | val_c;
        __p | Pt;
        packClosure(__p);
      }
      virtual ~ctof_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(ctof_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Interface::ftoi_2_closure : public SDAG::Closure {
      int tag;
      flow2D f;
      double2D P;


      ftoi_2_closure() {
        init();
      }
      ftoi_2_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return tag;}
      flow2D & getP1() { return f;}
      double2D & getP2() { return P;}
      void pup(PUP::er& __p) {
        __p | tag;
        __p | f;
        __p | P;
        packClosure(__p);
      }
      virtual ~ftoi_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(ftoi_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Interface::solve_i_3_closure : public SDAG::Closure {
      

      solve_i_3_closure() {
        init();
      }
      solve_i_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~solve_i_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(solve_i_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CProxy_Main mainProxy;
 */
extern CProxy_Main mainProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_mainProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|mainProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_Cell cellProxy;
 */
extern CProxy_Cell cellProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_cellProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|cellProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_Flux fluxProxy;
 */
extern CProxy_Flux fluxProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_fluxProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|fluxProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_Interface interfaceProxy;
 */
extern CProxy_Interface interfaceProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_interfaceProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|interfaceProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int dimX;
 */
extern int dimX;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_dimX(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|dimX;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int dimY;
 */
extern int dimY;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_dimY(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|dimY;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int dimZ;
 */
extern int dimZ;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_dimZ(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|dimZ;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int t_steps;
 */
extern int t_steps;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_t_steps(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|t_steps;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly double dt;
 */
extern double dt;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_dt(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|dt;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly double dx;
 */
extern double dx;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_dx(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|dx;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int ndiv;
 */
extern int ndiv;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_ndiv(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|ndiv;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly double gma;
 */
extern double gma;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_gma(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|gma;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void done(void);
void InterfaceIsUp(void);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Main(CkArgMsg* impl_msg);
 */

CkChareID CProxy_Main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_Main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

  CProxy_Main::CProxy_Main(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  ckSetChareID(impl_ret);
}

// Entry point registration function

int CkIndex_Main::reg_Main_CkArgMsg() {
  int epidx = CkRegisterEp("Main(CkArgMsg* impl_msg)",
      _call_Main_CkArgMsg, CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Main::_call_Main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  new (impl_obj) Main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void done(void);
 */

void CProxy_Main::done(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_done_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_done_void(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_done_void(), impl_msg, &ckGetChareID(),0);
}

void CkIndex_Main::_call_redn_wrapper_done_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->done();
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function

int CkIndex_Main::reg_done_void() {
  int epidx = CkRegisterEp("done(void)",
      _call_done_void, 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function

int CkIndex_Main::reg_redn_wrapper_done_void() {
  return CkRegisterEp("redn_wrapper_done(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_done_void, CMessage_CkReductionMsg::__idx, __idx, 0);
}


void CkIndex_Main::_call_done_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->done();
}
PUPable_def(SINGLE_ARG(Closure_Main::done_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void InterfaceIsUp(void);
 */

void CProxy_Main::InterfaceIsUp(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_InterfaceIsUp_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_InterfaceIsUp_void(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_InterfaceIsUp_void(), impl_msg, &ckGetChareID(),0);
}

void CkIndex_Main::_call_redn_wrapper_InterfaceIsUp_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->InterfaceIsUp();
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function

int CkIndex_Main::reg_InterfaceIsUp_void() {
  int epidx = CkRegisterEp("InterfaceIsUp(void)",
      _call_InterfaceIsUp_void, 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function

int CkIndex_Main::reg_redn_wrapper_InterfaceIsUp_void() {
  return CkRegisterEp("redn_wrapper_InterfaceIsUp(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_InterfaceIsUp_void, CMessage_CkReductionMsg::__idx, __idx, 0);
}


void CkIndex_Main::_call_InterfaceIsUp_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->InterfaceIsUp();
}
PUPable_def(SINGLE_ARG(Closure_Main::InterfaceIsUp_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: Main(CkArgMsg* impl_msg);
  idx_Main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_Main_CkArgMsg());

  // REG: void done(void);
  idx_done_void();
  idx_redn_wrapper_done_void();

  // REG: void InterfaceIsUp(void);
  idx_InterfaceIsUp_void();
  idx_redn_wrapper_InterfaceIsUp_void();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array Cell: ArrayElement{
Cell(void);
void ftoc(const flow3D &c_f);
void solve_c(void);
Cell(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Cell::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell(void);
 */

void CProxyElement_Cell::insert(int onPE)
{ 
  void *impl_msg = CkAllocSysMsg();
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Cell::idx_Cell_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ftoc(const flow3D &c_f);
 */

void CProxyElement_Cell::ftoc(const flow3D &c_f, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const flow3D &c_f
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(flow3D &)c_f;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(flow3D &)c_f;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_ftoc_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void solve_c(void);
 */

void CProxyElement_Cell::solve_c(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_solve_c_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell(void);
 */

CkArrayID CProxy_Cell::ckNew(const CkArrayOptions &opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  return ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Cell::idx_Cell_void(), opts);
}

void CProxy_Cell::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Cell::idx_Cell_void(), _ck_array_creation_cb, opts, impl_msg);
}

CkArrayID CProxy_Cell::ckNew(const int s1, const int s2, const int s3)
{
  void *impl_msg = CkAllocSysMsg();
  CkArrayOptions opts(s1, s2, s3);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  return ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Cell::idx_Cell_void(), opts);
}

void CProxy_Cell::ckNew(const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb)
{
  void *impl_msg = CkAllocSysMsg();
  CkArrayOptions opts(s1, s2, s3);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Cell::idx_Cell_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function

int CkIndex_Cell::reg_Cell_void() {
  int epidx = CkRegisterEp("Cell(void)",
      _call_Cell_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Cell::_call_Cell_void(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) Cell();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ftoc(const flow3D &c_f);
 */

void CProxy_Cell::ftoc(const flow3D &c_f, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const flow3D &c_f
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(flow3D &)c_f;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(flow3D &)c_f;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Cell::idx_ftoc_marshall2(),0);
}

// Entry point registration function

int CkIndex_Cell::reg_ftoc_marshall2() {
  int epidx = CkRegisterEp("ftoc(const flow3D &c_f)",
      _call_ftoc_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ftoc_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ftoc_marshall2);

  return epidx;
}


void CkIndex_Cell::_call_ftoc_marshall2(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  PUP::fromMem implP(impl_buf);
  Closure_Cell::ftoc_2_closure* genClosure = new Closure_Cell::ftoc_2_closure();
  implP|genClosure->c_f;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->ftoc(genClosure);
  genClosure->deref();
}

int CkIndex_Cell::_callmarshall_ftoc_marshall2(char* impl_buf, void* impl_obj_void) {
  Cell* impl_obj = static_cast< Cell *>(impl_obj_void);
  PUP::fromMem implP(impl_buf);
  Closure_Cell::ftoc_2_closure* genClosure = new Closure_Cell::ftoc_2_closure();
  implP|genClosure->c_f;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->ftoc(genClosure);
  genClosure->deref();
  return implP.size();
}

void CkIndex_Cell::_marshallmessagepup_ftoc_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const flow3D &c_f*/
  PUP::fromMem implP(impl_buf);
  flow3D c_f; implP|c_f;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("c_f");
  implDestP|c_f;
}
PUPable_def(SINGLE_ARG(Closure_Cell::ftoc_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void solve_c(void);
 */

void CProxy_Cell::solve_c(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Cell::idx_solve_c_void(),0);
}

// Entry point registration function

int CkIndex_Cell::reg_solve_c_void() {
  int epidx = CkRegisterEp("solve_c(void)",
      _call_solve_c_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Cell::_call_solve_c_void(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->solve_c();
}
PUPable_def(SINGLE_ARG(Closure_Cell::solve_c_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_Cell::reg_Cell_CkMigrateMessage() {
  int epidx = CkRegisterEp("Cell(CkMigrateMessage* impl_msg)",
      _call_Cell_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_Cell::_call_Cell_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell *>(impl_obj_void);
  new (impl_obj) Cell((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ftoc(const flow3D &c_f);
 */

void CProxySection_Cell::ftoc(const flow3D &c_f, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const flow3D &c_f
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(flow3D &)c_f;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(flow3D &)c_f;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_ftoc_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void solve_c(void);
 */

void CProxySection_Cell::solve_c(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_solve_c_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Cell::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Cell(void);
  idx_Cell_void();
  CkRegisterDefaultCtor(__idx, idx_Cell_void());

  // REG: void ftoc(const flow3D &c_f);
  idx_ftoc_marshall2();

  // REG: void solve_c(void);
  idx_solve_c_void();

  // REG: Cell(CkMigrateMessage* impl_msg);
  idx_Cell_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Cell_CkMigrateMessage());

  Cell::__sdag_register(); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Cell::solve_c() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, NULL); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::solve_c_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_slist_0() {
  _for_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_slist_0_end() {
  solve_c_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_for_0() {
  iter = 0;
  if ( iter < t_steps) {
    _slist_1();
  } else {
    _atomic_2();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_for_0_end() {
   iter++;
  if ( iter < t_steps) {
    _slist_1();
  } else {
    _atomic_2();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_slist_1() {
  _atomic_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_slist_1_end() {
  _for_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_atomic_0() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Cell_send_to_flux_from_cell()), CkMyPe(), 0, NULL, NULL); 
  { // begin serial block
#line 27 "STDIN"

					fluxProxy(thisIndex.x,thisIndex.y,thisIndex.z).ctof(val_old,P);
				
#line 920 "run.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _when_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Cell::_when_0() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_1(static_cast<Closure_Cell::ftoc_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(0);
    c->anyEntries.push_back(0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_when_0_end(Closure_Cell::ftoc_2_closure* gen0) {
  _slist_1_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_atomic_1(Closure_Cell::ftoc_2_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Cell_receive_from_flux_to_cell()), CkMyPe(), 0, NULL, NULL); 
  {
    flow3D& c_f = gen0->getP0();
    { // begin serial block
#line 30 "STDIN"

					calcvar3D(val_new,val_old,c_f);
					gaslaw();
					copy3D(val_old,val_new,ndiv);
				
#line 965 "run.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_atomic_2() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Cell_atomic_2()), CkMyPe(), 0, NULL, NULL); 
  { // begin serial block
#line 36 "STDIN"

				CkCallback cb(CkReductionTarget(Main,done),mainProxy);
				contribute(cb);
			
#line 983 "run.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::ftoc(flow3D c_f){
  Closure_Cell::ftoc_2_closure* genClosure = new Closure_Cell::ftoc_2_closure();
  genClosure->getP0() = c_f;
  ftoc(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Cell::ftoc(Closure_Cell::ftoc_2_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(0, genClosure, 0);
  SDAG::Continuation* c = __dep->tryFindContinuation(0);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_0(
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, NULL); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Cell::_sdag_init() {
  __dep.reset(new SDAG::Dependency(1,1));
  __dep->addDepends(0,0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::__sdag_init() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_sdag_pup(PUP::er &p) {
    bool hasSDAG = __dep.get();
    p|hasSDAG;
    if (p.isUnpacking() && hasSDAG) _sdag_init();
    if (hasSDAG) { __dep->pup(p); }
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Cell::__sdag_register() {
  (void)_sdag_idx_Cell_send_to_flux_from_cell();
  (void)_sdag_idx_Cell_receive_from_flux_to_cell();
  (void)_sdag_idx_Cell_atomic_2();
  PUPable_reg(SINGLE_ARG(Closure_Cell::ftoc_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Cell::solve_c_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Cell::ftoc_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Cell::solve_c_3_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_idx_Cell_send_to_flux_from_cell() {
  static int epidx = _sdag_reg_Cell_send_to_flux_from_cell();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_reg_Cell_send_to_flux_from_cell() {
  return CkRegisterEp("Cell_send_to_flux_from_cell", NULL, 0, CkIndex_Cell::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_idx_Cell_receive_from_flux_to_cell() {
  static int epidx = _sdag_reg_Cell_receive_from_flux_to_cell();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_reg_Cell_receive_from_flux_to_cell() {
  return CkRegisterEp("Cell_receive_from_flux_to_cell", NULL, 0, CkIndex_Cell::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_idx_Cell_atomic_2() {
  static int epidx = _sdag_reg_Cell_atomic_2();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_reg_Cell_atomic_2() {
  return CkRegisterEp("Cell_atomic_2", NULL, 0, CkIndex_Cell::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: array Flux: ArrayElement{
Flux(void);
void itof(int tag, const flow2D &f);
void ctof(const flow3D &val_c, const double3D &Pt);
Flux(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Flux::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Flux(void);
 */

void CProxyElement_Flux::insert(int onPE)
{ 
  void *impl_msg = CkAllocSysMsg();
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Flux::idx_Flux_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void itof(int tag, const flow2D &f);
 */

void CProxyElement_Flux::itof(int tag, const flow2D &f, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int tag, const flow2D &f
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|tag;
    //Have to cast away const-ness to get pup routine
    implP|(flow2D &)f;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|tag;
    //Have to cast away const-ness to get pup routine
    implP|(flow2D &)f;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Flux::idx_itof_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ctof(const flow3D &val_c, const double3D &Pt);
 */

void CProxyElement_Flux::ctof(const flow3D &val_c, const double3D &Pt, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const flow3D &val_c, const double3D &Pt
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(flow3D &)val_c;
    //Have to cast away const-ness to get pup routine
    implP|(double3D &)Pt;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(flow3D &)val_c;
    //Have to cast away const-ness to get pup routine
    implP|(double3D &)Pt;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Flux::idx_ctof_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Flux(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Flux(void);
 */

CkArrayID CProxy_Flux::ckNew(const CkArrayOptions &opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  return ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Flux::idx_Flux_void(), opts);
}

void CProxy_Flux::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Flux::idx_Flux_void(), _ck_array_creation_cb, opts, impl_msg);
}

CkArrayID CProxy_Flux::ckNew(const int s1, const int s2, const int s3)
{
  void *impl_msg = CkAllocSysMsg();
  CkArrayOptions opts(s1, s2, s3);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  return ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Flux::idx_Flux_void(), opts);
}

void CProxy_Flux::ckNew(const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb)
{
  void *impl_msg = CkAllocSysMsg();
  CkArrayOptions opts(s1, s2, s3);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Flux::idx_Flux_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function

int CkIndex_Flux::reg_Flux_void() {
  int epidx = CkRegisterEp("Flux(void)",
      _call_Flux_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Flux::_call_Flux_void(void* impl_msg, void* impl_obj_void)
{
  Flux* impl_obj = static_cast<Flux *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) Flux();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void itof(int tag, const flow2D &f);
 */

void CProxy_Flux::itof(int tag, const flow2D &f, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int tag, const flow2D &f
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|tag;
    //Have to cast away const-ness to get pup routine
    implP|(flow2D &)f;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|tag;
    //Have to cast away const-ness to get pup routine
    implP|(flow2D &)f;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Flux::idx_itof_marshall2(),0);
}

// Entry point registration function

int CkIndex_Flux::reg_itof_marshall2() {
  int epidx = CkRegisterEp("itof(int tag, const flow2D &f)",
      _call_itof_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_itof_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_itof_marshall2);

  return epidx;
}


void CkIndex_Flux::_call_itof_marshall2(void* impl_msg, void* impl_obj_void)
{
  Flux* impl_obj = static_cast<Flux *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  PUP::fromMem implP(impl_buf);
  Closure_Flux::itof_2_closure* genClosure = new Closure_Flux::itof_2_closure();
  implP|genClosure->tag;
  implP|genClosure->f;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->itof(genClosure);
  genClosure->deref();
}

int CkIndex_Flux::_callmarshall_itof_marshall2(char* impl_buf, void* impl_obj_void) {
  Flux* impl_obj = static_cast< Flux *>(impl_obj_void);
  PUP::fromMem implP(impl_buf);
  Closure_Flux::itof_2_closure* genClosure = new Closure_Flux::itof_2_closure();
  implP|genClosure->tag;
  implP|genClosure->f;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->itof(genClosure);
  genClosure->deref();
  return implP.size();
}

void CkIndex_Flux::_marshallmessagepup_itof_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int tag, const flow2D &f*/
  PUP::fromMem implP(impl_buf);
  int tag; implP|tag;
  flow2D f; implP|f;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("tag");
  implDestP|tag;
  if (implDestP.hasComments()) implDestP.comment("f");
  implDestP|f;
}
PUPable_def(SINGLE_ARG(Closure_Flux::itof_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ctof(const flow3D &val_c, const double3D &Pt);
 */

void CProxy_Flux::ctof(const flow3D &val_c, const double3D &Pt, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const flow3D &val_c, const double3D &Pt
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(flow3D &)val_c;
    //Have to cast away const-ness to get pup routine
    implP|(double3D &)Pt;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(flow3D &)val_c;
    //Have to cast away const-ness to get pup routine
    implP|(double3D &)Pt;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Flux::idx_ctof_marshall3(),0);
}

// Entry point registration function

int CkIndex_Flux::reg_ctof_marshall3() {
  int epidx = CkRegisterEp("ctof(const flow3D &val_c, const double3D &Pt)",
      _call_ctof_marshall3, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ctof_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ctof_marshall3);

  return epidx;
}


void CkIndex_Flux::_call_ctof_marshall3(void* impl_msg, void* impl_obj_void)
{
  Flux* impl_obj = static_cast<Flux *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  PUP::fromMem implP(impl_buf);
  Closure_Flux::ctof_3_closure* genClosure = new Closure_Flux::ctof_3_closure();
  implP|genClosure->val_c;
  implP|genClosure->Pt;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->ctof(genClosure);
  genClosure->deref();
}

int CkIndex_Flux::_callmarshall_ctof_marshall3(char* impl_buf, void* impl_obj_void) {
  Flux* impl_obj = static_cast< Flux *>(impl_obj_void);
  PUP::fromMem implP(impl_buf);
  Closure_Flux::ctof_3_closure* genClosure = new Closure_Flux::ctof_3_closure();
  implP|genClosure->val_c;
  implP|genClosure->Pt;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->ctof(genClosure);
  genClosure->deref();
  return implP.size();
}

void CkIndex_Flux::_marshallmessagepup_ctof_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const flow3D &val_c, const double3D &Pt*/
  PUP::fromMem implP(impl_buf);
  flow3D val_c; implP|val_c;
  double3D Pt; implP|Pt;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("val_c");
  implDestP|val_c;
  if (implDestP.hasComments()) implDestP.comment("Pt");
  implDestP|Pt;
}
PUPable_def(SINGLE_ARG(Closure_Flux::ctof_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Flux(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_Flux::reg_Flux_CkMigrateMessage() {
  int epidx = CkRegisterEp("Flux(CkMigrateMessage* impl_msg)",
      _call_Flux_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_Flux::_call_Flux_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  Flux* impl_obj = static_cast<Flux *>(impl_obj_void);
  new (impl_obj) Flux((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Flux(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void itof(int tag, const flow2D &f);
 */

void CProxySection_Flux::itof(int tag, const flow2D &f, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int tag, const flow2D &f
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|tag;
    //Have to cast away const-ness to get pup routine
    implP|(flow2D &)f;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|tag;
    //Have to cast away const-ness to get pup routine
    implP|(flow2D &)f;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Flux::idx_itof_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ctof(const flow3D &val_c, const double3D &Pt);
 */

void CProxySection_Flux::ctof(const flow3D &val_c, const double3D &Pt, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const flow3D &val_c, const double3D &Pt
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(flow3D &)val_c;
    //Have to cast away const-ness to get pup routine
    implP|(double3D &)Pt;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(flow3D &)val_c;
    //Have to cast away const-ness to get pup routine
    implP|(double3D &)Pt;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Flux::idx_ctof_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Flux(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Flux::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Flux(void);
  idx_Flux_void();
  CkRegisterDefaultCtor(__idx, idx_Flux_void());

  // REG: void itof(int tag, const flow2D &f);
  idx_itof_marshall2();

  // REG: void ctof(const flow3D &val_c, const double3D &Pt);
  idx_ctof_marshall3();

  // REG: Flux(CkMigrateMessage* impl_msg);
  idx_Flux_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Flux_CkMigrateMessage());

  Flux::__sdag_register(); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Flux::ctof(flow3D val_c, double3D Pt){
  Closure_Flux::ctof_3_closure* genClosure = new Closure_Flux::ctof_3_closure();
  genClosure->getP0() = val_c;
  genClosure->getP1() = Pt;
  ctof(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Flux::ctof(Closure_Flux::ctof_3_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0(gen0);
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, NULL); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::ctof_end(Closure_Flux::ctof_3_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_slist_0(Closure_Flux::ctof_3_closure* gen0) {
  _atomic_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_slist_0_end(Closure_Flux::ctof_3_closure* gen0) {
  ctof_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_atomic_0(Closure_Flux::ctof_3_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Flux_atomic_0()), CkMyPe(), 0, NULL, NULL); 
  {
    flow3D& val_c = gen0->getP0();
    double3D& Pt = gen0->getP1();
    { // begin serial block
#line 48 "STDIN"

				copy3D(P,Pt,ndiv);
				copy3D(cell_val,val_c,ndiv);
				flow2D v1, v2, v3, v4, v5, v6;
				double2D P1, P2, P3, P4, P5, P6;
				v1.resize(ndiv);
				v2.resize(ndiv);
				v3.resize(ndiv);
				v4.resize(ndiv);
				v5.resize(ndiv);
				v6.resize(ndiv);
				P1.resize(ndiv);
				P2.resize(ndiv);
				P3.resize(ndiv);
				P4.resize(ndiv);
				P5.resize(ndiv);
				P6.resize(ndiv);
				for (int i = 0; i < ndiv; i++){
					v1[i].resize(ndiv);
					v2[i].resize(ndiv);
					v3[i].resize(ndiv);
					v4[i].resize(ndiv);
					v5[i].resize(ndiv);
					v6[i].resize(ndiv);
					P1[i].resize(ndiv);
					P2[i].resize(ndiv);
					P3[i].resize(ndiv);
					P4[i].resize(ndiv);
					P5[i].resize(ndiv);
					P6[i].resize(ndiv);
				}
				for (int i = 0; i < ndiv; i++){
					for (int j = 0; j < ndiv; j++){
						v1[i][j] = cell_val[0][i][j];
						v2[i][j] = cell_val[ndiv-1][i][j];
						v3[i][j] = cell_val[j][0][i];
						v4[i][j] = cell_val[j][ndiv-1][i];
						v5[i][j] = cell_val[i][j][0];
						v6[i][j] = cell_val[i][j][ndiv-1];
						P1[i][j] = P[0][i][j];
						P2[i][j] = P[ndiv-1][i][j];
						P3[i][j] = P[j][0][i];
						P4[i][j] = P[j][ndiv-1][i];
						P5[i][j] = P[i][j][0];
						P6[i][j] = P[i][j][ndiv-1];
					}
				}
				
				interfaceProxy(0,thisIndex.x,thisIndex.y,thisIndex.z).ftoi(0,v1,P1);
				interfaceProxy(0,thisIndex.x+1,thisIndex.y,thisIndex.z).ftoi(1,v2,P2);
				interfaceProxy(1,thisIndex.y,thisIndex.z,thisIndex.x).ftoi(2,v3,P3);
				interfaceProxy(1,thisIndex.y+1,thisIndex.z,thisIndex.x).ftoi(3,v4,P4);
				interfaceProxy(2,thisIndex.z,thisIndex.x,thisIndex.y).ftoi(4,v5,P5);
				interfaceProxy(2,thisIndex.z+1,thisIndex.x,thisIndex.y).ftoi(5,v6,P6);
			
#line 1625 "run.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _overlap_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_overlap_0(Closure_Flux::ctof_3_closure* gen0) {
  _olist_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_overlap_0_end(Closure_Flux::ctof_3_closure* gen0) {
  _atomic_8(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_olist_0(Closure_Flux::ctof_3_closure* gen0) {
  SDAG::CCounter *_co0= new SDAG::CCounter(7);
  _atomic_1(gen0, _co0);
  _when_0(gen0, _co0);
  _when_1(gen0, _co0);
  _when_2(gen0, _co0);
  _when_3(gen0, _co0);
  _when_4(gen0, _co0);
  _when_5(gen0, _co0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_olist_0_end(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0) {
  _co0->decrement();
  if (_co0->isDone()) {
  _co0->deref();
    _overlap_0_end(gen0);
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_atomic_1(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Flux_flux_calc()), CkMyPe(), 0, NULL, NULL); 
  {
    flow3D& val_c = gen0->getP0();
    double3D& Pt = gen0->getP1();
    {
      { // begin serial block
#line 104 "STDIN"

					inviscidFlux();
				
#line 1685 "run.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _olist_0_end(gen0, _co0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Flux::_when_0(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    flow3D& val_c = gen0->getP0();
    double3D& Pt = gen0->getP1();
    {
      {
        refnum_0 = 0;
      }
    }
  }
  return _when_0(gen0, _co0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Flux::_when_0(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_2(gen0, _co0, static_cast<Closure_Flux::itof_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(0);
    c->addClosure(gen0);
    c->addClosure(_co0);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_when_0_end(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2) {
  _olist_0_end(gen0, _co0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_atomic_2(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Flux_atomic_2()), CkMyPe(), 0, NULL, NULL); 
  {
    flow3D& val_c = gen0->getP0();
    double3D& Pt = gen0->getP1();
    {
      {
        int& tag = gen2->getP0();
        flow2D& f = gen2->getP1();
        { // begin serial block
#line 107 "STDIN"

					for (int i = 0; i < ndiv; i++){
						for (int j = 0; j < ndiv; j++){
							flux_f[0][0][i][j] = f[i][j];
						}
					}
				
#line 1759 "run.def.h"
        } // end serial block
      }
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_0_end(gen0, _co0, gen2);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Flux::_when_1(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    flow3D& val_c = gen0->getP0();
    double3D& Pt = gen0->getP1();
    {
      {
        refnum_0 = 1;
      }
    }
  }
  return _when_1(gen0, _co0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Flux::_when_1(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_3(gen0, _co0, static_cast<Closure_Flux::itof_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(1);
    c->addClosure(gen0);
    c->addClosure(_co0);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_when_1_end(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2) {
  _olist_0_end(gen0, _co0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_atomic_3(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Flux_atomic_3()), CkMyPe(), 0, NULL, NULL); 
  {
    flow3D& val_c = gen0->getP0();
    double3D& Pt = gen0->getP1();
    {
      {
        int& tag = gen2->getP0();
        flow2D& f = gen2->getP1();
        { // begin serial block
#line 114 "STDIN"

					for (int i = 0; i < ndiv; i++){
						for (int j = 0; j < ndiv; j++){
							flux_f[0][ndiv][i][j] = f[i][j];
						}
					}
				
#line 1834 "run.def.h"
        } // end serial block
      }
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_1_end(gen0, _co0, gen2);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Flux::_when_2(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    flow3D& val_c = gen0->getP0();
    double3D& Pt = gen0->getP1();
    {
      {
        refnum_0 = 2;
      }
    }
  }
  return _when_2(gen0, _co0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Flux::_when_2(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_4(gen0, _co0, static_cast<Closure_Flux::itof_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(2);
    c->addClosure(gen0);
    c->addClosure(_co0);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_when_2_end(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2) {
  _olist_0_end(gen0, _co0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_atomic_4(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Flux_atomic_4()), CkMyPe(), 0, NULL, NULL); 
  {
    flow3D& val_c = gen0->getP0();
    double3D& Pt = gen0->getP1();
    {
      {
        int& tag = gen2->getP0();
        flow2D& f = gen2->getP1();
        { // begin serial block
#line 121 "STDIN"

					for (int i = 0; i < ndiv; i++){
						for (int j = 0; j < ndiv; j++){
							flux_f[1][0][i][j] = f[i][j];
						}
					}
				
#line 1909 "run.def.h"
        } // end serial block
      }
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_2_end(gen0, _co0, gen2);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Flux::_when_3(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    flow3D& val_c = gen0->getP0();
    double3D& Pt = gen0->getP1();
    {
      {
        refnum_0 = 3;
      }
    }
  }
  return _when_3(gen0, _co0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Flux::_when_3(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_5(gen0, _co0, static_cast<Closure_Flux::itof_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(3);
    c->addClosure(gen0);
    c->addClosure(_co0);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_when_3_end(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2) {
  _olist_0_end(gen0, _co0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_atomic_5(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Flux_atomic_5()), CkMyPe(), 0, NULL, NULL); 
  {
    flow3D& val_c = gen0->getP0();
    double3D& Pt = gen0->getP1();
    {
      {
        int& tag = gen2->getP0();
        flow2D& f = gen2->getP1();
        { // begin serial block
#line 128 "STDIN"

					for (int i = 0; i < ndiv; i++){
						for (int j = 0; j < ndiv; j++){
							flux_f[1][ndiv][i][j] = f[i][j];
						}
					}
				
#line 1984 "run.def.h"
        } // end serial block
      }
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_3_end(gen0, _co0, gen2);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Flux::_when_4(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    flow3D& val_c = gen0->getP0();
    double3D& Pt = gen0->getP1();
    {
      {
        refnum_0 = 4;
      }
    }
  }
  return _when_4(gen0, _co0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Flux::_when_4(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_6(gen0, _co0, static_cast<Closure_Flux::itof_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(4);
    c->addClosure(gen0);
    c->addClosure(_co0);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_when_4_end(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2) {
  _olist_0_end(gen0, _co0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_atomic_6(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Flux_atomic_6()), CkMyPe(), 0, NULL, NULL); 
  {
    flow3D& val_c = gen0->getP0();
    double3D& Pt = gen0->getP1();
    {
      {
        int& tag = gen2->getP0();
        flow2D& f = gen2->getP1();
        { // begin serial block
#line 135 "STDIN"

					for (int i = 0; i < ndiv; i++){
						for (int j = 0; j < ndiv; j++){
							flux_f[2][0][i][j] = f[i][j];
						}
					}
				
#line 2059 "run.def.h"
        } // end serial block
      }
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_4_end(gen0, _co0, gen2);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Flux::_when_5(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    flow3D& val_c = gen0->getP0();
    double3D& Pt = gen0->getP1();
    {
      {
        refnum_0 = 5;
      }
    }
  }
  return _when_5(gen0, _co0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Flux::_when_5(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_7(gen0, _co0, static_cast<Closure_Flux::itof_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(5);
    c->addClosure(gen0);
    c->addClosure(_co0);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_when_5_end(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2) {
  _olist_0_end(gen0, _co0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_atomic_7(Closure_Flux::ctof_3_closure* gen0, SDAG::CCounter* _co0, Closure_Flux::itof_2_closure* gen2) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Flux_atomic_7()), CkMyPe(), 0, NULL, NULL); 
  {
    flow3D& val_c = gen0->getP0();
    double3D& Pt = gen0->getP1();
    {
      {
        int& tag = gen2->getP0();
        flow2D& f = gen2->getP1();
        { // begin serial block
#line 142 "STDIN"

					for (int i = 0; i < ndiv; i++){
						for (int j = 0; j < ndiv; j++){
							flux_f[2][ndiv][i][j] = f[i][j];
						}
					}
				
#line 2134 "run.def.h"
        } // end serial block
      }
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_5_end(gen0, _co0, gen2);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_atomic_8(Closure_Flux::ctof_3_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Flux_atomic_8()), CkMyPe(), 0, NULL, NULL); 
  {
    flow3D& val_c = gen0->getP0();
    double3D& Pt = gen0->getP1();
    { // begin serial block
#line 150 "STDIN"

				fluxFacetoCell();
				cellProxy(thisIndex.x,thisIndex.y,thisIndex.z).ftoc(flux_c);
			
#line 2157 "run.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::itof(int tag, flow2D f){
  Closure_Flux::itof_2_closure* genClosure = new Closure_Flux::itof_2_closure();
  genClosure->getP0() = tag;
  genClosure->getP1() = f;
  itof(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Flux::itof(Closure_Flux::itof_2_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(0, genClosure, genClosure->getP0());
  SDAG::Continuation* c = __dep->tryFindContinuation(0);
  if (c) {
    _TRACE_END_EXECUTE(); 
    switch(c->whenID) {
    case 0:
      _when_0(
        static_cast<Closure_Flux::ctof_3_closure*>(c->closure[0]), 
        static_cast<SDAG::CCounter*>(c->closure[1]), 
        c->refnums[0]
      );
    break;
    case 1:
      _when_1(
        static_cast<Closure_Flux::ctof_3_closure*>(c->closure[0]), 
        static_cast<SDAG::CCounter*>(c->closure[1]), 
        c->refnums[0]
      );
    break;
    case 2:
      _when_2(
        static_cast<Closure_Flux::ctof_3_closure*>(c->closure[0]), 
        static_cast<SDAG::CCounter*>(c->closure[1]), 
        c->refnums[0]
      );
    break;
    case 3:
      _when_3(
        static_cast<Closure_Flux::ctof_3_closure*>(c->closure[0]), 
        static_cast<SDAG::CCounter*>(c->closure[1]), 
        c->refnums[0]
      );
    break;
    case 4:
      _when_4(
        static_cast<Closure_Flux::ctof_3_closure*>(c->closure[0]), 
        static_cast<SDAG::CCounter*>(c->closure[1]), 
        c->refnums[0]
      );
    break;
    case 5:
      _when_5(
        static_cast<Closure_Flux::ctof_3_closure*>(c->closure[0]), 
        static_cast<SDAG::CCounter*>(c->closure[1]), 
        c->refnums[0]
      );
    break;
    }
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, NULL); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Flux::_sdag_init() {
  __dep.reset(new SDAG::Dependency(1,6));
  __dep->addDepends(0,0);
  __dep->addDepends(1,0);
  __dep->addDepends(2,0);
  __dep->addDepends(3,0);
  __dep->addDepends(4,0);
  __dep->addDepends(5,0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::__sdag_init() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Flux::_sdag_pup(PUP::er &p) {
    bool hasSDAG = __dep.get();
    p|hasSDAG;
    if (p.isUnpacking() && hasSDAG) _sdag_init();
    if (hasSDAG) { __dep->pup(p); }
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Flux::__sdag_register() {
  (void)_sdag_idx_Flux_atomic_0();
  (void)_sdag_idx_Flux_flux_calc();
  (void)_sdag_idx_Flux_atomic_2();
  (void)_sdag_idx_Flux_atomic_3();
  (void)_sdag_idx_Flux_atomic_4();
  (void)_sdag_idx_Flux_atomic_5();
  (void)_sdag_idx_Flux_atomic_6();
  (void)_sdag_idx_Flux_atomic_7();
  (void)_sdag_idx_Flux_atomic_8();
  PUPable_reg(SINGLE_ARG(Closure_Flux::itof_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Flux::ctof_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Flux::itof_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Flux::ctof_3_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Flux::_sdag_idx_Flux_atomic_0() {
  static int epidx = _sdag_reg_Flux_atomic_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Flux::_sdag_reg_Flux_atomic_0() {
  return CkRegisterEp("Flux_atomic_0", NULL, 0, CkIndex_Flux::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Flux::_sdag_idx_Flux_flux_calc() {
  static int epidx = _sdag_reg_Flux_flux_calc();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Flux::_sdag_reg_Flux_flux_calc() {
  return CkRegisterEp("Flux_flux_calc", NULL, 0, CkIndex_Flux::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Flux::_sdag_idx_Flux_atomic_2() {
  static int epidx = _sdag_reg_Flux_atomic_2();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Flux::_sdag_reg_Flux_atomic_2() {
  return CkRegisterEp("Flux_atomic_2", NULL, 0, CkIndex_Flux::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Flux::_sdag_idx_Flux_atomic_3() {
  static int epidx = _sdag_reg_Flux_atomic_3();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Flux::_sdag_reg_Flux_atomic_3() {
  return CkRegisterEp("Flux_atomic_3", NULL, 0, CkIndex_Flux::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Flux::_sdag_idx_Flux_atomic_4() {
  static int epidx = _sdag_reg_Flux_atomic_4();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Flux::_sdag_reg_Flux_atomic_4() {
  return CkRegisterEp("Flux_atomic_4", NULL, 0, CkIndex_Flux::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Flux::_sdag_idx_Flux_atomic_5() {
  static int epidx = _sdag_reg_Flux_atomic_5();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Flux::_sdag_reg_Flux_atomic_5() {
  return CkRegisterEp("Flux_atomic_5", NULL, 0, CkIndex_Flux::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Flux::_sdag_idx_Flux_atomic_6() {
  static int epidx = _sdag_reg_Flux_atomic_6();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Flux::_sdag_reg_Flux_atomic_6() {
  return CkRegisterEp("Flux_atomic_6", NULL, 0, CkIndex_Flux::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Flux::_sdag_idx_Flux_atomic_7() {
  static int epidx = _sdag_reg_Flux_atomic_7();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Flux::_sdag_reg_Flux_atomic_7() {
  return CkRegisterEp("Flux_atomic_7", NULL, 0, CkIndex_Flux::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Flux::_sdag_idx_Flux_atomic_8() {
  static int epidx = _sdag_reg_Flux_atomic_8();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Flux::_sdag_reg_Flux_atomic_8() {
  return CkRegisterEp("Flux_atomic_8", NULL, 0, CkIndex_Flux::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: array Interface: ArrayElement{
Interface(void);
void ftoi(int tag, const flow2D &f, const double2D &P);
void solve_i(void);
Interface(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Interface::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Interface(void);
 */

void CProxyElement_Interface::insert(int onPE)
{ 
  void *impl_msg = CkAllocSysMsg();
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Interface::idx_Interface_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ftoi(int tag, const flow2D &f, const double2D &P);
 */

void CProxyElement_Interface::ftoi(int tag, const flow2D &f, const double2D &P, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int tag, const flow2D &f, const double2D &P
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|tag;
    //Have to cast away const-ness to get pup routine
    implP|(flow2D &)f;
    //Have to cast away const-ness to get pup routine
    implP|(double2D &)P;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|tag;
    //Have to cast away const-ness to get pup routine
    implP|(flow2D &)f;
    //Have to cast away const-ness to get pup routine
    implP|(double2D &)P;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Interface::idx_ftoi_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void solve_i(void);
 */

void CProxyElement_Interface::solve_i(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Interface::idx_solve_i_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Interface(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Interface(void);
 */

CkArrayID CProxy_Interface::ckNew(const CkArrayOptions &opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  return ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Interface::idx_Interface_void(), opts);
}

void CProxy_Interface::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Interface::idx_Interface_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function

int CkIndex_Interface::reg_Interface_void() {
  int epidx = CkRegisterEp("Interface(void)",
      _call_Interface_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Interface::_call_Interface_void(void* impl_msg, void* impl_obj_void)
{
  Interface* impl_obj = static_cast<Interface *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) Interface();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ftoi(int tag, const flow2D &f, const double2D &P);
 */

void CProxy_Interface::ftoi(int tag, const flow2D &f, const double2D &P, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int tag, const flow2D &f, const double2D &P
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|tag;
    //Have to cast away const-ness to get pup routine
    implP|(flow2D &)f;
    //Have to cast away const-ness to get pup routine
    implP|(double2D &)P;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|tag;
    //Have to cast away const-ness to get pup routine
    implP|(flow2D &)f;
    //Have to cast away const-ness to get pup routine
    implP|(double2D &)P;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Interface::idx_ftoi_marshall2(),0);
}

// Entry point registration function

int CkIndex_Interface::reg_ftoi_marshall2() {
  int epidx = CkRegisterEp("ftoi(int tag, const flow2D &f, const double2D &P)",
      _call_ftoi_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ftoi_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ftoi_marshall2);

  return epidx;
}


void CkIndex_Interface::_call_ftoi_marshall2(void* impl_msg, void* impl_obj_void)
{
  Interface* impl_obj = static_cast<Interface *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  PUP::fromMem implP(impl_buf);
  Closure_Interface::ftoi_2_closure* genClosure = new Closure_Interface::ftoi_2_closure();
  implP|genClosure->tag;
  implP|genClosure->f;
  implP|genClosure->P;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->ftoi(genClosure);
  genClosure->deref();
}

int CkIndex_Interface::_callmarshall_ftoi_marshall2(char* impl_buf, void* impl_obj_void) {
  Interface* impl_obj = static_cast< Interface *>(impl_obj_void);
  PUP::fromMem implP(impl_buf);
  Closure_Interface::ftoi_2_closure* genClosure = new Closure_Interface::ftoi_2_closure();
  implP|genClosure->tag;
  implP|genClosure->f;
  implP|genClosure->P;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->ftoi(genClosure);
  genClosure->deref();
  return implP.size();
}

void CkIndex_Interface::_marshallmessagepup_ftoi_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int tag, const flow2D &f, const double2D &P*/
  PUP::fromMem implP(impl_buf);
  int tag; implP|tag;
  flow2D f; implP|f;
  double2D P; implP|P;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("tag");
  implDestP|tag;
  if (implDestP.hasComments()) implDestP.comment("f");
  implDestP|f;
  if (implDestP.hasComments()) implDestP.comment("P");
  implDestP|P;
}
PUPable_def(SINGLE_ARG(Closure_Interface::ftoi_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void solve_i(void);
 */

void CProxy_Interface::solve_i(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Interface::idx_solve_i_void(),0);
}

// Entry point registration function

int CkIndex_Interface::reg_solve_i_void() {
  int epidx = CkRegisterEp("solve_i(void)",
      _call_solve_i_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Interface::_call_solve_i_void(void* impl_msg, void* impl_obj_void)
{
  Interface* impl_obj = static_cast<Interface *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->solve_i();
}
PUPable_def(SINGLE_ARG(Closure_Interface::solve_i_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Interface(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_Interface::reg_Interface_CkMigrateMessage() {
  int epidx = CkRegisterEp("Interface(CkMigrateMessage* impl_msg)",
      _call_Interface_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_Interface::_call_Interface_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  Interface* impl_obj = static_cast<Interface *>(impl_obj_void);
  new (impl_obj) Interface((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Interface(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ftoi(int tag, const flow2D &f, const double2D &P);
 */

void CProxySection_Interface::ftoi(int tag, const flow2D &f, const double2D &P, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int tag, const flow2D &f, const double2D &P
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|tag;
    //Have to cast away const-ness to get pup routine
    implP|(flow2D &)f;
    //Have to cast away const-ness to get pup routine
    implP|(double2D &)P;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|tag;
    //Have to cast away const-ness to get pup routine
    implP|(flow2D &)f;
    //Have to cast away const-ness to get pup routine
    implP|(double2D &)P;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Interface::idx_ftoi_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void solve_i(void);
 */

void CProxySection_Interface::solve_i(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Interface::idx_solve_i_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Interface(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Interface::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Interface(void);
  idx_Interface_void();
  CkRegisterDefaultCtor(__idx, idx_Interface_void());

  // REG: void ftoi(int tag, const flow2D &f, const double2D &P);
  idx_ftoi_marshall2();

  // REG: void solve_i(void);
  idx_solve_i_void();

  // REG: Interface(CkMigrateMessage* impl_msg);
  idx_Interface_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Interface_CkMigrateMessage());

  Interface::__sdag_register(); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Interface::solve_i() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, NULL); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::solve_i_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_0() {
  _atomic_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_0_end() {
  solve_i_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_atomic_0() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Interface_atomic_0()), CkMyPe(), 0, NULL, NULL); 
  { // begin serial block
#line 162 "STDIN"

			//	CkPrintf("Reducing to check if its working \n");
				CkCallback cb(CkReductionTarget(Main,InterfaceIsUp),mainProxy);
				contribute(cb);
			
#line 2794 "run.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _for_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_for_0() {
  iter = 0;
  if ( iter < t_steps) {
    _slist_1();
  } else {
    _slist_0_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_for_0_end() {
   iter++;
  if ( iter < t_steps) {
    _slist_1();
  } else {
    _slist_0_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_1() {
  _if_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_1_end() {
  _for_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_if_0() {
  if (thisIndex.w == 0) {
    _slist_10();
  } else {
    _else_0();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_if_0_end() {
  _slist_1_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_else_0() {
  _if_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_else_0_end() {
  _slist_1_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_if_1() {
  if (thisIndex.w == 1) {
    _slist_6();
  } else {
    _else_1();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_if_1_end() {
  _else_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_else_1() {
  _slist_2();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_else_1_end() {
  _else_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_2() {
  _if_2();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_2_end() {
  _else_1_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_if_2() {
  if (thisIndex.x == 0) {
    _slist_5();
  } else {
    _else_2();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_if_2_end() {
  _slist_2_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_else_2() {
  _if_3();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_else_2_end() {
  _slist_2_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_if_3() {
  if (thisIndex.x == dimZ) {
    _slist_4();
  } else {
    _else_3();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_if_3_end() {
  _else_2_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_else_3() {
  _slist_3();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_else_3_end() {
  _else_2_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_3() {
  _overlap_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_3_end() {
  _else_3_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_overlap_0() {
  _olist_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_overlap_0_end() {
  _atomic_3();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_olist_0() {
  SDAG::CCounter *_co0= new SDAG::CCounter(2);
  _when_0(_co0);
  _when_1(_co0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_olist_0_end(SDAG::CCounter* _co0) {
  _co0->decrement();
  if (_co0->isDone()) {
  _co0->deref();
    _overlap_0_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_0(SDAG::CCounter* _co0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    {
      refnum_0 = 4;
    }
  }
  return _when_0(_co0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_0(SDAG::CCounter* _co0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_1(_co0, static_cast<Closure_Interface::ftoi_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(0);
    c->addClosure(_co0);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_when_0_end(SDAG::CCounter* _co0, Closure_Interface::ftoi_2_closure* gen1) {
  _olist_0_end(_co0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_atomic_1(SDAG::CCounter* _co0, Closure_Interface::ftoi_2_closure* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Interface_atomic_1()), CkMyPe(), 0, NULL, NULL); 
  {
    {
      int& tag = gen1->getP0();
      flow2D& f = gen1->getP1();
      double2D& P = gen1->getP2();
      { // begin serial block
#line 263 "STDIN"

								copy2D(val_r,f,ndiv);
								copy2D(P_right,P,ndiv);
							
#line 3084 "run.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_0_end(_co0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_1(SDAG::CCounter* _co0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    {
      refnum_0 = 5;
    }
  }
  return _when_1(_co0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_1(SDAG::CCounter* _co0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_2(_co0, static_cast<Closure_Interface::ftoi_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(1);
    c->addClosure(_co0);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_when_1_end(SDAG::CCounter* _co0, Closure_Interface::ftoi_2_closure* gen1) {
  _olist_0_end(_co0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_atomic_2(SDAG::CCounter* _co0, Closure_Interface::ftoi_2_closure* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Interface_atomic_2()), CkMyPe(), 0, NULL, NULL); 
  {
    {
      int& tag = gen1->getP0();
      flow2D& f = gen1->getP1();
      double2D& P = gen1->getP2();
      { // begin serial block
#line 267 "STDIN"

								copy2D(val_l,f,ndiv);
								copy2D(P_left,P,ndiv);
							
#line 3148 "run.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_1_end(_co0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_atomic_3() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Interface_atomic_3()), CkMyPe(), 0, NULL, NULL); 
  { // begin serial block
#line 272 "STDIN"

							calc();
							fluxProxy(thisIndex.y,thisIndex.z,thisIndex.x).itof(4,flux);
							fluxProxy(thisIndex.y,thisIndex.z,thisIndex.x-1).itof(5,flux);
						
#line 3168 "run.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_3_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_4() {
  _when_2();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_4_end() {
  _if_3_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_2() {
  CMK_REFNUM_TYPE refnum_0;
  {
    refnum_0 = 5;
  }
  return _when_2(refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_2(int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_4(static_cast<Closure_Interface::ftoi_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(2);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_when_2_end(Closure_Interface::ftoi_2_closure* gen0) {
  _slist_4_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_atomic_4(Closure_Interface::ftoi_2_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Interface_atomic_4()), CkMyPe(), 0, NULL, NULL); 
  {
    int& tag = gen0->getP0();
    flow2D& f = gen0->getP1();
    double2D& P = gen0->getP2();
    { // begin serial block
#line 253 "STDIN"

							copy2D(val_l,f,ndiv);
							copy2D(P_left,P,ndiv);
							wall(val_r,val_l,P_right,P_left);
							calc();
							fluxProxy(thisIndex.y,thisIndex.z,thisIndex.x-1).itof(5,flux);
						
#line 3243 "run.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_2_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_5() {
  _when_3();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_5_end() {
  _if_2_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_3() {
  CMK_REFNUM_TYPE refnum_0;
  {
    refnum_0 = 4;
  }
  return _when_3(refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_3(int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_5(static_cast<Closure_Interface::ftoi_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(3);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_when_3_end(Closure_Interface::ftoi_2_closure* gen0) {
  _slist_5_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_atomic_5(Closure_Interface::ftoi_2_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Interface_atomic_5()), CkMyPe(), 0, NULL, NULL); 
  {
    int& tag = gen0->getP0();
    flow2D& f = gen0->getP1();
    double2D& P = gen0->getP2();
    { // begin serial block
#line 244 "STDIN"

							copy2D(val_r,f,ndiv);
							copy2D(P_right,P,ndiv);
							wall(val_l,val_r,P_left,P_right);
							calc();
							fluxProxy(thisIndex.y,thisIndex.z,thisIndex.x).itof(4,flux);
						
#line 3319 "run.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_3_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_6() {
  _if_4();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_6_end() {
  _if_1_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_if_4() {
  if (thisIndex.x == 0) {
    _slist_9();
  } else {
    _else_4();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_if_4_end() {
  _slist_6_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_else_4() {
  _if_5();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_else_4_end() {
  _slist_6_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_if_5() {
  if (thisIndex.x == dimY) {
    _slist_8();
  } else {
    _else_5();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_if_5_end() {
  _else_4_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_else_5() {
  _slist_7();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_else_5_end() {
  _else_4_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_7() {
  _overlap_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_7_end() {
  _else_5_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_overlap_1() {
  _olist_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_overlap_1_end() {
  _atomic_8();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_olist_1() {
  SDAG::CCounter *_co1= new SDAG::CCounter(2);
  _when_4(_co1);
  _when_5(_co1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_olist_1_end(SDAG::CCounter* _co1) {
  _co1->decrement();
  if (_co1->isDone()) {
  _co1->deref();
    _overlap_1_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_4(SDAG::CCounter* _co1) {
  CMK_REFNUM_TYPE refnum_0;
  {
    {
      refnum_0 = 2;
    }
  }
  return _when_4(_co1, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_4(SDAG::CCounter* _co1, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_6(_co1, static_cast<Closure_Interface::ftoi_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(4);
    c->addClosure(_co1);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_when_4_end(SDAG::CCounter* _co1, Closure_Interface::ftoi_2_closure* gen1) {
  _olist_1_end(_co1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_atomic_6(SDAG::CCounter* _co1, Closure_Interface::ftoi_2_closure* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Interface_atomic_6()), CkMyPe(), 0, NULL, NULL); 
  {
    {
      int& tag = gen1->getP0();
      flow2D& f = gen1->getP1();
      double2D& P = gen1->getP2();
      { // begin serial block
#line 226 "STDIN"

								copy2D(val_r,f,ndiv);
								copy2D(P_right,P,ndiv);
							
#line 3508 "run.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_4_end(_co1, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_5(SDAG::CCounter* _co1) {
  CMK_REFNUM_TYPE refnum_0;
  {
    {
      refnum_0 = 3;
    }
  }
  return _when_5(_co1, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_5(SDAG::CCounter* _co1, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_7(_co1, static_cast<Closure_Interface::ftoi_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(5);
    c->addClosure(_co1);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_when_5_end(SDAG::CCounter* _co1, Closure_Interface::ftoi_2_closure* gen1) {
  _olist_1_end(_co1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_atomic_7(SDAG::CCounter* _co1, Closure_Interface::ftoi_2_closure* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Interface_atomic_7()), CkMyPe(), 0, NULL, NULL); 
  {
    {
      int& tag = gen1->getP0();
      flow2D& f = gen1->getP1();
      double2D& P = gen1->getP2();
      { // begin serial block
#line 230 "STDIN"

								copy2D(val_l,f,ndiv);
								copy2D(P_left,P,ndiv);
							
#line 3572 "run.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_5_end(_co1, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_atomic_8() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Interface_atomic_8()), CkMyPe(), 0, NULL, NULL); 
  { // begin serial block
#line 235 "STDIN"

							calc();
							fluxProxy(thisIndex.z,thisIndex.x,thisIndex.y).itof(2,flux);
							fluxProxy(thisIndex.z,thisIndex.x-1,thisIndex.y).itof(3,flux);
						
#line 3592 "run.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_7_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_8() {
  _when_6();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_8_end() {
  _if_5_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_6() {
  CMK_REFNUM_TYPE refnum_0;
  {
    refnum_0 = 3;
  }
  return _when_6(refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_6(int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_9(static_cast<Closure_Interface::ftoi_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(6);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_when_6_end(Closure_Interface::ftoi_2_closure* gen0) {
  _slist_8_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_atomic_9(Closure_Interface::ftoi_2_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Interface_atomic_9()), CkMyPe(), 0, NULL, NULL); 
  {
    int& tag = gen0->getP0();
    flow2D& f = gen0->getP1();
    double2D& P = gen0->getP2();
    { // begin serial block
#line 216 "STDIN"

							copy2D(val_l,f,ndiv);
							copy2D(P_left,P,ndiv);
							wall(val_r,val_l,P_right,P_left);
							calc();
							fluxProxy(thisIndex.z,thisIndex.x-1,thisIndex.y).itof(3,flux);
						
#line 3667 "run.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_6_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_9() {
  _when_7();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_9_end() {
  _if_4_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_7() {
  CMK_REFNUM_TYPE refnum_0;
  {
    refnum_0 = 2;
  }
  return _when_7(refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_7(int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_10(static_cast<Closure_Interface::ftoi_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(7);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_when_7_end(Closure_Interface::ftoi_2_closure* gen0) {
  _slist_9_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_atomic_10(Closure_Interface::ftoi_2_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Interface_atomic_10()), CkMyPe(), 0, NULL, NULL); 
  {
    int& tag = gen0->getP0();
    flow2D& f = gen0->getP1();
    double2D& P = gen0->getP2();
    { // begin serial block
#line 207 "STDIN"

							copy2D(val_r,f,ndiv);
							copy2D(P_right,P,ndiv);
							wall(val_l,val_r,P_left,P_right);
							calc();
							fluxProxy(thisIndex.z,thisIndex.x,thisIndex.y).itof(2,flux);
						
#line 3743 "run.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_7_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_10() {
  _if_6();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_10_end() {
  _if_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_if_6() {
  if (thisIndex.x == 0) {
    _slist_13();
  } else {
    _else_6();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_if_6_end() {
  _slist_10_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_else_6() {
  _if_7();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_else_6_end() {
  _slist_10_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_if_7() {
  if (thisIndex.x == dimX) {
    _slist_12();
  } else {
    _else_7();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_if_7_end() {
  _else_6_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_else_7() {
  _slist_11();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_else_7_end() {
  _else_6_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_11() {
  _overlap_2();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_11_end() {
  _else_7_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_overlap_2() {
  _olist_2();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_overlap_2_end() {
  _atomic_13();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_olist_2() {
  SDAG::CCounter *_co2= new SDAG::CCounter(2);
  _when_8(_co2);
  _when_9(_co2);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_olist_2_end(SDAG::CCounter* _co2) {
  _co2->decrement();
  if (_co2->isDone()) {
  _co2->deref();
    _overlap_2_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_8(SDAG::CCounter* _co2) {
  CMK_REFNUM_TYPE refnum_0;
  {
    {
      refnum_0 = 0;
    }
  }
  return _when_8(_co2, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_8(SDAG::CCounter* _co2, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_11(_co2, static_cast<Closure_Interface::ftoi_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(8);
    c->addClosure(_co2);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_when_8_end(SDAG::CCounter* _co2, Closure_Interface::ftoi_2_closure* gen1) {
  _olist_2_end(_co2);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_atomic_11(SDAG::CCounter* _co2, Closure_Interface::ftoi_2_closure* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Interface_atomic_11()), CkMyPe(), 0, NULL, NULL); 
  {
    {
      int& tag = gen1->getP0();
      flow2D& f = gen1->getP1();
      double2D& P = gen1->getP2();
      { // begin serial block
#line 189 "STDIN"

								copy2D(val_r,f,ndiv);
								copy2D(P_right,P,ndiv);
							
#line 3932 "run.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_8_end(_co2, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_9(SDAG::CCounter* _co2) {
  CMK_REFNUM_TYPE refnum_0;
  {
    {
      refnum_0 = 1;
    }
  }
  return _when_9(_co2, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_9(SDAG::CCounter* _co2, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_12(_co2, static_cast<Closure_Interface::ftoi_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(9);
    c->addClosure(_co2);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_when_9_end(SDAG::CCounter* _co2, Closure_Interface::ftoi_2_closure* gen1) {
  _olist_2_end(_co2);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_atomic_12(SDAG::CCounter* _co2, Closure_Interface::ftoi_2_closure* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Interface_atomic_12()), CkMyPe(), 0, NULL, NULL); 
  {
    {
      int& tag = gen1->getP0();
      flow2D& f = gen1->getP1();
      double2D& P = gen1->getP2();
      { // begin serial block
#line 193 "STDIN"

								copy2D(val_l,f,ndiv);
								copy2D(P_left,P,ndiv);
							
#line 3996 "run.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_9_end(_co2, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_atomic_13() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Interface_atomic_13()), CkMyPe(), 0, NULL, NULL); 
  { // begin serial block
#line 198 "STDIN"

							calc();
							fluxProxy(thisIndex.x,thisIndex.y,thisIndex.z).itof(0,flux);
							fluxProxy(thisIndex.x-1,thisIndex.y,thisIndex.z).itof(1,flux);
						
#line 4016 "run.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_11_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_12() {
  _when_10();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_12_end() {
  _if_7_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_10() {
  CMK_REFNUM_TYPE refnum_0;
  {
    refnum_0 = 1;
  }
  return _when_10(refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_10(int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_14(static_cast<Closure_Interface::ftoi_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(10);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_when_10_end(Closure_Interface::ftoi_2_closure* gen0) {
  _slist_12_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_atomic_14(Closure_Interface::ftoi_2_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Interface_atomic_14()), CkMyPe(), 0, NULL, NULL); 
  {
    int& tag = gen0->getP0();
    flow2D& f = gen0->getP1();
    double2D& P = gen0->getP2();
    { // begin serial block
#line 179 "STDIN"

							copy2D(val_l,f,ndiv);
							copy2D(P_left,P,ndiv);
							wall(val_r,val_l,P_right,P_left);
							calc();
							fluxProxy(thisIndex.x-1,thisIndex.y,thisIndex.z).itof(1,flux);
						
#line 4091 "run.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_10_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_13() {
  _when_11();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_slist_13_end() {
  _if_6_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_11() {
  CMK_REFNUM_TYPE refnum_0;
  {
    refnum_0 = 0;
  }
  return _when_11(refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Interface::_when_11(int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_15(static_cast<Closure_Interface::ftoi_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(11);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_when_11_end(Closure_Interface::ftoi_2_closure* gen0) {
  _slist_13_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_atomic_15(Closure_Interface::ftoi_2_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Interface_atomic_15()), CkMyPe(), 0, NULL, NULL); 
  {
    int& tag = gen0->getP0();
    flow2D& f = gen0->getP1();
    double2D& P = gen0->getP2();
    { // begin serial block
#line 170 "STDIN"

							copy2D(val_r,f,ndiv);
							copy2D(P_right,P,ndiv);
							wall(val_l,val_r,P_left,P_right);
							calc();
							fluxProxy(thisIndex.x,thisIndex.y,thisIndex.z).itof(0,flux);
						
#line 4167 "run.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_11_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::ftoi(int tag, flow2D f, double2D P){
  Closure_Interface::ftoi_2_closure* genClosure = new Closure_Interface::ftoi_2_closure();
  genClosure->getP0() = tag;
  genClosure->getP1() = f;
  genClosure->getP2() = P;
  ftoi(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Interface::ftoi(Closure_Interface::ftoi_2_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(0, genClosure, genClosure->getP0());
  SDAG::Continuation* c = __dep->tryFindContinuation(0);
  if (c) {
    _TRACE_END_EXECUTE(); 
    switch(c->whenID) {
    case 0:
      _when_0(
        static_cast<SDAG::CCounter*>(c->closure[0]), 
        c->refnums[0]
      );
    break;
    case 1:
      _when_1(
        static_cast<SDAG::CCounter*>(c->closure[0]), 
        c->refnums[0]
      );
    break;
    case 2:
      _when_2(
        c->refnums[0]
      );
    break;
    case 3:
      _when_3(
        c->refnums[0]
      );
    break;
    case 4:
      _when_4(
        static_cast<SDAG::CCounter*>(c->closure[0]), 
        c->refnums[0]
      );
    break;
    case 5:
      _when_5(
        static_cast<SDAG::CCounter*>(c->closure[0]), 
        c->refnums[0]
      );
    break;
    case 6:
      _when_6(
        c->refnums[0]
      );
    break;
    case 7:
      _when_7(
        c->refnums[0]
      );
    break;
    case 8:
      _when_8(
        static_cast<SDAG::CCounter*>(c->closure[0]), 
        c->refnums[0]
      );
    break;
    case 9:
      _when_9(
        static_cast<SDAG::CCounter*>(c->closure[0]), 
        c->refnums[0]
      );
    break;
    case 10:
      _when_10(
        c->refnums[0]
      );
    break;
    case 11:
      _when_11(
        c->refnums[0]
      );
    break;
    }
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, NULL); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Interface::_sdag_init() {
  __dep.reset(new SDAG::Dependency(1,12));
  __dep->addDepends(0,0);
  __dep->addDepends(1,0);
  __dep->addDepends(2,0);
  __dep->addDepends(3,0);
  __dep->addDepends(4,0);
  __dep->addDepends(5,0);
  __dep->addDepends(6,0);
  __dep->addDepends(7,0);
  __dep->addDepends(8,0);
  __dep->addDepends(9,0);
  __dep->addDepends(10,0);
  __dep->addDepends(11,0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::__sdag_init() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Interface::_sdag_pup(PUP::er &p) {
    bool hasSDAG = __dep.get();
    p|hasSDAG;
    if (p.isUnpacking() && hasSDAG) _sdag_init();
    if (hasSDAG) { __dep->pup(p); }
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Interface::__sdag_register() {
  (void)_sdag_idx_Interface_atomic_0();
  (void)_sdag_idx_Interface_atomic_15();
  (void)_sdag_idx_Interface_atomic_14();
  (void)_sdag_idx_Interface_atomic_11();
  (void)_sdag_idx_Interface_atomic_12();
  (void)_sdag_idx_Interface_atomic_13();
  (void)_sdag_idx_Interface_atomic_10();
  (void)_sdag_idx_Interface_atomic_9();
  (void)_sdag_idx_Interface_atomic_6();
  (void)_sdag_idx_Interface_atomic_7();
  (void)_sdag_idx_Interface_atomic_8();
  (void)_sdag_idx_Interface_atomic_5();
  (void)_sdag_idx_Interface_atomic_4();
  (void)_sdag_idx_Interface_atomic_1();
  (void)_sdag_idx_Interface_atomic_2();
  (void)_sdag_idx_Interface_atomic_3();
  PUPable_reg(SINGLE_ARG(Closure_Interface::ftoi_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Interface::solve_i_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Interface::ftoi_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Interface::solve_i_3_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_idx_Interface_atomic_0() {
  static int epidx = _sdag_reg_Interface_atomic_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_reg_Interface_atomic_0() {
  return CkRegisterEp("Interface_atomic_0", NULL, 0, CkIndex_Interface::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_idx_Interface_atomic_15() {
  static int epidx = _sdag_reg_Interface_atomic_15();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_reg_Interface_atomic_15() {
  return CkRegisterEp("Interface_atomic_15", NULL, 0, CkIndex_Interface::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_idx_Interface_atomic_14() {
  static int epidx = _sdag_reg_Interface_atomic_14();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_reg_Interface_atomic_14() {
  return CkRegisterEp("Interface_atomic_14", NULL, 0, CkIndex_Interface::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_idx_Interface_atomic_11() {
  static int epidx = _sdag_reg_Interface_atomic_11();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_reg_Interface_atomic_11() {
  return CkRegisterEp("Interface_atomic_11", NULL, 0, CkIndex_Interface::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_idx_Interface_atomic_12() {
  static int epidx = _sdag_reg_Interface_atomic_12();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_reg_Interface_atomic_12() {
  return CkRegisterEp("Interface_atomic_12", NULL, 0, CkIndex_Interface::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_idx_Interface_atomic_13() {
  static int epidx = _sdag_reg_Interface_atomic_13();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_reg_Interface_atomic_13() {
  return CkRegisterEp("Interface_atomic_13", NULL, 0, CkIndex_Interface::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_idx_Interface_atomic_10() {
  static int epidx = _sdag_reg_Interface_atomic_10();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_reg_Interface_atomic_10() {
  return CkRegisterEp("Interface_atomic_10", NULL, 0, CkIndex_Interface::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_idx_Interface_atomic_9() {
  static int epidx = _sdag_reg_Interface_atomic_9();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_reg_Interface_atomic_9() {
  return CkRegisterEp("Interface_atomic_9", NULL, 0, CkIndex_Interface::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_idx_Interface_atomic_6() {
  static int epidx = _sdag_reg_Interface_atomic_6();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_reg_Interface_atomic_6() {
  return CkRegisterEp("Interface_atomic_6", NULL, 0, CkIndex_Interface::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_idx_Interface_atomic_7() {
  static int epidx = _sdag_reg_Interface_atomic_7();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_reg_Interface_atomic_7() {
  return CkRegisterEp("Interface_atomic_7", NULL, 0, CkIndex_Interface::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_idx_Interface_atomic_8() {
  static int epidx = _sdag_reg_Interface_atomic_8();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_reg_Interface_atomic_8() {
  return CkRegisterEp("Interface_atomic_8", NULL, 0, CkIndex_Interface::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_idx_Interface_atomic_5() {
  static int epidx = _sdag_reg_Interface_atomic_5();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_reg_Interface_atomic_5() {
  return CkRegisterEp("Interface_atomic_5", NULL, 0, CkIndex_Interface::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_idx_Interface_atomic_4() {
  static int epidx = _sdag_reg_Interface_atomic_4();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_reg_Interface_atomic_4() {
  return CkRegisterEp("Interface_atomic_4", NULL, 0, CkIndex_Interface::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_idx_Interface_atomic_1() {
  static int epidx = _sdag_reg_Interface_atomic_1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_reg_Interface_atomic_1() {
  return CkRegisterEp("Interface_atomic_1", NULL, 0, CkIndex_Interface::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_idx_Interface_atomic_2() {
  static int epidx = _sdag_reg_Interface_atomic_2();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_reg_Interface_atomic_2() {
  return CkRegisterEp("Interface_atomic_2", NULL, 0, CkIndex_Interface::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_idx_Interface_atomic_3() {
  static int epidx = _sdag_reg_Interface_atomic_3();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Interface::_sdag_reg_Interface_atomic_3() {
  return CkRegisterEp("Interface_atomic_3", NULL, 0, CkIndex_Interface::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
void _registerrun(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("mainProxy","CProxy_Main",sizeof(mainProxy),(void *) &mainProxy,__xlater_roPup_mainProxy);

  CkRegisterReadonly("cellProxy","CProxy_Cell",sizeof(cellProxy),(void *) &cellProxy,__xlater_roPup_cellProxy);

  CkRegisterReadonly("fluxProxy","CProxy_Flux",sizeof(fluxProxy),(void *) &fluxProxy,__xlater_roPup_fluxProxy);

  CkRegisterReadonly("interfaceProxy","CProxy_Interface",sizeof(interfaceProxy),(void *) &interfaceProxy,__xlater_roPup_interfaceProxy);

  CkRegisterReadonly("dimX","int",sizeof(dimX),(void *) &dimX,__xlater_roPup_dimX);

  CkRegisterReadonly("dimY","int",sizeof(dimY),(void *) &dimY,__xlater_roPup_dimY);

  CkRegisterReadonly("dimZ","int",sizeof(dimZ),(void *) &dimZ,__xlater_roPup_dimZ);

  CkRegisterReadonly("t_steps","int",sizeof(t_steps),(void *) &t_steps,__xlater_roPup_t_steps);

  CkRegisterReadonly("dt","double",sizeof(dt),(void *) &dt,__xlater_roPup_dt);

  CkRegisterReadonly("dx","double",sizeof(dx),(void *) &dx,__xlater_roPup_dx);

  CkRegisterReadonly("ndiv","int",sizeof(ndiv),(void *) &ndiv,__xlater_roPup_ndiv);

  CkRegisterReadonly("gma","double",sizeof(gma),(void *) &gma,__xlater_roPup_gma);

/* REG: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void done(void);
void InterfaceIsUp(void);
};
*/
  CkIndex_Main::__register("Main", sizeof(Main));

/* REG: array Cell: ArrayElement{
Cell(void);
void ftoc(const flow3D &c_f);
void solve_c(void);
Cell(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Cell::__register("Cell", sizeof(Cell));

/* REG: array Flux: ArrayElement{
Flux(void);
void itof(int tag, const flow2D &f);
void ctof(const flow3D &val_c, const double3D &Pt);
Flux(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Flux::__register("Flux", sizeof(Flux));

/* REG: array Interface: ArrayElement{
Interface(void);
void ftoi(int tag, const flow2D &f, const double2D &P);
void solve_i(void);
Interface(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Interface::__register("Interface", sizeof(Interface));

}
extern "C" void CkRegisterMainModule(void) {
  _registerrun();
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Main::virtual_pup(PUP::er &p) {
    recursive_pup<Main >(dynamic_cast<Main* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Cell::virtual_pup(PUP::er &p) {
    recursive_pup<Cell >(dynamic_cast<Cell* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Flux::virtual_pup(PUP::er &p) {
    recursive_pup<Flux >(dynamic_cast<Flux* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Interface::virtual_pup(PUP::er &p) {
    recursive_pup<Interface >(dynamic_cast<Interface* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
