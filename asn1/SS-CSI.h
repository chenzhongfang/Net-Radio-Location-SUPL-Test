/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_SS_CSI_H_
#define	_SS_CSI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SS-CamelData.h"
#include <NULL.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ExtensionContainer;

/* SS-CSI */
typedef struct SS_CSI {
	SS_CamelData_t	 ss_CamelData;
	struct ExtensionContainer	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	NULL_t	*notificationToCSE	/* OPTIONAL */;
	NULL_t	*csi_Active	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SS_CSI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SS_CSI;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ExtensionContainer.h"

#endif	/* _SS_CSI_H_ */
#include <asn_internal.h>
