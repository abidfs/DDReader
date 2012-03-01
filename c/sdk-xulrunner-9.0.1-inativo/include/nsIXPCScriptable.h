/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/js/src/xpconnect/idl/nsIXPCScriptable.idl
 */

#ifndef __gen_nsIXPCScriptable_h__
#define __gen_nsIXPCScriptable_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIXPConnect_h__
#include "nsIXPConnect.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#define NS_SUCCESS_I_DID_SOMETHING \
   (NS_ERROR_GENERATE_SUCCESS(NS_ERROR_MODULE_XPCONNECT,1))
/**
 * Classes that want to only be touched by chrome (or from code whose filename
 * begins with chrome://global/) shoudl return this from their scriptable
 * helper's PreCreate hook.
 */
#define NS_SUCCESS_CHROME_ACCESS_ONLY \
   (NS_ERROR_GENERATE_SUCCESS(NS_ERROR_MODULE_XPCONNECT,2))
/**
 * Classes that want slim wrappers should return NS_SUCCESS_ALLOW_SLIM_WRAPPERS
 * from their scriptable helper's PreCreate hook. They must also force a parent
 * for their wrapper (from the PreCreate hook), they must implement
 * nsWrapperCache and their scriptable helper must implement nsXPCClassInfo and
 * must return DONT_ASK_INSTANCE_FOR_SCRIPTABLE in the flags.
 */
#define NS_SUCCESS_ALLOW_SLIM_WRAPPERS \
   (NS_ERROR_GENERATE_SUCCESS(NS_ERROR_MODULE_XPCONNECT,3))

/* starting interface:    nsIXPCScriptable */
#define NS_IXPCSCRIPTABLE_IID_STR "a40ce52e-2d8c-400f-9af2-f8784a656070"

#define NS_IXPCSCRIPTABLE_IID \
  {0xa40ce52e, 0x2d8c, 0x400f, \
    { 0x9a, 0xf2, 0xf8, 0x78, 0x4a, 0x65, 0x60, 0x70 }}

