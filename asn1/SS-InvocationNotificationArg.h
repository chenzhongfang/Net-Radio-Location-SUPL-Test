/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-SS-DataTypes"
 * 	found in "../asn1src/MAP-SS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_SS_InvocationNotificationArg_H_
#define	_SS_InvocationNotificationArg_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IMSI.h"
#include "ISDN-AddressString.h"
#include "SS-Code.h"
#include "CCBS-RequestState.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SS_EventSpecification;
struct ExtensionContainer;

/* SS-InvocationNotificationArg */
typedef struct SS_InvocationNotificationArg {
	IMSI_t	 imsi;
	ISDN_AddressString_t	 msisdn;
	SS_Code_t	 ss_Event;
	struct SS_EventSpecification	*ss_EventSpecification	/* OPTIONAL */;
	struct ExtensionContainer	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	ISDN_AddressString_t	*b_subscriberNumber	/* OPTIONAL */;
	CCBS_RequestState_t	*ccbs_RequestState	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SS_InvocationNotificationArg_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SS_InvocationNotificationArg;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SS-EventSpecification.h"
#include "ExtensionContainer.h"

#endif	/* _SS_InvocationNotificationArg_H_ */
#include <asn_internal.h>
