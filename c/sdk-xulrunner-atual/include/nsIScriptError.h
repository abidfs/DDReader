/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/js/src/xpconnect/idl/nsIScriptError.idl
 */

#ifndef __gen_nsIScriptError_h__
#define __gen_nsIScriptError_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIConsoleMessage_h__
#include "nsIConsoleMessage.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIScriptError */
#define NS_ISCRIPTERROR_IID_STR "b0196fc7-1913-441a-882a-453c0d8b89b8"

#define NS_ISCRIPTERROR_IID \
  {0xb0196fc7, 0x1913, 0x441a, \
    { 0x88, 0x2a, 0x45, 0x3c, 0x0d, 0x8b, 0x89, 0xb8 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIScriptError : public nsIConsoleMessage {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISCRIPTERROR_IID)

  enum { errorFlag = 0U };

  enum { warningFlag = 1U };

  enum { exceptionFlag = 2U };

  enum { strictFlag = 4U };

  /* readonly attribute AString errorMessage; */
  NS_SCRIPTABLE NS_IMETHOD GetErrorMessage(nsAString & aErrorMessage) = 0;

  /* readonly attribute AString sourceName; */
  NS_SCRIPTABLE NS_IMETHOD GetSourceName(nsAString & aSourceName) = 0;

  /* readonly attribute AString sourceLine; */
  NS_SCRIPTABLE NS_IMETHOD GetSourceLine(nsAString & aSourceLine) = 0;

  /* readonly attribute PRUint32 lineNumber; */
  NS_SCRIPTABLE NS_IMETHOD GetLineNumber(PRUint32 *aLineNumber) = 0;

  /* readonly attribute PRUint32 columnNumber; */
  NS_SCRIPTABLE NS_IMETHOD GetColumnNumber(PRUint32 *aColumnNumber) = 0;

  /* readonly attribute PRUint32 flags; */
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags) = 0;

  /* readonly attribute string category; */
  NS_SCRIPTABLE NS_IMETHOD GetCategory(char * *aCategory) = 0;

  /* void init (in wstring message, in wstring sourceName, in wstring sourceLine, in PRUint32 lineNumber, in PRUint32 columnNumber, in PRUint32 flags, in string category); */
  NS_SCRIPTABLE NS_IMETHOD Init(const PRUnichar * message, const PRUnichar * sourceName, const PRUnichar * sourceLine, PRUint32 lineNumber, PRUint32 columnNumber, PRUint32 flags, const char * category) = 0;

  /* AUTF8String toString (); */
  NS_SCRIPTABLE NS_IMETHOD ToString(nsACString & _retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIScriptError, NS_ISCRIPTERROR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISCRIPTERROR \
  NS_SCRIPTABLE NS_IMETHOD GetErrorMessage(nsAString & aErrorMessage); \
  NS_SCRIPTABLE NS_IMETHOD GetSourceName(nsAString & aSourceName); \
  NS_SCRIPTABLE NS_IMETHOD GetSourceLine(nsAString & aSourceLine); \
  NS_SCRIPTABLE NS_IMETHOD GetLineNumber(PRUint32 *aLineNumber); \
  NS_SCRIPTABLE NS_IMETHOD GetColumnNumber(PRUint32 *aColumnNumber); \
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags); \
  NS_SCRIPTABLE NS_IMETHOD GetCategory(char * *aCategory); \
  NS_SCRIPTABLE NS_IMETHOD Init(const PRUnichar * message, const PRUnichar * sourceName, const PRUnichar * sourceLine, PRUint32 lineNumber, PRUint32 columnNumber, PRUint32 flags, const char * category); \
  NS_SCRIPTABLE NS_IMETHOD ToString(nsACString & _retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISCRIPTERROR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetErrorMessage(nsAString & aErrorMessage) { return _to GetErrorMessage(aErrorMessage); } \
  NS_SCRIPTABLE NS_IMETHOD GetSourceName(nsAString & aSourceName) { return _to GetSourceName(aSourceName); } \
  NS_SCRIPTABLE NS_IMETHOD GetSourceLine(nsAString & aSourceLine) { return _to GetSourceLine(aSourceLine); } \
  NS_SCRIPTABLE NS_IMETHOD GetLineNumber(PRUint32 *aLineNumber) { return _to GetLineNumber(aLineNumber); } \
  NS_SCRIPTABLE NS_IMETHOD GetColumnNumber(PRUint32 *aColumnNumber) { return _to GetColumnNumber(aColumnNumber); } \
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags) { return _to GetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD GetCategory(char * *aCategory) { return _to GetCategory(aCategory); } \
  NS_SCRIPTABLE NS_IMETHOD Init(const PRUnichar * message, const PRUnichar * sourceName, const PRUnichar * sourceLine, PRUint32 lineNumber, PRUint32 columnNumber, PRUint32 flags, const char * category) { return _to Init(message, sourceName, sourceLine, lineNumber, columnNumber, flags, category); } \
  NS_SCRIPTABLE NS_IMETHOD ToString(nsACString & _retval NS_OUTPARAM) { return _to ToString(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISCRIPTERROR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetErrorMessage(nsAString & aErrorMessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetErrorMessage(aErrorMessage); } \
  NS_SCRIPTABLE NS_IMETHOD GetSourceName(nsAString & aSourceName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSourceName(aSourceName); } \
  NS_SCRIPTABLE NS_IMETHOD GetSourceLine(nsAString & aSourceLine) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSourceLine(aSourceLine); } \
  NS_SCRIPTABLE NS_IMETHOD GetLineNumber(PRUint32 *aLineNumber) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLineNumber(aLineNumber); } \
  NS_SCRIPTABLE NS_IMETHOD GetColumnNumber(PRUint32 *aColumnNumber) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetColumnNumber(aColumnNumber); } \
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD GetCategory(char * *aCategory) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCategory(aCategory); } \
  NS_SCRIPTABLE NS_IMETHOD Init(const PRUnichar * message, const PRUnichar * sourceName, const PRUnichar * sourceLine, PRUint32 lineNumber, PRUint32 columnNumber, PRUint32 flags, const char * category) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(message, sourceName, sourceLine, lineNumber, columnNumber, flags, category); } \
  NS_SCRIPTABLE NS_IMETHOD ToString(nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsScriptError : public nsIScriptError
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISCRIPTERROR

  nsScriptError();

private:
  ~nsScriptError();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsScriptError, nsIScriptError)

