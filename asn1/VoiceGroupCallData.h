/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_VoiceGroupCallData_H_
#define	_VoiceGroupCallData_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GroupId.h"
#include "AdditionalSubscriptions.h"
#include "AdditionalInfo.h"
#include "Long-GroupId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ExtensionContainer;

/* VoiceGroupCallData */
typedef struct VoiceGroupCallData {
	GroupId_t	 groupId;
	struct ExtensionContainer	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	AdditionalSubscriptions_t	*additionalSubscriptions	/* OPTIONAL */;
	AdditionalInfo_t	*additionalInfo	/* OPTIONAL */;
	Long_GroupId_t	*longGroupId	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VoiceGroupCallData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VoiceGroupCallData;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ExtensionContainer.h"

#endif	/* _VoiceGroupCallData_H_ */
#include <asn_internal.h>