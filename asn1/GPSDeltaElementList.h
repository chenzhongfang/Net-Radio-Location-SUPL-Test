/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_GPSDeltaElementList_H_
#define	_GPSDeltaElementList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GPSDeltaElementList */
typedef struct GPSDeltaElementList {
	A_SEQUENCE_OF(OCTET_STRING_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GPSDeltaElementList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GPSDeltaElementList;

#ifdef __cplusplus
}
#endif

#endif	/* _GPSDeltaElementList_H_ */
#include <asn_internal.h>