class NS_NO_VTABLE nsIXPCScriptable : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXPCSCRIPTABLE_IID)

  enum { WANT_PRECREATE = 1U };

  enum { WANT_CREATE = 2U };

  enum { WANT_POSTCREATE = 4U };

  enum { WANT_ADDPROPERTY = 8U };

  enum { WANT_DELPROPERTY = 16U };

  enum { WANT_GETPROPERTY = 32U };

  enum { WANT_SETPROPERTY = 64U };

  enum { WANT_ENUMERATE = 128U };

  enum { WANT_NEWENUMERATE = 256U };

  enum { WANT_NEWRESOLVE = 512U };

  enum { WANT_CONVERT = 1024U };

  enum { WANT_FINALIZE = 2048U };

  enum { WANT_CHECKACCESS = 4096U };

  enum { WANT_CALL = 8192U };

  enum { WANT_CONSTRUCT = 16384U };

  enum { WANT_HASINSTANCE = 32768U };

  enum { WANT_TRACE = 65536U };

  enum { USE_JSSTUB_FOR_ADDPROPERTY = 131072U };

  enum { USE_JSSTUB_FOR_DELPROPERTY = 262144U };

  enum { USE_JSSTUB_FOR_SETPROPERTY = 524288U };

  enum { DONT_ENUM_STATIC_PROPS = 1048576U };

  enum { DONT_ENUM_QUERY_INTERFACE = 2097152U };

  enum { DONT_ASK_INSTANCE_FOR_SCRIPTABLE = 4194304U };

  enum { CLASSINFO_INTERFACES_ONLY = 8388608U };

  enum { ALLOW_PROP_MODS_DURING_RESOLVE = 16777216U };

  enum { ALLOW_PROP_MODS_TO_PROTOTYPE = 33554432U };

  enum { DONT_SHARE_PROTOTYPE = 67108864U };

  enum { DONT_REFLECT_INTERFACE_NAMES = 134217728U };

  enum { WANT_EQUALITY = 268435456U };

  enum { WANT_OUTER_OBJECT = 536870912U };

  enum { USE_STUB_EQUALITY_HOOK = 1073741824U };

  enum { RESERVED = 2147483648U };

  /* readonly attribute string className; */
  NS_IMETHOD GetClassName(char * *aClassName) = 0;

  /* readonly attribute PRUint32 scriptableFlags; */
  NS_IMETHOD GetScriptableFlags(PRUint32 *aScriptableFlags) = 0;

  /* void preCreate (in nsISupports nativeObj, in JSContextPtr cx, in JSObjectPtr globalObj, out JSObjectPtr parentObj); */
  NS_IMETHOD PreCreate(nsISupports *nativeObj, JSContext *cx, JSObject *globalObj, JSObject **parentObj NS_OUTPARAM) = 0;

  /* void create (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj); */
  NS_IMETHOD Create(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj) = 0;

  /* void postCreate (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj); */
  NS_IMETHOD PostCreate(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj) = 0;

  /* boolean addProperty (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in jsid id, in JSValPtr vp); */
  NS_IMETHOD AddProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean delProperty (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in jsid id, in JSValPtr vp); */
  NS_IMETHOD DelProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean getProperty (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in jsid id, in JSValPtr vp); */
  NS_IMETHOD GetProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean setProperty (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in jsid id, in JSValPtr vp); */
  NS_IMETHOD SetProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean enumerate (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj); */
  NS_IMETHOD Enumerate(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean newEnumerate (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in PRUint32 enum_op, in JSValPtr statep, out jsid idp); */
  NS_IMETHOD NewEnumerate(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 enum_op, jsval *statep, jsid *idp NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean newResolve (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in jsid id, in PRUint32 flags, out JSObjectPtr objp); */
  NS_IMETHOD NewResolve(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, PRUint32 flags, JSObject **objp NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean convert (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in PRUint32 type, in JSValPtr vp); */
  NS_IMETHOD Convert(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 type, jsval *vp, PRBool *_retval NS_OUTPARAM) = 0;

  /* void finalize (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj); */
  NS_IMETHOD Finalize(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj) = 0;

  /* boolean checkAccess (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in jsid id, in PRUint32 mode, in JSValPtr vp); */
  NS_IMETHOD CheckAccess(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, PRUint32 mode, jsval *vp, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean call (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in PRUint32 argc, in JSValPtr argv, in JSValPtr vp); */
  NS_IMETHOD Call(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 argc, jsval *argv, jsval *vp, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean construct (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in PRUint32 argc, in JSValPtr argv, in JSValPtr vp); */
  NS_IMETHOD Construct(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 argc, jsval *argv, jsval *vp, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean hasInstance (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in jsval val, out boolean bp); */
  NS_IMETHOD HasInstance(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, const JS::Value & val, PRBool *bp NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* void trace (in nsIXPConnectWrappedNative wrapper, in JSTracerPtr trc, in JSObjectPtr obj); */
  NS_IMETHOD Trace(nsIXPConnectWrappedNative *wrapper, JSTracer *trc, JSObject *obj) = 0;

  /* boolean equality (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in jsval val); */
  NS_IMETHOD Equality(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, const JS::Value & val, PRBool *_retval NS_OUTPARAM) = 0;

  /* JSObjectPtr outerObject (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj); */
  NS_IMETHOD OuterObject(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, JSObject **_retval NS_OUTPARAM) = 0;

  /* void postCreatePrototype (in JSContextPtr cx, in JSObjectPtr proto); */
  NS_IMETHOD PostCreatePrototype(JSContext *cx, JSObject *proto) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXPCScriptable, NS_IXPCSCRIPTABLE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPCSCRIPTABLE \
  NS_IMETHOD GetClassName(char * *aClassName); \
  NS_IMETHOD GetScriptableFlags(PRUint32 *aScriptableFlags); \
  NS_IMETHOD PreCreate(nsISupports *nativeObj, JSContext *cx, JSObject *globalObj, JSObject **parentObj NS_OUTPARAM); \
  NS_IMETHOD Create(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj); \
  NS_IMETHOD PostCreate(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj); \
  NS_IMETHOD AddProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM); \
  NS_IMETHOD DelProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM); \
  NS_IMETHOD GetProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM); \
  NS_IMETHOD SetProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM); \
  NS_IMETHOD Enumerate(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRBool *_retval NS_OUTPARAM); \
  NS_IMETHOD NewEnumerate(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 enum_op, jsval *statep, jsid *idp NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_IMETHOD NewResolve(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, PRUint32 flags, JSObject **objp NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_IMETHOD Convert(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 type, jsval *vp, PRBool *_retval NS_OUTPARAM); \
  NS_IMETHOD Finalize(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj); \
  NS_IMETHOD CheckAccess(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, PRUint32 mode, jsval *vp, PRBool *_retval NS_OUTPARAM); \
  NS_IMETHOD Call(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 argc, jsval *argv, jsval *vp, PRBool *_retval NS_OUTPARAM); \
  NS_IMETHOD Construct(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 argc, jsval *argv, jsval *vp, PRBool *_retval NS_OUTPARAM); \
  NS_IMETHOD HasInstance(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, const JS::Value & val, PRBool *bp NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_IMETHOD Trace(nsIXPConnectWrappedNative *wrapper, JSTracer *trc, JSObject *obj); \
  NS_IMETHOD Equality(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, const JS::Value & val, PRBool *_retval NS_OUTPARAM); \
  NS_IMETHOD OuterObject(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, JSObject **_retval NS_OUTPARAM); \
  NS_IMETHOD PostCreatePrototype(JSContext *cx, JSObject *proto); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPCSCRIPTABLE(_to) \
  NS_IMETHOD GetClassName(char * *aClassName) { return _to GetClassName(aClassName); } \
  NS_IMETHOD GetScriptableFlags(PRUint32 *aScriptableFlags) { return _to GetScriptableFlags(aScriptableFlags); } \
  NS_IMETHOD PreCreate(nsISupports *nativeObj, JSContext *cx, JSObject *globalObj, JSObject **parentObj NS_OUTPARAM) { return _to PreCreate(nativeObj, cx, globalObj, parentObj); } \
  NS_IMETHOD Create(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj) { return _to Create(wrapper, cx, obj); } \
  NS_IMETHOD PostCreate(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj) { return _to PostCreate(wrapper, cx, obj); } \
  NS_IMETHOD AddProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM) { return _to AddProperty(wrapper, cx, obj, id, vp, _retval); } \
  NS_IMETHOD DelProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM) { return _to DelProperty(wrapper, cx, obj, id, vp, _retval); } \
  NS_IMETHOD GetProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM) { return _to GetProperty(wrapper, cx, obj, id, vp, _retval); } \
  NS_IMETHOD SetProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM) { return _to SetProperty(wrapper, cx, obj, id, vp, _retval); } \
  NS_IMETHOD Enumerate(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRBool *_retval NS_OUTPARAM) { return _to Enumerate(wrapper, cx, obj, _retval); } \
  NS_IMETHOD NewEnumerate(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 enum_op, jsval *statep, jsid *idp NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to NewEnumerate(wrapper, cx, obj, enum_op, statep, idp, _retval); } \
  NS_IMETHOD NewResolve(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, PRUint32 flags, JSObject **objp NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to NewResolve(wrapper, cx, obj, id, flags, objp, _retval); } \
  NS_IMETHOD Convert(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 type, jsval *vp, PRBool *_retval NS_OUTPARAM) { return _to Convert(wrapper, cx, obj, type, vp, _retval); } \
  NS_IMETHOD Finalize(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj) { return _to Finalize(wrapper, cx, obj); } \
  NS_IMETHOD CheckAccess(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, PRUint32 mode, jsval *vp, PRBool *_retval NS_OUTPARAM) { return _to CheckAccess(wrapper, cx, obj, id, mode, vp, _retval); } \
  NS_IMETHOD Call(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 argc, jsval *argv, jsval *vp, PRBool *_retval NS_OUTPARAM) { return _to Call(wrapper, cx, obj, argc, argv, vp, _retval); } \
  NS_IMETHOD Construct(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 argc, jsval *argv, jsval *vp, PRBool *_retval NS_OUTPARAM) { return _to Construct(wrapper, cx, obj, argc, argv, vp, _retval); } \
  NS_IMETHOD HasInstance(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, const JS::Value & val, PRBool *bp NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to HasInstance(wrapper, cx, obj, val, bp, _retval); } \
  NS_IMETHOD Trace(nsIXPConnectWrappedNative *wrapper, JSTracer *trc, JSObject *obj) { return _to Trace(wrapper, trc, obj); } \
  NS_IMETHOD Equality(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, const JS::Value & val, PRBool *_retval NS_OUTPARAM) { return _to Equality(wrapper, cx, obj, val, _retval); } \
  NS_IMETHOD OuterObject(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, JSObject **_retval NS_OUTPARAM) { return _to OuterObject(wrapper, cx, obj, _retval); } \
  NS_IMETHOD PostCreatePrototype(JSContext *cx, JSObject *proto) { return _to PostCreatePrototype(cx, proto); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPCSCRIPTABLE(_to) \
  NS_IMETHOD GetClassName(char * *aClassName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClassName(aClassName); } \
  NS_IMETHOD GetScriptableFlags(PRUint32 *aScriptableFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScriptableFlags(aScriptableFlags); } \
  NS_IMETHOD PreCreate(nsISupports *nativeObj, JSContext *cx, JSObject *globalObj, JSObject **parentObj NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->PreCreate(nativeObj, cx, globalObj, parentObj); } \
  NS_IMETHOD Create(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj) { return !_to ? NS_ERROR_NULL_POINTER : _to->Create(wrapper, cx, obj); } \
  NS_IMETHOD PostCreate(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj) { return !_to ? NS_ERROR_NULL_POINTER : _to->PostCreate(wrapper, cx, obj); } \
  NS_IMETHOD AddProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddProperty(wrapper, cx, obj, id, vp, _retval); } \
  NS_IMETHOD DelProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->DelProperty(wrapper, cx, obj, id, vp, _retval); } \
  NS_IMETHOD GetProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProperty(wrapper, cx, obj, id, vp, _retval); } \
  NS_IMETHOD SetProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetProperty(wrapper, cx, obj, id, vp, _retval); } \
  NS_IMETHOD Enumerate(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Enumerate(wrapper, cx, obj, _retval); } \
  NS_IMETHOD NewEnumerate(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 enum_op, jsval *statep, jsid *idp NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->NewEnumerate(wrapper, cx, obj, enum_op, statep, idp, _retval); } \
  NS_IMETHOD NewResolve(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, PRUint32 flags, JSObject **objp NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->NewResolve(wrapper, cx, obj, id, flags, objp, _retval); } \
  NS_IMETHOD Convert(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 type, jsval *vp, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Convert(wrapper, cx, obj, type, vp, _retval); } \
  NS_IMETHOD Finalize(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj) { return !_to ? NS_ERROR_NULL_POINTER : _to->Finalize(wrapper, cx, obj); } \
  NS_IMETHOD CheckAccess(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, PRUint32 mode, jsval *vp, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckAccess(wrapper, cx, obj, id, mode, vp, _retval); } \
  NS_IMETHOD Call(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 argc, jsval *argv, jsval *vp, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Call(wrapper, cx, obj, argc, argv, vp, _retval); } \
  NS_IMETHOD Construct(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 argc, jsval *argv, jsval *vp, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Construct(wrapper, cx, obj, argc, argv, vp, _retval); } \
  NS_IMETHOD HasInstance(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, const JS::Value & val, PRBool *bp NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasInstance(wrapper, cx, obj, val, bp, _retval); } \
  NS_IMETHOD Trace(nsIXPConnectWrappedNative *wrapper, JSTracer *trc, JSObject *obj) { return !_to ? NS_ERROR_NULL_POINTER : _to->Trace(wrapper, trc, obj); } \
  NS_IMETHOD Equality(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, const JS::Value & val, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Equality(wrapper, cx, obj, val, _retval); } \
  NS_IMETHOD OuterObject(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, JSObject **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OuterObject(wrapper, cx, obj, _retval); } \
  NS_IMETHOD PostCreatePrototype(JSContext *cx, JSObject *proto) { return !_to ? NS_ERROR_NULL_POINTER : _to->PostCreatePrototype(cx, proto); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXPCScriptable : public nsIXPCScriptable
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPCSCRIPTABLE

  nsXPCScriptable();

private:
  ~nsXPCScriptable();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsXPCScriptable, nsIXPCScriptable)

