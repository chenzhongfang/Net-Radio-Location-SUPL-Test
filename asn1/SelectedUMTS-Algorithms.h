/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_SelectedUMTS_Algorithms_H_
#define	_SelectedUMTS_Algorithms_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ChosenIntegrityProtectionAlgorithm.h"
#include "ChosenEncryptionAlgorithm.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ExtensionContainer;

/* SelectedUMTS-Algorithms */
typedef struct SelectedUMTS_Algorithms {
	ChosenIntegrityProtectionAlgorithm_t	*integrityProtectionAlgorithm	/* OPTIONAL */;
	ChosenEncryptionAlgorithm_t	*encryptionAlgorithm	/* OPTIONAL */;
	struct ExtensionContainer	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SelectedUMTS_Algorithms_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SelectedUMTS_Algorithms;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ExtensionContainer.h"

#endif	/* _SelectedUMTS_Algorithms_H_ */
#include <asn_internal.h>
