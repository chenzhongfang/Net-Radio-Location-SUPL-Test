/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "SupportedCodecsList.h"

static asn_TYPE_member_t asn_MBR_SupportedCodecsList_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SupportedCodecsList, utranCodecList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CodecList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utranCodecList"
		},
	{ ATF_POINTER, 2, offsetof(struct SupportedCodecsList, geranCodecList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CodecList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"geranCodecList"
		},
	{ ATF_POINTER, 1, offsetof(struct SupportedCodecsList, extensionContainer),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
};
static int asn_MAP_SupportedCodecsList_oms_1[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_SupportedCodecsList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SupportedCodecsList_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* utranCodecList at 868 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* geranCodecList at 869 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* extensionContainer at 870 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SupportedCodecsList_specs_1 = {
	sizeof(struct SupportedCodecsList),
	offsetof(struct SupportedCodecsList, _asn_ctx),
	asn_MAP_SupportedCodecsList_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SupportedCodecsList_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SupportedCodecsList = {
	"SupportedCodecsList",
	"SupportedCodecsList",
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
	asn_DEF_SupportedCodecsList_tags_1,
	sizeof(asn_DEF_SupportedCodecsList_tags_1)
		/sizeof(asn_DEF_SupportedCodecsList_tags_1[0]), /* 1 */
	asn_DEF_SupportedCodecsList_tags_1,	/* Same as above */
	sizeof(asn_DEF_SupportedCodecsList_tags_1)
		/sizeof(asn_DEF_SupportedCodecsList_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SupportedCodecsList_1,
	3,	/* Elements count */
	&asn_SPC_SupportedCodecsList_specs_1	/* Additional specs */
};

