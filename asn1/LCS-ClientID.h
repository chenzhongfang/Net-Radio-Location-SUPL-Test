/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-LCS-DataTypes"
 * 	found in "../asn1src/MAP-LCS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_LCS_ClientID_H_
#define	_LCS_ClientID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LCSClientType.h"
#include "AddressString.h"
#include "LCSClientInternalID.h"
#include "APN.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LCSClientExternalID;
struct LCSClientName;
struct LCSRequestorID;

/* LCS-ClientID */
typedef struct LCS_ClientID {
	LCSClientType_t	 lcsClientType;
	struct LCSClientExternalID	*lcsClientExternalID	/* OPTIONAL */;
	AddressString_t	*lcsClientDialedByMS	/* OPTIONAL */;
	LCSClientInternalID_t	*lcsClientInternalID	/* OPTIONAL */;
	struct LCSClientName	*lcsClientName	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	APN_t	*lcsAPN	/* OPTIONAL */;
	struct LCSRequestorID	*lcsRequestorID	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LCS_ClientID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LCS_ClientID;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LCSClientExternalID.h"
#include "LCSClientName.h"
#include "LCSRequestorID.h"

#endif	/* _LCS_ClientID_H_ */
#include <asn_internal.h>