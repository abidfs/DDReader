/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/events/nsIDOMPaintRequest.idl
 */

#ifndef __gen_nsIDOMPaintRequest_h__
#define __gen_nsIDOMPaintRequest_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMClientRect; /* forward declaration */


/* starting interface:    nsIDOMPaintRequest */
#define NS_IDOMPAINTREQUEST_IID_STR "4802360b-f1c0-4d84-bb9e-9d2ccb9de461"

#define NS_IDOMPAINTREQUEST_IID \
  {0x4802360b, 0xf1c0, 0x4d84, \
    { 0xbb, 0x9e, 0x9d, 0x2c, 0xcb, 0x9d, 0xe4, 0x61 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMPaintRequest : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMPAINTREQUEST_IID)

  /* readonly attribute nsIDOMClientRect clientRect; */
  NS_SCRIPTABLE NS_IMETHOD GetClientRect(nsIDOMClientRect * *aClientRect) = 0;

  /* readonly attribute DOMString reason; */
  NS_SCRIPTABLE NS_IMETHOD GetReason(nsAString & aReason) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMPaintRequest, NS_IDOMPAINTREQUEST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMPAINTREQUEST \
  NS_SCRIPTABLE NS_IMETHOD GetClientRect(nsIDOMClientRect * *aClientRect); \
  NS_SCRIPTABLE NS_IMETHOD GetReason(nsAString & aReason); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMPAINTREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetClientRect(nsIDOMClientRect * *aClientRect) { return _to GetClientRect(aClientRect); } \
  NS_SCRIPTABLE NS_IMETHOD GetReason(nsAString & aReason) { return _to GetReason(aReason); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMPAINTREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetClientRect(nsIDOMClientRect * *aClientRect) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClientRect(aClientRect); } \
  NS_SCRIPTABLE NS_IMETHOD GetReason(nsAString & aReason) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReason(aReason); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMPaintRequest : public nsIDOMPaintRequest
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMPAINTREQUEST

  nsDOMPaintRequest();

private:
  ~nsDOMPaintRequest();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMPaintRequest, nsIDOMPaintRequest)

nsDOMPaintRequest::nsDOMPaintRequest()
{
  /* member initializers and constructor code */
}

nsDOMPaintRequest::~nsDOMPaintRequest()
{
  /* destructor code */
}

/* readonly attribute nsIDOMClientRect clientRect; */
NS_IMETHODIMP nsDOMPaintRequest::GetClientRect(nsIDOMClientRect * *aClientRect)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString reason; */
NS_IMETHODIMP nsDOMPaintRequest::GetReason(nsAString & aReason)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMPaintRequest_h__ */
