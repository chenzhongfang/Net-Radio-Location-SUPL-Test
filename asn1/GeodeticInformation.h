/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_GeodeticInformation_H_
#define	_GeodeticInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GeodeticInformation */
typedef OCTET_STRING_t	 GeodeticInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GeodeticInformation;
asn_struct_free_f GeodeticInformation_free;
asn_struct_print_f GeodeticInformation_print;
asn_constr_check_f GeodeticInformation_constraint;
ber_type_decoder_f GeodeticInformation_decode_ber;
der_type_encoder_f GeodeticInformation_encode_der;
xer_type_decoder_f GeodeticInformation_decode_xer;
xer_type_encoder_f GeodeticInformation_encode_xer;
per_type_decoder_f GeodeticInformation_decode_uper;
per_type_encoder_f GeodeticInformation_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _GeodeticInformation_H_ */
#include <asn_internal.h>
