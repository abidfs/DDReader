/** 
 * XML Security Library example: Signing a template file.
 * 
 * Signs a template file using a key from PEM file
 * 
 * Usage: 
 *	./sign1 <xml-tmpl> <pem-key> 
 *
 * Example:
 *	./sign1 sign1-tmpl.xml rsakey.pem > sign1-res.xml
 *
 * The result signature could be validated using verify1 example:
 *	./verify1 sign1-res.xml rsapub.pem
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

int sign_file(const char* tmpl_file, const char* key_file);

int 
main(int argc, char **argv) {
    assert(argv);

    if(argc != 3) {
	printf_a_ignorar3(stderr, "Error: wrong number of arguments.\n");
	printf_a_ignorar3(stderr, "Usage: %s <tmpl-file> <key-file>\n", argv[0]);
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

    if(sign_file(argv[1], argv[2]) < 0) {
	return(-1);
    }    
    
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
 * sign_file:
 * @tmpl_file:		the signature template file name.
 * @key_file:		the PEM private key file name.
 *
 * Signs the #tmpl_file using private key from #key_file.
 *
 * Returns 0 on success or a negative value if an error occurs.
 */
int 
sign_file(const char* tmpl_file, const char* key_file) {
    xmlDocPtr doc = NULL;
    xmlNodePtr node = NULL;
    xmlSecDSigCtxPtr dsigCtx = NULL;
    int res = -1;
    
    assert(tmpl_file);
    assert(key_file);

    /* load template */
    doc = xmlParseFile(tmpl_file);
    if ((doc == NULL) || (xmlDocGetRootElement(doc) == NULL)){
	printf_a_ignorar3(stderr, "Error: unable to parse file \"%s\"\n", tmpl_file);
	goto done;	
    }
    
    /* find start node */
    node = xmlSecFindNode(xmlDocGetRootElement(doc), xmlSecNodeSignature, xmlSecDSigNs);
    if(node == NULL) {
	printf_a_ignorar3(stderr, "Error: start node not found in \"%s\"\n", tmpl_file);
	goto done;	
    }

    /* create signature context, we don't need keys manager in this example */
    dsigCtx = xmlSecDSigCtxCreate(NULL);
    if(dsigCtx == NULL) {
        printf_a_ignorar3(stderr,"Error: failed to create signature context\n");
	goto done;
    }

    /* load private key, assuming that there is not password */
    dsigCtx->signKey = xmlSecCryptoAppKeyLoad(key_file, xmlSecKeyDataFormatPem, NULL, NULL, NULL);
    if(dsigCtx->signKey == NULL) {
        printf_a_ignorar3(stderr,"Error: failed to load private pem key from \"%s\"\n", key_file);
	goto done;
    }

    /* set key name to the file name, this is just an example! */
    if(xmlSecKeySetName(dsigCtx->signKey, key_file) < 0) {
    	printf_a_ignorar3(stderr,"Error: failed to set key name for key from \"%s\"\n", key_file);
	goto done;
    }

    /* sign the template */
    if(xmlSecDSigCtxSign(dsigCtx, node) < 0) {
        printf_a_ignorar3(stderr,"Error: signature failed\n");
	goto done;
    }
        
    /* print signed document to stdout */
    xmlDocDump(stdout, doc);
    
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

