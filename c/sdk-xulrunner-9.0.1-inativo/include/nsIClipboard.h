/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/widget/public/nsIClipboard.idl
 */

#ifndef __gen_nsIClipboard_h__
#define __gen_nsIClipboard_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsITransferable_h__
#include "nsITransferable.h"
#endif

#ifndef __gen_nsIClipboardOwner_h__
#include "nsIClipboardOwner.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIArray; /* forward declaration */


/* starting interface:    nsIClipboard */
#define NS_ICLIPBOARD_IID_STR "38984945-8674-4d04-b786-5c0ca9434457"

#define NS_ICLIPBOARD_IID \
  {0x38984945, 0x8674, 0x4d04, \
    { 0xb7, 0x86, 0x5c, 0x0c, 0xa9, 0x43, 0x44, 0x57 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIClipboard : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICLIPBOARD_IID)

  enum { kSelectionClipboard = 0 };

  enum { kGlobalClipboard = 1 };

  /* void setData (in nsITransferable aTransferable, in nsIClipboardOwner anOwner, in long aWhichClipboard); */
  NS_SCRIPTABLE NS_IMETHOD SetData(nsITransferable *aTransferable, nsIClipboardOwner *anOwner, PRInt32 aWhichClipboard) = 0;

  /* void getData (in nsITransferable aTransferable, in long aWhichClipboard); */
  NS_SCRIPTABLE NS_IMETHOD GetData(nsITransferable *aTransferable, PRInt32 aWhichClipboard) = 0;

  /* void emptyClipboard (in long aWhichClipboard); */
  NS_SCRIPTABLE NS_IMETHOD EmptyClipboard(PRInt32 aWhichClipboard) = 0;

  /* boolean hasDataMatchingFlavors ([array, size_is (aLength)] in string aFlavorList, in unsigned long aLength, in long aWhichClipboard); */
  NS_SCRIPTABLE NS_IMETHOD HasDataMatchingFlavors(const char * *aFlavorList, PRUint32 aLength, PRInt32 aWhichClipboard, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean supportsSelectionClipboard (); */
  NS_SCRIPTABLE NS_IMETHOD SupportsSelectionClipboard(PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIClipboard, NS_ICLIPBOARD_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICLIPBOARD \
  NS_SCRIPTABLE NS_IMETHOD SetData(nsITransferable *aTransferable, nsIClipboardOwner *anOwner, PRInt32 aWhichClipboard); \
  NS_SCRIPTABLE NS_IMETHOD GetData(nsITransferable *aTransferable, PRInt32 aWhichClipboard); \
  NS_SCRIPTABLE NS_IMETHOD EmptyClipboard(PRInt32 aWhichClipboard); \
  NS_SCRIPTABLE NS_IMETHOD HasDataMatchingFlavors(const char * *aFlavorList, PRUint32 aLength, PRInt32 aWhichClipboard, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SupportsSelectionClipboard(PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICLIPBOARD(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetData(nsITransferable *aTransferable, nsIClipboardOwner *anOwner, PRInt32 aWhichClipboard) { return _to SetData(aTransferable, anOwner, aWhichClipboard); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(nsITransferable *aTransferable, PRInt32 aWhichClipboard) { return _to GetData(aTransferable, aWhichClipboard); } \
  NS_SCRIPTABLE NS_IMETHOD EmptyClipboard(PRInt32 aWhichClipboard) { return _to EmptyClipboard(aWhichClipboard); } \
  NS_SCRIPTABLE NS_IMETHOD HasDataMatchingFlavors(const char * *aFlavorList, PRUint32 aLength, PRInt32 aWhichClipboard, PRBool *_retval NS_OUTPARAM) { return _to HasDataMatchingFlavors(aFlavorList, aLength, aWhichClipboard, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SupportsSelectionClipboard(PRBool *_retval NS_OUTPARAM) { return _to SupportsSelectionClipboard(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICLIPBOARD(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetData(nsITransferable *aTransferable, nsIClipboardOwner *anOwner, PRInt32 aWhichClipboard) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aTransferable, anOwner, aWhichClipboard); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(nsITransferable *aTransferable, PRInt32 aWhichClipboard) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aTransferable, aWhichClipboard); } \
  NS_SCRIPTABLE NS_IMETHOD EmptyClipboard(PRInt32 aWhichClipboard) { return !_to ? NS_ERROR_NULL_POINTER : _to->EmptyClipboard(aWhichClipboard); } \
  NS_SCRIPTABLE NS_IMETHOD HasDataMatchingFlavors(const char * *aFlavorList, PRUint32 aLength, PRInt32 aWhichClipboard, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasDataMatchingFlavors(aFlavorList, aLength, aWhichClipboard, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SupportsSelectionClipboard(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SupportsSelectionClipboard(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsClipboard : public nsIClipboard
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICLIPBOARD

  nsClipboard();

private:
  ~nsClipboard();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsClipboard, nsIClipboard)

nsClipboard::nsClipboard()
{
  /* member initializers and constructor code */
}

nsClipboard::~nsClipboard()
{
  /* destructor code */
}

/* void setData (in nsITransferable aTransferable, in nsIClipboardOwner anOwner, in long aWhichClipboard); */
NS_IMETHODIMP nsClipboard::SetData(nsITransferable *aTransferable, nsIClipboardOwner *anOwner, PRInt32 aWhichClipboard)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getData (in nsITransferable aTransferable, in long aWhichClipboard); */
NS_IMETHODIMP nsClipboard::GetData(nsITransferable *aTransferable, PRInt32 aWhichClipboard)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void emptyClipboard (in long aWhichClipboard); */
NS_IMETHODIMP nsClipboard::EmptyClipboard(PRInt32 aWhichClipboard)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasDataMatchingFlavors ([array, size_is (aLength)] in string aFlavorList, in unsigned long aLength, in long aWhichClipboard); */
NS_IMETHODIMP nsClipboard::HasDataMatchingFlavors(const char * *aFlavorList, PRUint32 aLength, PRInt32 aWhichClipboard, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean supportsSelectionClipboard (); */
NS_IMETHODIMP nsClipboard::SupportsSelectionClipboard(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif



#endif /* __gen_nsIClipboard_h__ */
