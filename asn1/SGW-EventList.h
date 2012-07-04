/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-OM-DataTypes"
 * 	found in "../asn1src/MAP-OM-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_SGW_EventList_H_
#define	_SGW_EventList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SGW_EventList {
	SGW_EventList_pdn_connectionCreation	= 0,
	SGW_EventList_pdn_connectionTermination	= 1,
	SGW_EventList_bearerActivationModificationDeletion	= 2
} e_SGW_EventList;

/* SGW-EventList */
typedef BIT_STRING_t	 SGW_EventList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SGW_EventList;
asn_struct_free_f SGW_EventList_free;
asn_struct_print_f SGW_EventList_print;
asn_constr_check_f SGW_EventList_constraint;
ber_type_decoder_f SGW_EventList_decode_ber;
der_type_encoder_f SGW_EventList_encode_der;
xer_type_decoder_f SGW_EventList_decode_xer;
xer_type_encoder_f SGW_EventList_encode_xer;
per_type_decoder_f SGW_EventList_decode_uper;
per_type_encoder_f SGW_EventList_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SGW_EventList_H_ */
#include <asn_internal.h>
