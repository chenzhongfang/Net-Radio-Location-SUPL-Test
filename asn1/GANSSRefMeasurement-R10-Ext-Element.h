/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_GANSSRefMeasurement_R10_Ext_Element_H_
#define	_GANSSRefMeasurement_R10_Ext_Element_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SVID.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GANSSRefMeasurement-R10-Ext-Element */
typedef struct GANSSRefMeasurement_R10_Ext_Element {
	SVID_t	 svID;
	long	 azimuthLSB;
	long	 elevationLSB;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSSRefMeasurement_R10_Ext_Element_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSRefMeasurement_R10_Ext_Element;

#ifdef __cplusplus
}
#endif

#endif	/* _GANSSRefMeasurement_R10_Ext_Element_H_ */
#include <asn_internal.h>