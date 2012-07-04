/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-SM-DataTypes"
 * 	found in "../asn1src/MAP-SM-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_DispatcherList_H_
#define	_DispatcherList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ISDN-AddressString.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DispatcherList */
typedef struct DispatcherList {
	A_SEQUENCE_OF(ISDN_AddressString_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DispatcherList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DispatcherList;

#ifdef __cplusplus
}
#endif

#endif	/* _DispatcherList_H_ */
#include <asn_internal.h>