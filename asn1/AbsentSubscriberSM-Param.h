/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-ER-DataTypes"
 * 	found in "../asn1src/MAP-ER-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_AbsentSubscriberSM_Param_H_
#define	_AbsentSubscriberSM_Param_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AbsentSubscriberDiagnosticSM.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ExtensionContainer;

/* AbsentSubscriberSM-Param */
typedef struct AbsentSubscriberSM_Param {
	AbsentSubscriberDiagnosticSM_t	*absentSubscriberDiagnosticSM	/* OPTIONAL */;
	struct ExtensionContainer	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	AbsentSubscriberDiagnosticSM_t	*additionalAbsentSubscriberDiagnosticSM	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AbsentSubscriberSM_Param_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AbsentSubscriberSM_Param;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ExtensionContainer.h"

#endif	/* _AbsentSubscriberSM_Param_H_ */
#include <asn_internal.h>
