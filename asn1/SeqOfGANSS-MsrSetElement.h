/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_SeqOfGANSS_MsrSetElement_H_
#define	_SeqOfGANSS_MsrSetElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GANSS_MsrSetElement;

/* SeqOfGANSS-MsrSetElement */
typedef struct SeqOfGANSS_MsrSetElement {
	A_SEQUENCE_OF(struct GANSS_MsrSetElement) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SeqOfGANSS_MsrSetElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SeqOfGANSS_MsrSetElement;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GANSS-MsrSetElement.h"

#endif	/* _SeqOfGANSS_MsrSetElement_H_ */
#include <asn_internal.h>
