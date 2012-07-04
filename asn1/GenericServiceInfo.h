/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-SS-DataTypes"
 * 	found in "../asn1src/MAP-SS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_GenericServiceInfo_H_
#define	_GenericServiceInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SS-Status.h"
#include "CliRestrictionOption.h"
#include "EMLPP-Priority.h"
#include "MaxMC-Bearers.h"
#include "MC-Bearers.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CCBS_FeatureList;

/* GenericServiceInfo */
typedef struct GenericServiceInfo {
	SS_Status_t	 ss_Status;
	CliRestrictionOption_t	*cliRestrictionOption	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	EMLPP_Priority_t	*maximumEntitledPriority	/* OPTIONAL */;
	EMLPP_Priority_t	*defaultPriority	/* OPTIONAL */;
	struct CCBS_FeatureList	*ccbs_FeatureList	/* OPTIONAL */;
	MaxMC_Bearers_t	*nbrSB	/* OPTIONAL */;
	MC_Bearers_t	*nbrUser	/* OPTIONAL */;
	MC_Bearers_t	*nbrSN	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GenericServiceInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GenericServiceInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CCBS-FeatureList.h"

#endif	/* _GenericServiceInfo_H_ */
#include <asn_internal.h>
