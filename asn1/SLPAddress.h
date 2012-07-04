/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../asn1src/ULP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_SLPAddress_H_
#define	_SLPAddress_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IPAddress.h"
#include "FQDN.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SLPAddress_PR {
	SLPAddress_PR_NOTHING,	/* No components present */
	SLPAddress_PR_iPAddress,
	SLPAddress_PR_fQDN,
	/* Extensions may appear below */
	
} SLPAddress_PR;

/* SLPAddress */
typedef struct SLPAddress {
	SLPAddress_PR present;
	union SLPAddress_u {
		IPAddress_t	 iPAddress;
		FQDN_t	 fQDN;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SLPAddress_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SLPAddress;

#ifdef __cplusplus
}
#endif

#endif	/* _SLPAddress_H_ */
#include <asn_internal.h>