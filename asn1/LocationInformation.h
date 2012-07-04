/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_LocationInformation_H_
#define	_LocationInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AgeOfLocationInformation.h"
#include "GeographicalInformation.h"
#include "ISDN-AddressString.h"
#include "LocationNumber.h"
#include "LSAIdentity.h"
#include "GeodeticInformation.h"
#include <NULL.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellGlobalIdOrServiceAreaIdOrLAI;
struct ExtensionContainer;
struct LocationInformationEPS;
struct UserCSGInformation;

/* LocationInformation */
typedef struct LocationInformation {
	AgeOfLocationInformation_t	*ageOfLocationInformation	/* OPTIONAL */;
	GeographicalInformation_t	*geographicalInformation	/* OPTIONAL */;
	ISDN_AddressString_t	*vlr_number	/* OPTIONAL */;
	LocationNumber_t	*locationNumber	/* OPTIONAL */;
	struct CellGlobalIdOrServiceAreaIdOrLAI	*cellGlobalIdOrServiceAreaIdOrLAI	/* OPTIONAL */;
	struct ExtensionContainer	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	LSAIdentity_t	*selectedLSA_Id	/* OPTIONAL */;
	ISDN_AddressString_t	*msc_Number	/* OPTIONAL */;
	GeodeticInformation_t	*geodeticInformation	/* OPTIONAL */;
	NULL_t	*currentLocationRetrieved	/* OPTIONAL */;
	NULL_t	*sai_Present	/* OPTIONAL */;
	struct LocationInformationEPS	*locationInformationEPS	/* OPTIONAL */;
	struct UserCSGInformation	*userCSGInformation	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LocationInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocationInformation;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellGlobalIdOrServiceAreaIdOrLAI.h"
#include "ExtensionContainer.h"
#include "LocationInformationEPS.h"
#include "UserCSGInformation.h"

#endif	/* _LocationInformation_H_ */
#include <asn_internal.h>