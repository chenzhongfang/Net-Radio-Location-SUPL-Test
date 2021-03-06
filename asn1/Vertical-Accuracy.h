/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-LCS-DataTypes"
 * 	found in "../asn1src/MAP-LCS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_Vertical_Accuracy_H_
#define	_Vertical_Accuracy_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Vertical-Accuracy */
typedef OCTET_STRING_t	 Vertical_Accuracy_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vertical_Accuracy;
asn_struct_free_f Vertical_Accuracy_free;
asn_struct_print_f Vertical_Accuracy_print;
asn_constr_check_f Vertical_Accuracy_constraint;
ber_type_decoder_f Vertical_Accuracy_decode_ber;
der_type_encoder_f Vertical_Accuracy_encode_der;
xer_type_decoder_f Vertical_Accuracy_decode_xer;
xer_type_encoder_f Vertical_Accuracy_encode_xer;
per_type_decoder_f Vertical_Accuracy_decode_uper;
per_type_encoder_f Vertical_Accuracy_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Vertical_Accuracy_H_ */
#include <asn_internal.h>
