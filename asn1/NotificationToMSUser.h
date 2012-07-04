/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_NotificationToMSUser_H_
#define	_NotificationToMSUser_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NotificationToMSUser {
	NotificationToMSUser_notifyLocationAllowed	= 0,
	NotificationToMSUser_notifyAndVerify_LocationAllowedIfNoResponse	= 1,
	NotificationToMSUser_notifyAndVerify_LocationNotAllowedIfNoResponse	= 2,
	/*
	 * Enumeration is extensible
	 */
	NotificationToMSUser_locationNotAllowed	= 3
} e_NotificationToMSUser;

/* NotificationToMSUser */
typedef long	 NotificationToMSUser_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NotificationToMSUser;
asn_struct_free_f NotificationToMSUser_free;
asn_struct_print_f NotificationToMSUser_print;
asn_constr_check_f NotificationToMSUser_constraint;
ber_type_decoder_f NotificationToMSUser_decode_ber;
der_type_encoder_f NotificationToMSUser_encode_der;
xer_type_decoder_f NotificationToMSUser_decode_xer;
xer_type_encoder_f NotificationToMSUser_encode_xer;
per_type_decoder_f NotificationToMSUser_decode_uper;
per_type_encoder_f NotificationToMSUser_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _NotificationToMSUser_H_ */
#include <asn_internal.h>