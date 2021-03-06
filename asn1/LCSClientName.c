/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-LCS-DataTypes"
 * 	found in "../asn1src/MAP-LCS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "LCSClientName.h"

static asn_TYPE_member_t asn_MBR_LCSClientName_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LCSClientName, dataCodingScheme),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_USSD_DataCodingScheme,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dataCodingScheme"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LCSClientName, nameString),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NameString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nameString"
		},
	{ ATF_POINTER, 1, offsetof(struct LCSClientName, lcs_FormatIndicator),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LCS_FormatIndicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lcs-FormatIndicator"
		},
};
static int asn_MAP_LCSClientName_oms_1[] = { 2 };
static ber_tlv_tag_t asn_DEF_LCSClientName_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LCSClientName_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dataCodingScheme at 183 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* nameString at 184 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, 0, 0 } /* lcs-FormatIndicator at 186 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LCSClientName_specs_1 = {
	sizeof(struct LCSClientName),
	offsetof(struct LCSClientName, _asn_ctx),
	asn_MAP_LCSClientName_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LCSClientName_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	1,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LCSClientName = {
	"LCSClientName",
	"LCSClientName",
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
	asn_DEF_LCSClientName_tags_1,
	sizeof(asn_DEF_LCSClientName_tags_1)
		/sizeof(asn_DEF_LCSClientName_tags_1[0]), /* 1 */
	asn_DEF_LCSClientName_tags_1,	/* Same as above */
	sizeof(asn_DEF_LCSClientName_tags_1)
		/sizeof(asn_DEF_LCSClientName_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LCSClientName_1,
	3,	/* Elements count */
	&asn_SPC_LCSClientName_specs_1	/* Additional specs */
};

