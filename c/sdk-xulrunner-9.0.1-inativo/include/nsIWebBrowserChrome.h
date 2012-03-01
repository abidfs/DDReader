/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/embedding/browser/webBrowser/nsIWebBrowserChrome.idl
 */

#ifndef __gen_nsIWebBrowserChrome_h__
#define __gen_nsIWebBrowserChrome_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIWebBrowser; /* forward declaration */

class nsIDocShellTreeItem; /* forward declaration */


/* starting interface:    nsIWebBrowserChrome */
#define NS_IWEBBROWSERCHROME_IID_STR "ba434c60-9d52-11d3-afb0-00a024ffc08c"

#define NS_IWEBBROWSERCHROME_IID \
  {0xba434c60, 0x9d52, 0x11d3, \
    { 0xaf, 0xb0, 0x00, 0xa0, 0x24, 0xff, 0xc0, 0x8c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebBrowserChrome : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBBROWSERCHROME_IID)

  enum { STATUS_SCRIPT = 1U };

  enum { STATUS_SCRIPT_DEFAULT = 2U };

  enum { STATUS_LINK = 3U };

  /* void setStatus (in unsigned long statusType, in wstring status); */
  NS_SCRIPTABLE NS_IMETHOD SetStatus(PRUint32 statusType, const PRUnichar * status) = 0;

  /* attribute nsIWebBrowser webBrowser; */
  NS_SCRIPTABLE NS_IMETHOD GetWebBrowser(nsIWebBrowser * *aWebBrowser) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetWebBrowser(nsIWebBrowser *aWebBrowser) = 0;

  enum { CHROME_DEFAULT = 1U };

  enum { CHROME_WINDOW_BORDERS = 2U };

  enum { CHROME_WINDOW_CLOSE = 4U };

  enum { CHROME_WINDOW_RESIZE = 8U };

  enum { CHROME_MENUBAR = 16U };

  enum { CHROME_TOOLBAR = 32U };

  enum { CHROME_LOCATIONBAR = 64U };

  enum { CHROME_STATUSBAR = 128U };

  enum { CHROME_PERSONAL_TOOLBAR = 256U };

  enum { CHROME_SCROLLBARS = 512U };

  enum { CHROME_TITLEBAR = 1024U };

  enum { CHROME_EXTRA = 2048U };

  enum { CHROME_WITH_SIZE = 4096U };

  enum { CHROME_WITH_POSITION = 8192U };

  enum { CHROME_WINDOW_MIN = 16384U };

  enum { CHROME_WINDOW_POPUP = 32768U };

  enum { CHROME_WINDOW_RAISED = 33554432U };

  enum { CHROME_WINDOW_LOWERED = 67108864U };

  enum { CHROME_CENTER_SCREEN = 134217728U };

  enum { CHROME_DEPENDENT = 268435456U };

  enum { CHROME_MODAL = 536870912U };

  enum { CHROME_OPENAS_DIALOG = 1073741824U };

  enum { CHROME_OPENAS_CHROME = 2147483648U };

  enum { CHROME_ALL = 4094U };

  /* attribute unsigned long chromeFlags; */
  NS_SCRIPTABLE NS_IMETHOD GetChromeFlags(PRUint32 *aChromeFlags) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetChromeFlags(PRUint32 aChromeFlags) = 0;

  /* void destroyBrowserWindow (); */
  NS_SCRIPTABLE NS_IMETHOD DestroyBrowserWindow(void) = 0;

  /* void sizeBrowserTo (in long aCX, in long aCY); */
  NS_SCRIPTABLE NS_IMETHOD SizeBrowserTo(PRInt32 aCX, PRInt32 aCY) = 0;

  /* void showAsModal (); */
  NS_SCRIPTABLE NS_IMETHOD ShowAsModal(void) = 0;

  /* boolean isWindowModal (); */
  NS_SCRIPTABLE NS_IMETHOD IsWindowModal(PRBool *_retval NS_OUTPARAM) = 0;

  /* void exitModalEventLoop (in nsresult aStatus); */
  NS_SCRIPTABLE NS_IMETHOD ExitModalEventLoop(nsresult aStatus) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebBrowserChrome, NS_IWEBBROWSERCHROME_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBBROWSERCHROME \
  NS_SCRIPTABLE NS_IMETHOD SetStatus(PRUint32 statusType, const PRUnichar * status); \
  NS_SCRIPTABLE NS_IMETHOD GetWebBrowser(nsIWebBrowser * *aWebBrowser); \
  NS_SCRIPTABLE NS_IMETHOD SetWebBrowser(nsIWebBrowser *aWebBrowser); \
  NS_SCRIPTABLE NS_IMETHOD GetChromeFlags(PRUint32 *aChromeFlags); \
  NS_SCRIPTABLE NS_IMETHOD SetChromeFlags(PRUint32 aChromeFlags); \
  NS_SCRIPTABLE NS_IMETHOD DestroyBrowserWindow(void); \
  NS_SCRIPTABLE NS_IMETHOD SizeBrowserTo(PRInt32 aCX, PRInt32 aCY); \
  NS_SCRIPTABLE NS_IMETHOD ShowAsModal(void); \
  NS_SCRIPTABLE NS_IMETHOD IsWindowModal(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ExitModalEventLoop(nsresult aStatus); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBBROWSERCHROME(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetStatus(PRUint32 statusType, const PRUnichar * status) { return _to SetStatus(statusType, status); } \
  NS_SCRIPTABLE NS_IMETHOD GetWebBrowser(nsIWebBrowser * *aWebBrowser) { return _to GetWebBrowser(aWebBrowser); } \
  NS_SCRIPTABLE NS_IMETHOD SetWebBrowser(nsIWebBrowser *aWebBrowser) { return _to SetWebBrowser(aWebBrowser); } \
  NS_SCRIPTABLE NS_IMETHOD GetChromeFlags(PRUint32 *aChromeFlags) { return _to GetChromeFlags(aChromeFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetChromeFlags(PRUint32 aChromeFlags) { return _to SetChromeFlags(aChromeFlags); } \
  NS_SCRIPTABLE NS_IMETHOD DestroyBrowserWindow(void) { return _to DestroyBrowserWindow(); } \
  NS_SCRIPTABLE NS_IMETHOD SizeBrowserTo(PRInt32 aCX, PRInt32 aCY) { return _to SizeBrowserTo(aCX, aCY); } \
  NS_SCRIPTABLE NS_IMETHOD ShowAsModal(void) { return _to ShowAsModal(); } \
  NS_SCRIPTABLE NS_IMETHOD IsWindowModal(PRBool *_retval NS_OUTPARAM) { return _to IsWindowModal(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExitModalEventLoop(nsresult aStatus) { return _to ExitModalEventLoop(aStatus); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBBROWSERCHROME(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetStatus(PRUint32 statusType, const PRUnichar * status) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStatus(statusType, status); } \
  NS_SCRIPTABLE NS_IMETHOD GetWebBrowser(nsIWebBrowser * *aWebBrowser) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWebBrowser(aWebBrowser); } \
  NS_SCRIPTABLE NS_IMETHOD SetWebBrowser(nsIWebBrowser *aWebBrowser) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWebBrowser(aWebBrowser); } \
  NS_SCRIPTABLE NS_IMETHOD GetChromeFlags(PRUint32 *aChromeFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChromeFlags(aChromeFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetChromeFlags(PRUint32 aChromeFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetChromeFlags(aChromeFlags); } \
  NS_SCRIPTABLE NS_IMETHOD DestroyBrowserWindow(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DestroyBrowserWindow(); } \
  NS_SCRIPTABLE NS_IMETHOD SizeBrowserTo(PRInt32 aCX, PRInt32 aCY) { return !_to ? NS_ERROR_NULL_POINTER : _to->SizeBrowserTo(aCX, aCY); } \
  NS_SCRIPTABLE NS_IMETHOD ShowAsModal(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ShowAsModal(); } \
  NS_SCRIPTABLE NS_IMETHOD IsWindowModal(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsWindowModal(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExitModalEventLoop(nsresult aStatus) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExitModalEventLoop(aStatus); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebBrowserChrome : public nsIWebBrowserChrome
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBBROWSERCHROME

  nsWebBrowserChrome();

private:
  ~nsWebBrowserChrome();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebBrowserChrome, nsIWebBrowserChrome)

nsWebBrowserChrome::nsWebBrowserChrome()
{
  /* member initializers and constructor code */
}

nsWebBrowserChrome::~nsWebBrowserChrome()
{
  /* destructor code */
}

/* void setStatus (in unsigned long statusType, in wstring status); */
NS_IMETHODIMP nsWebBrowserChrome::SetStatus(PRUint32 statusType, const PRUnichar * status)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIWebBrowser webBrowser; */
NS_IMETHODIMP nsWebBrowserChrome::GetWebBrowser(nsIWebBrowser * *aWebBrowser)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserChrome::SetWebBrowser(nsIWebBrowser *aWebBrowser)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long chromeFlags; */
NS_IMETHODIMP nsWebBrowserChrome::GetChromeFlags(PRUint32 *aChromeFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserChrome::SetChromeFlags(PRUint32 aChromeFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void destroyBrowserWindow (); */
NS_IMETHODIMP nsWebBrowserChrome::DestroyBrowserWindow()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sizeBrowserTo (in long aCX, in long aCY); */
NS_IMETHODIMP nsWebBrowserChrome::SizeBrowserTo(PRInt32 aCX, PRInt32 aCY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void showAsModal (); */
NS_IMETHODIMP nsWebBrowserChrome::ShowAsModal()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isWindowModal (); */
NS_IMETHODIMP nsWebBrowserChrome::IsWindowModal(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void exitModalEventLoop (in nsresult aStatus); */
NS_IMETHODIMP nsWebBrowserChrome::ExitModalEventLoop(nsresult aStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWebBrowserChrome_h__ */
