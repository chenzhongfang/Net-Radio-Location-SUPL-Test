/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-SS-DataTypes"
 * 	found in "../asn1src/MAP-SS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_SS_List_H_
#define	_SS_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SS-Code.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SS-List */
typedef struct SS_List {
	A_SEQUENCE_OF(SS_Code_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SS_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SS_List;

#ifdef __cplusplus
}
#endif

#endif	/* _SS_List_H_ */
#include <asn_internal.h>