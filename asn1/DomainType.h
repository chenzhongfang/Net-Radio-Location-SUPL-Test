/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_DomainType_H_
#define	_DomainType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DomainType {
	DomainType_cs_Domain	= 0,
	DomainType_ps_Domain	= 1
	/*
	 * Enumeration is extensible
	 */
} e_DomainType;

/* DomainType */
typedef long	 DomainType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DomainType;
asn_struct_free_f DomainType_free;
asn_struct_print_f DomainType_print;
asn_constr_check_f DomainType_constraint;
ber_type_decoder_f DomainType_decode_ber;
der_type_encoder_f DomainType_encode_der;
xer_type_decoder_f DomainType_decode_xer;
xer_type_encoder_f DomainType_encode_xer;
per_type_decoder_f DomainType_decode_uper;
per_type_encoder_f DomainType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DomainType_H_ */
#include <asn_internal.h>
