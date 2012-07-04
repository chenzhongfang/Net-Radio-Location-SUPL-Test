/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_CurrentSecurityContext_H_
#define	_CurrentSecurityContext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GSM-SecurityContextData.h"
#include "UMTS-SecurityContextData.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CurrentSecurityContext_PR {
	CurrentSecurityContext_PR_NOTHING,	/* No components present */
	CurrentSecurityContext_PR_gsm_SecurityContextData,
	CurrentSecurityContext_PR_umts_SecurityContextData
} CurrentSecurityContext_PR;

/* CurrentSecurityContext */
typedef struct CurrentSecurityContext {
	CurrentSecurityContext_PR present;
	union CurrentSecurityContext_u {
		GSM_SecurityContextData_t	 gsm_SecurityContextData;
		UMTS_SecurityContextData_t	 umts_SecurityContextData;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CurrentSecurityContext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CurrentSecurityContext;

#ifdef __cplusplus
}
#endif

#endif	/* _CurrentSecurityContext_H_ */
#include <asn_internal.h>
