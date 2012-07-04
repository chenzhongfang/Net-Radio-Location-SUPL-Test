/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-CommonDataTypes"
 * 	found in "../asn1src/MAP-CommonDataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_LCSClientInternalID_H_
#define	_LCSClientInternalID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LCSClientInternalID {
	LCSClientInternalID_broadcastService	= 0,
	LCSClientInternalID_o_andM_HPLMN	= 1,
	LCSClientInternalID_o_andM_VPLMN	= 2,
	LCSClientInternalID_anonymousLocation	= 3,
	LCSClientInternalID_targetMSsubscribedService	= 4
	/*
	 * Enumeration is extensible
	 */
} e_LCSClientInternalID;

/* LCSClientInternalID */
typedef long	 LCSClientInternalID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LCSClientInternalID;
asn_struct_free_f LCSClientInternalID_free;
asn_struct_print_f LCSClientInternalID_print;
asn_constr_check_f LCSClientInternalID_constraint;
ber_type_decoder_f LCSClientInternalID_decode_ber;
der_type_encoder_f LCSClientInternalID_encode_der;
xer_type_decoder_f LCSClientInternalID_decode_xer;
xer_type_encoder_f LCSClientInternalID_encode_xer;
per_type_decoder_f LCSClientInternalID_decode_uper;
per_type_encoder_f LCSClientInternalID_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _LCSClientInternalID_H_ */
#include <asn_internal.h>
