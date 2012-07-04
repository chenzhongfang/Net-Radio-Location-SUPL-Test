/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-OM-DataTypes"
 * 	found in "../asn1src/MAP-OM-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_MDT_Configuration_H_
#define	_MDT_Configuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "JobType.h"
#include "ListOfMeasurements.h"
#include "ReportingTrigger.h"
#include "ReportInterval.h"
#include "ReportAmount.h"
#include "EventThresholdRSRP.h"
#include "EventThresholdRSRQ.h"
#include "LoggingInterval.h"
#include "LoggingDuration.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AreaScope;
struct ExtensionContainer;

/* MDT-Configuration */
typedef struct MDT_Configuration {
	JobType_t	 jobType;
	struct AreaScope	*areaScope	/* OPTIONAL */;
	ListOfMeasurements_t	*listOfMeasurements	/* OPTIONAL */;
	ReportingTrigger_t	*reportingTrigger	/* OPTIONAL */;
	ReportInterval_t	*reportInterval	/* OPTIONAL */;
	ReportAmount_t	*reportAmount	/* OPTIONAL */;
	EventThresholdRSRP_t	*eventThresholdRSRP	/* OPTIONAL */;
	EventThresholdRSRQ_t	*eventThresholdRSRQ	/* OPTIONAL */;
	LoggingInterval_t	*loggingInterval	/* OPTIONAL */;
	LoggingDuration_t	*loggingDuration	/* OPTIONAL */;
	struct ExtensionContainer	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MDT_Configuration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MDT_Configuration;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AreaScope.h"
#include "ExtensionContainer.h"

#endif	/* _MDT_Configuration_H_ */
#include <asn_internal.h>
