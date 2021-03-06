/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-SS-DataTypes"
 * 	found in "../asn1src/MAP-SS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "CallBarringFeature.h"

static asn_TYPE_member_t asn_MBR_CallBarringFeature_1[] = {
	{ ATF_POINTER, 2, offsetof(struct CallBarringFeature, basicService),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_BasicServiceCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"basicService"
		},
	{ ATF_POINTER, 1, offsetof(struct CallBarringFeature, ss_Status),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SS_Status,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ss-Status"
		},
};
static int asn_MAP_CallBarringFeature_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_CallBarringFeature_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CallBarringFeature_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 0, 0, 0 }, /* bearerService at 574 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 0, 0, 0 }, /* teleservice at 575 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, 0, 0 } /* ss-Status at 151 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CallBarringFeature_specs_1 = {
	sizeof(struct CallBarringFeature),
	offsetof(struct CallBarringFeature, _asn_ctx),
	asn_MAP_CallBarringFeature_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_CallBarringFeature_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CallBarringFeature = {
	"CallBarringFeature",
	"CallBarringFeature",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CallBarringFeature_tags_1,
	sizeof(asn_DEF_CallBarringFeature_tags_1)
		/sizeof(asn_DEF_CallBarringFeature_tags_1[0]), /* 1 */
	asn_DEF_CallBarringFeature_tags_1,	/* Same as above */
	sizeof(asn_DEF_CallBarringFeature_tags_1)
		/sizeof(asn_DEF_CallBarringFeature_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CallBarringFeature_1,
	2,	/* Elements count */
	&asn_SPC_CallBarringFeature_specs_1	/* Additional specs */
};

