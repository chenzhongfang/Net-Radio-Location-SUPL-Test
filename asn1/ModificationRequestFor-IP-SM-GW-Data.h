/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_ModificationRequestFor_IP_SM_GW_Data_H_
#define	_ModificationRequestFor_IP_SM_GW_Data_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ModificationInstruction.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ExtensionContainer;

/* ModificationRequestFor-IP-SM-GW-Data */
typedef struct ModificationRequestFor_IP_SM_GW_Data {
	ModificationInstruction_t	*modifyRegistrationStatus	/* OPTIONAL */;
	struct ExtensionContainer	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ModificationRequestFor_IP_SM_GW_Data_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ModificationRequestFor_IP_SM_GW_Data;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ExtensionContainer.h"

#endif	/* _ModificationRequestFor_IP_SM_GW_Data_H_ */
#include <asn_internal.h>