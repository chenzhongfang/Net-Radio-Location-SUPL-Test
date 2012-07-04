/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_GPSAssistance_H_
#define	_GPSAssistance_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GPSAssistance {
	GPSAssistance_almanac	= 0,
	GPSAssistance_uTCmodel	= 1,
	GPSAssistance_ionosphericModel	= 2,
	GPSAssistance_navigationmodel	= 3,
	GPSAssistance_dGPScorrections	= 4,
	GPSAssistance_referenceLocation	= 5,
	GPSAssistance_referenceTime	= 6,
	GPSAssistance_acquisitionAssistance	= 7,
	GPSAssistance_realTimeIntegrity	= 8,
	GPSAssistance_ephemerisExtension	= 9,
	GPSAssistance_ephemerisExtensionCheck	= 10
} e_GPSAssistance;

/* GPSAssistance */
typedef BIT_STRING_t	 GPSAssistance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GPSAssistance;
asn_struct_free_f GPSAssistance_free;
asn_struct_print_f GPSAssistance_print;
asn_constr_check_f GPSAssistance_constraint;
ber_type_decoder_f GPSAssistance_decode_ber;
der_type_encoder_f GPSAssistance_encode_der;
xer_type_decoder_f GPSAssistance_decode_xer;
xer_type_encoder_f GPSAssistance_encode_xer;
per_type_decoder_f GPSAssistance_decode_uper;
per_type_encoder_f GPSAssistance_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _GPSAssistance_H_ */
#include <asn_internal.h>
