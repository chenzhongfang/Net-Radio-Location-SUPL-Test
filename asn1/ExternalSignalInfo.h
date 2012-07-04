/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-CommonDataTypes"
 * 	found in "../asn1src/MAP-CommonDataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_ExternalSignalInfo_H_
#define	_ExternalSignalInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolId.h"
#include "SignalInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ExtensionContainer;

/* ExternalSignalInfo */
typedef struct ExternalSignalInfo {
	ProtocolId_t	 protocolId;
	SignalInfo_t	 signalInfo;
	struct ExtensionContainer	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ExternalSignalInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ExternalSignalInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ExtensionContainer.h"

#endif	/* _ExternalSignalInfo_H_ */
#include <asn_internal.h>
