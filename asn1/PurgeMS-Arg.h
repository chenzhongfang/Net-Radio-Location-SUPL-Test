/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_PurgeMS_Arg_H_
#define	_PurgeMS_Arg_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IMSI.h"
#include "ISDN-AddressString.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ExtensionContainer;

/* PurgeMS-Arg */
typedef struct PurgeMS_Arg {
	IMSI_t	 imsi;
	ISDN_AddressString_t	*vlr_Number	/* OPTIONAL */;
	ISDN_AddressString_t	*sgsn_Number	/* OPTIONAL */;
	struct ExtensionContainer	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PurgeMS_Arg_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PurgeMS_Arg;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ExtensionContainer.h"

#endif	/* _PurgeMS_Arg_H_ */
#include <asn_internal.h>