nsScriptError::nsScriptError()
{
  /* member initializers and constructor code */
}

nsScriptError::~nsScriptError()
{
  /* destructor code */
}

/* readonly attribute AString errorMessage; */
NS_IMETHODIMP nsScriptError::GetErrorMessage(nsAString & aErrorMessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString sourceName; */
NS_IMETHODIMP nsScriptError::GetSourceName(nsAString & aSourceName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString sourceLine; */
NS_IMETHODIMP nsScriptError::GetSourceLine(nsAString & aSourceLine)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRUint32 lineNumber; */
NS_IMETHODIMP nsScriptError::GetLineNumber(PRUint32 *aLineNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRUint32 columnNumber; */
NS_IMETHODIMP nsScriptError::GetColumnNumber(PRUint32 *aColumnNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRUint32 flags; */
NS_IMETHODIMP nsScriptError::GetFlags(PRUint32 *aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute string category; */
NS_IMETHODIMP nsScriptError::GetCategory(char * *aCategory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void init (in wstring message, in wstring sourceName, in wstring sourceLine, in PRUint32 lineNumber, in PRUint32 columnNumber, in PRUint32 flags, in string category); */
NS_IMETHODIMP nsScriptError::Init(const PRUnichar * message, const PRUnichar * sourceName, const PRUnichar * sourceLine, PRUint32 lineNumber, PRUint32 columnNumber, PRUint32 flags, const char * category)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AUTF8String toString (); */
NS_IMETHODIMP nsScriptError::ToString(nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIScriptError2 */
#define NS_ISCRIPTERROR2_IID_STR "4472646b-c928-4d76-9e7c-6b91da7f24cc"

#define NS_ISCRIPTERROR2_IID \
  {0x4472646b, 0xc928, 0x4d76, \
    { 0x9e, 0x7c, 0x6b, 0x91, 0xda, 0x7f, 0x24, 0xcc }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIScriptError2 : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISCRIPTERROR2_IID)

  /* readonly attribute unsigned long long outerWindowID; */
  NS_SCRIPTABLE NS_IMETHOD GetOuterWindowID(PRUint64 *aOuterWindowID) = 0;

  /* readonly attribute unsigned long long innerWindowID; */
  NS_SCRIPTABLE NS_IMETHOD GetInnerWindowID(PRUint64 *aInnerWindowID) = 0;

  /* readonly attribute long long timeStamp; */
  NS_SCRIPTABLE NS_IMETHOD GetTimeStamp(PRInt64 *aTimeStamp) = 0;

  /* void initWithWindowID (in wstring message, in wstring sourceName, in wstring sourceLine, in PRUint32 lineNumber, in PRUint32 columnNumber, in PRUint32 flags, in string category, in unsigned long long innerWindowID); */
  NS_SCRIPTABLE NS_IMETHOD InitWithWindowID(const PRUnichar * message, const PRUnichar * sourceName, const PRUnichar * sourceLine, PRUint32 lineNumber, PRUint32 columnNumber, PRUint32 flags, const char * category, PRUint64 innerWindowID) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIScriptError2, NS_ISCRIPTERROR2_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISCRIPTERROR2 \
  NS_SCRIPTABLE NS_IMETHOD GetOuterWindowID(PRUint64 *aOuterWindowID); \
  NS_SCRIPTABLE NS_IMETHOD GetInnerWindowID(PRUint64 *aInnerWindowID); \
  NS_SCRIPTABLE NS_IMETHOD GetTimeStamp(PRInt64 *aTimeStamp); \
  NS_SCRIPTABLE NS_IMETHOD InitWithWindowID(const PRUnichar * message, const PRUnichar * sourceName, const PRUnichar * sourceLine, PRUint32 lineNumber, PRUint32 columnNumber, PRUint32 flags, const char * category, PRUint64 innerWindowID); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISCRIPTERROR2(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOuterWindowID(PRUint64 *aOuterWindowID) { return _to GetOuterWindowID(aOuterWindowID); } \
  NS_SCRIPTABLE NS_IMETHOD GetInnerWindowID(PRUint64 *aInnerWindowID) { return _to GetInnerWindowID(aInnerWindowID); } \
  NS_SCRIPTABLE NS_IMETHOD GetTimeStamp(PRInt64 *aTimeStamp) { return _to GetTimeStamp(aTimeStamp); } \
  NS_SCRIPTABLE NS_IMETHOD InitWithWindowID(const PRUnichar * message, const PRUnichar * sourceName, const PRUnichar * sourceLine, PRUint32 lineNumber, PRUint32 columnNumber, PRUint32 flags, const char * category, PRUint64 innerWindowID) { return _to InitWithWindowID(message, sourceName, sourceLine, lineNumber, columnNumber, flags, category, innerWindowID); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISCRIPTERROR2(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOuterWindowID(PRUint64 *aOuterWindowID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOuterWindowID(aOuterWindowID); } \
  NS_SCRIPTABLE NS_IMETHOD GetInnerWindowID(PRUint64 *aInnerWindowID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInnerWindowID(aInnerWindowID); } \
  NS_SCRIPTABLE NS_IMETHOD GetTimeStamp(PRInt64 *aTimeStamp) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTimeStamp(aTimeStamp); } \
  NS_SCRIPTABLE NS_IMETHOD InitWithWindowID(const PRUnichar * message, const PRUnichar * sourceName, const PRUnichar * sourceLine, PRUint32 lineNumber, PRUint32 columnNumber, PRUint32 flags, const char * category, PRUint64 innerWindowID) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitWithWindowID(message, sourceName, sourceLine, lineNumber, columnNumber, flags, category, innerWindowID); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsScriptError2 : public nsIScriptError2
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISCRIPTERROR2

  nsScriptError2();

private:
  ~nsScriptError2();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsScriptError2, nsIScriptError2)

nsScriptError2::nsScriptError2()
{
  /* member initializers and constructor code */
}

nsScriptError2::~nsScriptError2()
{
  /* destructor code */
}

/* readonly attribute unsigned long long outerWindowID; */
NS_IMETHODIMP nsScriptError2::GetOuterWindowID(PRUint64 *aOuterWindowID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long innerWindowID; */
NS_IMETHODIMP nsScriptError2::GetInnerWindowID(PRUint64 *aInnerWindowID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long long timeStamp; */
NS_IMETHODIMP nsScriptError2::GetTimeStamp(PRInt64 *aTimeStamp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initWithWindowID (in wstring message, in wstring sourceName, in wstring sourceLine, in PRUint32 lineNumber, in PRUint32 columnNumber, in PRUint32 flags, in string category, in unsigned long long innerWindowID); */
NS_IMETHODIMP nsScriptError2::InitWithWindowID(const PRUnichar * message, const PRUnichar * sourceName, const PRUnichar * sourceLine, PRUint32 lineNumber, PRUint32 columnNumber, PRUint32 flags, const char * category, PRUint64 innerWindowID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_SCRIPTERROR_CLASSNAME "Script Error"
#define NS_SCRIPTERROR_CID \
{ 0xe38e53b9, 0x5bb0, 0x456a, { 0xb5, 0x53, 0x57, 0x93, 0x70, 0xcb, 0x15, 0x67 }}
#define NS_SCRIPTERROR_CONTRACTID "@mozilla.org/scripterror;1"

#endif /* __gen_nsIScriptError_h__ */
