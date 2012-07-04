/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_LocationError_H_
#define	_LocationError_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LocErrorReason.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AdditionalAssistanceData;

/* LocationError */
typedef struct LocationError {
	LocErrorReason_t	 locErrorReason;
	struct AdditionalAssistanceData	*additionalAssistanceData	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LocationError_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocationError;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AdditionalAssistanceData.h"

#endif	/* _LocationError_H_ */
#include <asn_internal.h>
