/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-LCS-DataTypes"
 * 	found in "../asn1src/MAP-LCS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_LCSClientName_H_
#define	_LCSClientName_H_


#include <asn_application.h>

/* Including external dependencies */
#include "USSD-DataCodingScheme.h"
#include "NameString.h"
#include "LCS-FormatIndicator.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LCSClientName */
typedef struct LCSClientName {
	USSD_DataCodingScheme_t	 dataCodingScheme;
	NameString_t	 nameString;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	LCS_FormatIndicator_t	*lcs_FormatIndicator	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LCSClientName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LCSClientName;

#ifdef __cplusplus
}
#endif

#endif	/* _LCSClientName_H_ */
#include <asn_internal.h>
