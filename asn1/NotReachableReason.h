/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_NotReachableReason_H_
#define	_NotReachableReason_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NotReachableReason {
	NotReachableReason_msPurged	= 0,
	NotReachableReason_imsiDetached	= 1,
	NotReachableReason_restrictedArea	= 2,
	NotReachableReason_notRegistered	= 3
} e_NotReachableReason;

/* NotReachableReason */
typedef long	 NotReachableReason_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NotReachableReason;
asn_struct_free_f NotReachableReason_free;
asn_struct_print_f NotReachableReason_print;
asn_constr_check_f NotReachableReason_constraint;
ber_type_decoder_f NotReachableReason_decode_ber;
der_type_encoder_f NotReachableReason_encode_der;
xer_type_decoder_f NotReachableReason_decode_xer;
xer_type_encoder_f NotReachableReason_encode_xer;
per_type_decoder_f NotReachableReason_decode_uper;
per_type_encoder_f NotReachableReason_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _NotReachableReason_H_ */
#include <asn_internal.h>