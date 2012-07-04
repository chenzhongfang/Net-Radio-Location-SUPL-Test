/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-OM-DataTypes"
 * 	found in "../asn1src/MAP-OM-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_RNC_InterfaceList_H_
#define	_RNC_InterfaceList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RNC_InterfaceList {
	RNC_InterfaceList_iu	= 0,
	RNC_InterfaceList_iur	= 1,
	RNC_InterfaceList_iub	= 2,
	RNC_InterfaceList_uu	= 3
} e_RNC_InterfaceList;

/* RNC-InterfaceList */
typedef BIT_STRING_t	 RNC_InterfaceList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RNC_InterfaceList;
asn_struct_free_f RNC_InterfaceList_free;
asn_struct_print_f RNC_InterfaceList_print;
asn_constr_check_f RNC_InterfaceList_constraint;
ber_type_decoder_f RNC_InterfaceList_decode_ber;
der_type_encoder_f RNC_InterfaceList_encode_der;
xer_type_decoder_f RNC_InterfaceList_decode_xer;
xer_type_encoder_f RNC_InterfaceList_encode_xer;
per_type_decoder_f RNC_InterfaceList_decode_uper;
per_type_encoder_f RNC_InterfaceList_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RNC_InterfaceList_H_ */
#include <asn_internal.h>
