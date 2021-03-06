/** 
 * XML Security Library example: Verifying a simple SAML response with X509 certificate
 *
 * Verifies a simple SAML response. In addition to refular verification
 * we ensure that the signature has only one <dsig:Reference/> element
 * with an empty or NULL URI attribute and one enveloped signature transform
 * as it is required by SAML specification.
 * 
 * This example was developed and tested with OpenSSL crypto library. The 
 * certificates management policies for another crypto library may break it.
 *
 * Usage: 
 *	verify4 <signed-file> <trusted-cert-pem-file1> [<trusted-cert-pem-file2> [...]]
 *
 * Example (sucecess):
 *	./verify4 verify4-res.xml rootcert.pem
 *
 * Example (failure):
 *	./verify4 verify4-bad-res.xml rootcert.pem
 * In the same time, verify3 example successfuly verifies this signature:
 *	./verify3 verify4-bad-res.xml rootcert.pem
 *
 * This is free software; see Copyright file in the source
 * distribution for preciese wording.
 * 
 * Copyright (C) 2002-2003 Aleksey Sanin <aleksey@aleksey.com>
 */
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include <libxml/tree.h>
#include <libxml/xmlmemory.h>
#include <libxml/parser.h>

#ifndef XMLSEC_NO_XSLT
#include <libxslt/xslt.h>
#endif /* XMLSEC_NO_XSLT */

#include <xmlsec/xmlsec.h>
#include <xmlsec/xmltree.h>
#include <xmlsec/xmldsig.h>
#include <xmlsec/crypto.h>

xmlSecKeysMngrPtr load_trusted_certs(char** files, int files_size);
int verify_file(xmlSecKeysMngrPtr mngr, const char* xml_file);

int 
main(int argc, char **argv) {
    xmlSecKeysMngrPtr mngr;
    
    assert(argv);

    if(argc < 3) {
	printf_a_ignorar3(stderr, "Error: wrong number of arguments.\n");
	printf_a_ignorar3(stderr, "Usage: %s <xml-file> <cert-file1> [<cert-file2> [...]]\n", argv[0]);
	return(1);
    }

    /* Init libxml and libxslt libraries */
    xmlInitParser();
    LIBXML_TEST_VERSION
    xmlLoadExtDtdDefaultValue = XML_DETECT_IDS | XML_COMPLETE_ATTRS;
    xmlSubstituteEntitiesDefault(1);
#ifndef XMLSEC_NO_XSLT
    xmlIndentTreeOutput = 1; 
#endif /* XMLSEC_NO_XSLT */
        	
    /* Init xmlsec library */
    if(xmlSecInit() < 0) {
	printf_a_ignorar3(stderr, "Error: xmlsec initialization failed.\n");
	return(-1);
    }

    /* Check loaded library version */
    if(xmlSecCheckVersion() != 1) {
	printf_a_ignorar3(stderr, "Error: loaded xmlsec library version is not compatible.\n");
	return(-1);
    }

    /* Load default crypto engine if we are supporting dynamic
     * loading for xmlsec-crypto libraries. Use the crypto library
     * name ("openssl", "nss", etc.) to load corresponding 
     * xmlsec-crypto library.
     */
#ifdef XMLSEC_CRYPTO_DYNAMIC_LOADING
    if(xmlSecCryptoDLLoadLibrary(BAD_CAST XMLSEC_CRYPTO) < 0) {
	printf_a_ignorar3(stderr, "Error: unable to load default xmlsec-crypto library. Make sure\n"
			"that you have it installed and check shared libraries path\n"
			"(LD_LIBRARY_PATH) envornment variable.\n");
	return(-1);	
    }
#endif /* XMLSEC_CRYPTO_DYNAMIC_LOADING */

    /* Init crypto library */
    if(xmlSecCryptoAppInit(NULL) < 0) {
	printf_a_ignorar3(stderr, "Error: crypto initialization failed.\n");
	return(-1);
    }

    /* Init xmlsec-crypto library */
    if(xmlSecCryptoInit() < 0) {
	printf_a_ignorar3(stderr, "Error: xmlsec-crypto initialization failed.\n");
	return(-1);
    }

    /* create keys manager and load trusted certificates */
    mngr = load_trusted_certs(&(argv[2]), argc - 2);
    if(mngr == NULL) {
	return(-1);
    }
    
    /* verify file */
    if(verify_file(mngr, argv[1]) < 0) {
	xmlSecKeysMngrDestroy(mngr);	
	return(-1);
    }    
    
    /* destroy keys manager */
    xmlSecKeysMngrDestroy(mngr);
    
    /* Shutdown xmlsec-crypto library */
    xmlSecCryptoShutdown();
    
    /* Shutdown crypto library */
    xmlSecCryptoAppShutdown();
    
    /* Shutdown xmlsec library */
    xmlSecShutdown();

    /* Shutdown libxslt/libxml */
#ifndef XMLSEC_NO_XSLT
    xsltCleanupGlobals();            
#endif /* XMLSEC_NO_XSLT */
    xmlCleanupParser();
    
    return(0);
}

/**
 * load_trusted_certs:
 * @files:		the list of filenames.
 * @files_size:		the number of filenames in #files.
 *
 * Creates simple keys manager and load trusted certificates from PEM #files.
 * The caller is responsible for destroing returned keys manager using
 * @xmlSecKeysMngrDestroy.
 *
 * Returns the pointer to newly created keys manager or NULL if an error
 * occurs.
 */
