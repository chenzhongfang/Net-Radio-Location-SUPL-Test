/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-LCS-DataTypes"
 * 	found in "../asn1src/MAP-LCS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_SupportedGADShapes_H_
#define	_SupportedGADShapes_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SupportedGADShapes {
	SupportedGADShapes_ellipsoidPoint	= 0,
	SupportedGADShapes_ellipsoidPointWithUncertaintyCircle	= 1,
	SupportedGADShapes_ellipsoidPointWithUncertaintyEllipse	= 2,
	SupportedGADShapes_polygon	= 3,
	SupportedGADShapes_ellipsoidPointWithAltitude	= 4,
	SupportedGADShapes_ellipsoidPointWithAltitudeAndUncertaintyElipsoid	= 5,
	SupportedGADShapes_ellipsoidArc	= 6
} e_SupportedGADShapes;

/* SupportedGADShapes */
typedef BIT_STRING_t	 SupportedGADShapes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedGADShapes;
asn_struct_free_f SupportedGADShapes_free;
asn_struct_print_f SupportedGADShapes_print;
asn_constr_check_f SupportedGADShapes_constraint;
ber_type_decoder_f SupportedGADShapes_decode_ber;
der_type_encoder_f SupportedGADShapes_encode_der;
xer_type_decoder_f SupportedGADShapes_decode_xer;
xer_type_encoder_f SupportedGADShapes_encode_xer;
per_type_decoder_f SupportedGADShapes_decode_uper;
per_type_encoder_f SupportedGADShapes_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedGADShapes_H_ */
#include <asn_internal.h>