nsXPCScriptable::nsXPCScriptable()
{
  /* member initializers and constructor code */
}

nsXPCScriptable::~nsXPCScriptable()
{
  /* destructor code */
}

/* readonly attribute string className; */
NS_IMETHODIMP nsXPCScriptable::GetClassName(char * *aClassName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRUint32 scriptableFlags; */
NS_IMETHODIMP nsXPCScriptable::GetScriptableFlags(PRUint32 *aScriptableFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void preCreate (in nsISupports nativeObj, in JSContextPtr cx, in JSObjectPtr globalObj, out JSObjectPtr parentObj); */
NS_IMETHODIMP nsXPCScriptable::PreCreate(nsISupports *nativeObj, JSContext *cx, JSObject *globalObj, JSObject **parentObj NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void create (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj); */
NS_IMETHODIMP nsXPCScriptable::Create(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void postCreate (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj); */
NS_IMETHODIMP nsXPCScriptable::PostCreate(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean addProperty (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in jsid id, in JSValPtr vp); */
NS_IMETHODIMP nsXPCScriptable::AddProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean delProperty (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in jsid id, in JSValPtr vp); */
NS_IMETHODIMP nsXPCScriptable::DelProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean getProperty (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in jsid id, in JSValPtr vp); */
NS_IMETHODIMP nsXPCScriptable::GetProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean setProperty (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in jsid id, in JSValPtr vp); */
NS_IMETHODIMP nsXPCScriptable::SetProperty(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, jsval *vp, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean enumerate (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj); */
NS_IMETHODIMP nsXPCScriptable::Enumerate(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean newEnumerate (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in PRUint32 enum_op, in JSValPtr statep, out jsid idp); */
NS_IMETHODIMP nsXPCScriptable::NewEnumerate(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 enum_op, jsval *statep, jsid *idp NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean newResolve (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in jsid id, in PRUint32 flags, out JSObjectPtr objp); */
NS_IMETHODIMP nsXPCScriptable::NewResolve(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, PRUint32 flags, JSObject **objp NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean convert (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in PRUint32 type, in JSValPtr vp); */
NS_IMETHODIMP nsXPCScriptable::Convert(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 type, jsval *vp, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void finalize (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj); */
NS_IMETHODIMP nsXPCScriptable::Finalize(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean checkAccess (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in jsid id, in PRUint32 mode, in JSValPtr vp); */
NS_IMETHODIMP nsXPCScriptable::CheckAccess(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, jsid id, PRUint32 mode, jsval *vp, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean call (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in PRUint32 argc, in JSValPtr argv, in JSValPtr vp); */
NS_IMETHODIMP nsXPCScriptable::Call(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 argc, jsval *argv, jsval *vp, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean construct (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in PRUint32 argc, in JSValPtr argv, in JSValPtr vp); */
NS_IMETHODIMP nsXPCScriptable::Construct(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, PRUint32 argc, jsval *argv, jsval *vp, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasInstance (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in jsval val, out boolean bp); */
NS_IMETHODIMP nsXPCScriptable::HasInstance(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, const JS::Value & val, PRBool *bp NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void trace (in nsIXPConnectWrappedNative wrapper, in JSTracerPtr trc, in JSObjectPtr obj); */
NS_IMETHODIMP nsXPCScriptable::Trace(nsIXPConnectWrappedNative *wrapper, JSTracer *trc, JSObject *obj)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean equality (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj, in jsval val); */
NS_IMETHODIMP nsXPCScriptable::Equality(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, const JS::Value & val, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* JSObjectPtr outerObject (in nsIXPConnectWrappedNative wrapper, in JSContextPtr cx, in JSObjectPtr obj); */
NS_IMETHODIMP nsXPCScriptable::OuterObject(nsIXPConnectWrappedNative *wrapper, JSContext *cx, JSObject *obj, JSObject **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void postCreatePrototype (in JSContextPtr cx, in JSObjectPtr proto); */
NS_IMETHODIMP nsXPCScriptable::PostCreatePrototype(JSContext *cx, JSObject *proto)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#include "nsAutoPtr.h"
#define NS_XPCCLASSINFO_IID \
{ 0x9a5b0342, 0x0f70, 0x4d31, \
 { 0xb7, 0xd7, 0x29, 0x68, 0xa5, 0x70, 0x4b, 0xd8 } }
class NS_NO_VTABLE nsXPCClassInfo : public nsIClassInfo,
                                    public nsIXPCScriptable
{
public:
  NS_DECLARE_STATIC_IID_ACCESSOR(NS_XPCCLASSINFO_IID)
  NS_IMETHOD_(nsrefcnt) AddRef() = 0;
  NS_IMETHOD_(nsrefcnt) Release() = 0;
  virtual void PreserveWrapper(nsISupports *aNative) = 0;
  virtual PRUint32 GetInterfacesBitmap() = 0;
};
NS_DEFINE_STATIC_IID_ACCESSOR(nsXPCClassInfo, NS_XPCCLASSINFO_IID)
inline
nsresult
CallQueryInterface(nsISupports* aSourcePtr,
                   nsRefPtrGetterAddRefs<nsXPCClassInfo> aDestPtr)
{
  return CallQueryInterface(aSourcePtr,
                            static_cast<nsXPCClassInfo**>(aDestPtr));
}

#endif /* __gen_nsIXPCScriptable_h__ */