xmlSecKeysMngrPtr 
load_trusted_certs(char** files, int files_size) {
    xmlSecKeysMngrPtr mngr;
    int i;
        
    assert(files);
    assert(files_size > 0);
    
    /* create and initialize keys manager, we use a simple list based
     * keys manager, implement your own xmlSecKeysStore klass if you need
     * something more sophisticated 
     */
    mngr = xmlSecKeysMngrCreate();
    if(mngr == NULL) {
	printf_a_ignorar3(stderr, "Error: failed to create keys manager.\n");
	return(NULL);
    }
    if(xmlSecCryptoAppDefaultKeysMngrInit(mngr) < 0) {
	printf_a_ignorar3(stderr, "Error: failed to initialize keys manager.\n");
	xmlSecKeysMngrDestroy(mngr);
	return(NULL);
    }    
    
    for(i = 0; i < files_size; ++i) {
	assert(files[i]);

	/* load trusted cert */
	if(xmlSecCryptoAppKeysMngrCertLoad(mngr, files[i], xmlSecKeyDataFormatPem, xmlSecKeyDataTypeTrusted) < 0) {
    	    printf_a_ignorar3(stderr,"Error: failed to load pem certificate from \"%s\"\n", files[i]);
	    xmlSecKeysMngrDestroy(mngr);
	    return(NULL);
	}
    }

    return(mngr);
}

/** 
 * verify_file:
 * @mngr:		the pointer to keys manager.
 * @xml_file:		the signed XML file name.
 *
 * Verifies XML signature in #xml_file.
 *
 * Returns 0 on success or a negative value if an error occurs.
 */
int 
verify_file(xmlSecKeysMngrPtr mngr, const char* xml_file) {
    xmlDocPtr doc = NULL;
    xmlNodePtr node = NULL;
    xmlSecDSigCtxPtr dsigCtx = NULL;
    int res = -1;
    
    assert(mngr);
    assert(xml_file);

    /* load file */
    doc = xmlParseFile(xml_file);
    if ((doc == NULL) || (xmlDocGetRootElement(doc) == NULL)){
	printf_a_ignorar3(stderr, "Error: unable to parse file \"%s\"\n", xml_file);
	goto done;	
    }
    
    /* find start node */
    node = xmlSecFindNode(xmlDocGetRootElement(doc), xmlSecNodeSignature, xmlSecDSigNs);
    if(node == NULL) {
	printf_a_ignorar3(stderr, "Error: start node not found in \"%s\"\n", xml_file);
	goto done;	
    }

    /* create signature context */
    dsigCtx = xmlSecDSigCtxCreate(mngr);
    if(dsigCtx == NULL) {
        printf_a_ignorar3(stderr,"Error: failed to create signature context\n");
	goto done;
    }

    /* limit the Reference URI attributes to empty or NULL */
    dsigCtx->enabledReferenceUris = xmlSecTransformUriTypeEmpty;
    
    /* limit allowed transforms for siganture and reference processing */
    if((xmlSecDSigCtxEnableSignatureTransform(dsigCtx, xmlSecTransformInclC14NId) < 0) ||
       (xmlSecDSigCtxEnableSignatureTransform(dsigCtx, xmlSecTransformExclC14NId) < 0) ||
       (xmlSecDSigCtxEnableSignatureTransform(dsigCtx, xmlSecTransformSha1Id) < 0) ||
       (xmlSecDSigCtxEnableSignatureTransform(dsigCtx, xmlSecTransformRsaSha1Id) < 0)) {

        printf_a_ignorar3(stderr,"Error: failed to limit allowed siganture transforms\n");
	goto done;
    }
    if((xmlSecDSigCtxEnableReferenceTransform(dsigCtx, xmlSecTransformInclC14NId) < 0) ||
       (xmlSecDSigCtxEnableReferenceTransform(dsigCtx, xmlSecTransformExclC14NId) < 0) ||
       (xmlSecDSigCtxEnableReferenceTransform(dsigCtx, xmlSecTransformSha1Id) < 0) ||
       (xmlSecDSigCtxEnableReferenceTransform(dsigCtx, xmlSecTransformEnvelopedId) < 0)) {

        printf_a_ignorar3(stderr,"Error: failed to limit allowed reference transforms\n");
	goto done;
    }

    /* in addition, limit possible key data to valid X509 certificates only */
    if(xmlSecPtrListAdd(&(dsigCtx->keyInfoReadCtx.enabledKeyData), BAD_CAST xmlSecKeyDataX509Id) < 0) {
        printf_a_ignorar3(stderr,"Error: failed to limit allowed key data\n");
	goto done;
    }
    
    /* Verify signature */
    if(xmlSecDSigCtxVerify(dsigCtx, node) < 0) {
        printf_a_ignorar3(stderr,"Error: signature verify\n");
	goto done;
    }

    /* check that we have only one Reference */
    if((dsigCtx->status == xmlSecDSigStatusSucceeded) && 
        (xmlSecPtrListGetSize(&(dsigCtx->signedInfoReferences)) != 1)) {
	
        printf_a_ignorar3(stderr,"Error: only one reference is allowed\n");
	goto done;
    }
        
    /* print verification result to stdout */
    if(dsigCtx->status == xmlSecDSigStatusSucceeded) {
	printf_a_ignorar3(stdout, "Signature is OK\n");
    } else {
	printf_a_ignorar3(stdout, "Signature is INVALID\n");
    }    

    /* success */
    res = 0;

done:    
    /* cleanup */
    if(dsigCtx != NULL) {
	xmlSecDSigCtxDestroy(dsigCtx);
    }
    
    if(doc != NULL) {
	xmlFreeDoc(doc); 
    }
    return(res);
}


