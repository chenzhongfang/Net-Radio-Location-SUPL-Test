/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_Ext_SS_InfoList_H_
#define	_Ext_SS_InfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ext_SS_Info;

/* Ext-SS-InfoList */
typedef struct Ext_SS_InfoList {
	A_SEQUENCE_OF(struct Ext_SS_Info) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ext_SS_InfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ext_SS_InfoList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Ext-SS-Info.h"

#endif	/* _Ext_SS_InfoList_H_ */
#include <asn_internal.h>
