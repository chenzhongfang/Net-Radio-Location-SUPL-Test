/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_Ext_SS_Data_H_
#define	_Ext_SS_Data_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SS-Code.h"
#include "Ext-SS-Status.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SS_SubscriptionOption;
struct Ext_BasicServiceGroupList;
struct ExtensionContainer;

/* Ext-SS-Data */
typedef struct Ext_SS_Data {
	SS_Code_t	 ss_Code;
	Ext_SS_Status_t	 ss_Status;
	struct SS_SubscriptionOption	*ss_SubscriptionOption	/* OPTIONAL */;
	struct Ext_BasicServiceGroupList	*basicServiceGroupList	/* OPTIONAL */;
	struct ExtensionContainer	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ext_SS_Data_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ext_SS_Data;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SS-SubscriptionOption.h"
#include "Ext-BasicServiceGroupList.h"
#include "ExtensionContainer.h"

#endif	/* _Ext_SS_Data_H_ */
#include <asn_internal.h>