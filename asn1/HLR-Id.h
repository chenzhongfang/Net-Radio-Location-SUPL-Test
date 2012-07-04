/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-CommonDataTypes"
 * 	found in "../asn1src/MAP-CommonDataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_HLR_Id_H_
#define	_HLR_Id_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IMSI.h"

#ifdef __cplusplus
extern "C" {
#endif

/* HLR-Id */
typedef IMSI_t	 HLR_Id_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HLR_Id;
asn_struct_free_f HLR_Id_free;
asn_struct_print_f HLR_Id_print;
asn_constr_check_f HLR_Id_constraint;
ber_type_decoder_f HLR_Id_decode_ber;
der_type_encoder_f HLR_Id_encode_der;
xer_type_decoder_f HLR_Id_decode_xer;
xer_type_encoder_f HLR_Id_encode_xer;
per_type_decoder_f HLR_Id_decode_uper;
per_type_encoder_f HLR_Id_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _HLR_Id_H_ */
#include <asn_internal.h>