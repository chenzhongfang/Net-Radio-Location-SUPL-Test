/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-SS-DataTypes"
 * 	found in "../asn1src/MAP-SS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_CallBarringFeatureList_H_
#define	_CallBarringFeatureList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CallBarringFeature;

/* CallBarringFeatureList */
typedef struct CallBarringFeatureList {
	A_SEQUENCE_OF(struct CallBarringFeature) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CallBarringFeatureList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CallBarringFeatureList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CallBarringFeature.h"

#endif	/* _CallBarringFeatureList_H_ */
#include <asn_internal.h>
