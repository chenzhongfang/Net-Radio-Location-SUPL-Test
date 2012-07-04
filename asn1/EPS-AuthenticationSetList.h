/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_EPS_AuthenticationSetList_H_
#define	_EPS_AuthenticationSetList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EPC_AV;

/* EPS-AuthenticationSetList */
typedef struct EPS_AuthenticationSetList {
	A_SEQUENCE_OF(struct EPC_AV) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EPS_AuthenticationSetList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EPS_AuthenticationSetList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EPC-AV.h"

#endif	/* _EPS_AuthenticationSetList_H_ */
#include <asn_internal.h>
