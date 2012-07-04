/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_SeqOfSatElement_H_
#define	_SeqOfSatElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SatElement;

/* SeqOfSatElement */
typedef struct SeqOfSatElement {
	A_SEQUENCE_OF(struct SatElement) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SeqOfSatElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SeqOfSatElement;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SatElement.h"

#endif	/* _SeqOfSatElement_H_ */
#include <asn_internal.h>
