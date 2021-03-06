/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-OM-DataTypes"
 * 	found in "../asn1src/MAP-OM-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_ReportingTrigger_H_
#define	_ReportingTrigger_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ReportingTrigger */
typedef OCTET_STRING_t	 ReportingTrigger_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReportingTrigger;
asn_struct_free_f ReportingTrigger_free;
asn_struct_print_f ReportingTrigger_print;
asn_constr_check_f ReportingTrigger_constraint;
ber_type_decoder_f ReportingTrigger_decode_ber;
der_type_encoder_f ReportingTrigger_encode_der;
xer_type_decoder_f ReportingTrigger_decode_xer;
xer_type_encoder_f ReportingTrigger_encode_xer;
per_type_decoder_f ReportingTrigger_decode_uper;
per_type_encoder_f ReportingTrigger_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ReportingTrigger_H_ */
#include <asn_internal.h>
