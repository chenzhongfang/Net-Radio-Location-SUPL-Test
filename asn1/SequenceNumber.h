/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-LCS-DataTypes"
 * 	found in "../asn1src/MAP-LCS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_SequenceNumber_H_
#define	_SequenceNumber_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SequenceNumber */
typedef long	 SequenceNumber_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SequenceNumber;
asn_struct_free_f SequenceNumber_free;
asn_struct_print_f SequenceNumber_print;
asn_constr_check_f SequenceNumber_constraint;
ber_type_decoder_f SequenceNumber_decode_ber;
der_type_encoder_f SequenceNumber_encode_der;
xer_type_decoder_f SequenceNumber_decode_xer;
xer_type_encoder_f SequenceNumber_encode_xer;
per_type_decoder_f SequenceNumber_decode_uper;
per_type_encoder_f SequenceNumber_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SequenceNumber_H_ */
#include <asn_internal.h>