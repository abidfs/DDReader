/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/commandlines/nsICommandLineRunner.idl
 */

#ifndef __gen_nsICommandLineRunner_h__
#define __gen_nsICommandLineRunner_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsICommandLine_h__
#include "nsICommandLine.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsICommandLineRunner */
#define NS_ICOMMANDLINERUNNER_IID_STR "c1f4cfbf-a41f-4628-aa6c-9fb914478af8"

#define NS_ICOMMANDLINERUNNER_IID \
  {0xc1f4cfbf, 0xa41f, 0x4628, \
    { 0xaa, 0x6c, 0x9f, 0xb9, 0x14, 0x47, 0x8a, 0xf8 }}

class NS_NO_VTABLE nsICommandLineRunner : public nsICommandLine {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICOMMANDLINERUNNER_IID)

  /* void init (in long argc, in nsCharPtrArray argv, in nsIFile workingDir, in unsigned long state); */
  NS_IMETHOD Init(PRInt32 argc, char* *argv, nsIFile *workingDir, PRUint32 state) = 0;

  /* void setWindowContext (in nsIDOMWindow aWindow); */
  NS_IMETHOD SetWindowContext(nsIDOMWindow *aWindow) = 0;

  /* void run (); */
  NS_IMETHOD Run(void) = 0;

  /* readonly attribute AUTF8String helpText; */
  NS_IMETHOD GetHelpText(nsACString & aHelpText) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICommandLineRunner, NS_ICOMMANDLINERUNNER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICOMMANDLINERUNNER \
  NS_IMETHOD Init(PRInt32 argc, char* *argv, nsIFile *workingDir, PRUint32 state); \
  NS_IMETHOD SetWindowContext(nsIDOMWindow *aWindow); \
  NS_IMETHOD Run(void); \
  NS_IMETHOD GetHelpText(nsACString & aHelpText); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICOMMANDLINERUNNER(_to) \
  NS_IMETHOD Init(PRInt32 argc, char* *argv, nsIFile *workingDir, PRUint32 state) { return _to Init(argc, argv, workingDir, state); } \
  NS_IMETHOD SetWindowContext(nsIDOMWindow *aWindow) { return _to SetWindowContext(aWindow); } \
  NS_IMETHOD Run(void) { return _to Run(); } \
  NS_IMETHOD GetHelpText(nsACString & aHelpText) { return _to GetHelpText(aHelpText); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICOMMANDLINERUNNER(_to) \
  NS_IMETHOD Init(PRInt32 argc, char* *argv, nsIFile *workingDir, PRUint32 state) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(argc, argv, workingDir, state); } \
  NS_IMETHOD SetWindowContext(nsIDOMWindow *aWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWindowContext(aWindow); } \
  NS_IMETHOD Run(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Run(); } \
  NS_IMETHOD GetHelpText(nsACString & aHelpText) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHelpText(aHelpText); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCommandLineRunner : public nsICommandLineRunner
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICOMMANDLINERUNNER

  nsCommandLineRunner();

private:
  ~nsCommandLineRunner();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsCommandLineRunner, nsICommandLineRunner)

nsCommandLineRunner::nsCommandLineRunner()
{
  /* member initializers and constructor code */
}

nsCommandLineRunner::~nsCommandLineRunner()
{
  /* destructor code */
}

/* void init (in long argc, in nsCharPtrArray argv, in nsIFile workingDir, in unsigned long state); */
NS_IMETHODIMP nsCommandLineRunner::Init(PRInt32 argc, char* *argv, nsIFile *workingDir, PRUint32 state)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setWindowContext (in nsIDOMWindow aWindow); */
NS_IMETHODIMP nsCommandLineRunner::SetWindowContext(nsIDOMWindow *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void run (); */
NS_IMETHODIMP nsCommandLineRunner::Run()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String helpText; */
NS_IMETHODIMP nsCommandLineRunner::GetHelpText(nsACString & aHelpText)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICommandLineRunner_h__ */
