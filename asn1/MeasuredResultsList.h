/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../asn1src/ULP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_MeasuredResultsList_H_
#define	_MeasuredResultsList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasuredResults;

/* MeasuredResultsList */
typedef struct MeasuredResultsList {
	A_SEQUENCE_OF(struct MeasuredResults) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasuredResultsList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasuredResultsList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasuredResults.h"

#endif	/* _MeasuredResultsList_H_ */
#include <asn_internal.h>
