/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_BasicServiceCriteria_H_
#define	_BasicServiceCriteria_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ext_BasicServiceCode;

/* BasicServiceCriteria */
typedef struct BasicServiceCriteria {
	A_SEQUENCE_OF(struct Ext_BasicServiceCode) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BasicServiceCriteria_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BasicServiceCriteria;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Ext-BasicServiceCode.h"

#endif	/* _BasicServiceCriteria_H_ */
#include <asn_internal.h>
