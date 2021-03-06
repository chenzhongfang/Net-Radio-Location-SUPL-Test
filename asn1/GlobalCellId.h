/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-CommonDataTypes"
 * 	found in "../asn1src/MAP-CommonDataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_GlobalCellId_H_
#define	_GlobalCellId_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GlobalCellId */
typedef OCTET_STRING_t	 GlobalCellId_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GlobalCellId;
asn_struct_free_f GlobalCellId_free;
asn_struct_print_f GlobalCellId_print;
asn_constr_check_f GlobalCellId_constraint;
ber_type_decoder_f GlobalCellId_decode_ber;
der_type_encoder_f GlobalCellId_encode_der;
xer_type_decoder_f GlobalCellId_decode_xer;
xer_type_encoder_f GlobalCellId_encode_xer;
per_type_decoder_f GlobalCellId_decode_uper;
per_type_encoder_f GlobalCellId_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _GlobalCellId_H_ */
#include <asn_internal.h>
