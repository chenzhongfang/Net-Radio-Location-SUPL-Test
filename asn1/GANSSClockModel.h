/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_GANSSClockModel_H_
#define	_GANSSClockModel_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SeqOfStandardClockModelElement.h"
#include "NAVclockModel.h"
#include "CNAVclockModel.h"
#include "GLONASSclockModel.h"
#include "SBASclockModel.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GANSSClockModel_PR {
	GANSSClockModel_PR_NOTHING,	/* No components present */
	GANSSClockModel_PR_standardClockModelList,
	/* Extensions may appear below */
	GANSSClockModel_PR_navClockModel,
	GANSSClockModel_PR_cnavClockModel,
	GANSSClockModel_PR_glonassClockModel,
	GANSSClockModel_PR_sbasClockModel
} GANSSClockModel_PR;

/* GANSSClockModel */
typedef struct GANSSClockModel {
	GANSSClockModel_PR present;
	union GANSSClockModel_u {
		SeqOfStandardClockModelElement_t	 standardClockModelList;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		NAVclockModel_t	 navClockModel;
		CNAVclockModel_t	 cnavClockModel;
		GLONASSclockModel_t	 glonassClockModel;
		SBASclockModel_t	 sbasClockModel;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSSClockModel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSClockModel;

#ifdef __cplusplus
}
#endif

#endif	/* _GANSSClockModel_H_ */
#include <asn_internal.h>
