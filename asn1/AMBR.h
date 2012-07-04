/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_AMBR_H_
#define	_AMBR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Bandwidth.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ExtensionContainer;

/* AMBR */
typedef struct AMBR {
	Bandwidth_t	 max_RequestedBandwidth_UL;
	Bandwidth_t	 max_RequestedBandwidth_DL;
	struct ExtensionContainer	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AMBR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AMBR;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ExtensionContainer.h"

#endif	/* _AMBR_H_ */
#include <asn_internal.h>