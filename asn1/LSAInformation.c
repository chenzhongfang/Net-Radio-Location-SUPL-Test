/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "LSAInformation.h"

static asn_TYPE_member_t asn_MBR_LSAInformation_1[] = {
	{ ATF_POINTER, 4, offsetof(struct LSAInformation, completeDataListIncluded),
		(ASN_TAG_CLASS_UNIVERSAL | (5 << 2)),
		0,
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"completeDataListIncluded"
		},
	{ ATF_POINTER, 3, offsetof(struct LSAInformation, lsaOnlyAccessIndicator),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LSAOnlyAccessIndicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lsaOnlyAccessIndicator"
		},
	{ ATF_POINTER, 2, offsetof(struct LSAInformation, lsaDataList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LSADataList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lsaDataList"
		},
	{ ATF_POINTER, 1, offsetof(struct LSAInformation, extensionContainer),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
};
static int asn_MAP_LSAInformation_oms_1[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_LSAInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LSAInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (5 << 2)), 0, 0, 0 }, /* completeDataListIncluded at 1476 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lsaOnlyAccessIndicator at 1480 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lsaDataList at 1481 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* extensionContainer at 1482 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LSAInformation_specs_1 = {
	sizeof(struct LSAInformation),
	offsetof(struct LSAInformation, _asn_ctx),
	asn_MAP_LSAInformation_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LSAInformation_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LSAInformation = {
	"LSAInformation",
	"LSAInformation",
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
	asn_DEF_LSAInformation_tags_1,
	sizeof(asn_DEF_LSAInformation_tags_1)
		/sizeof(asn_DEF_LSAInformation_tags_1[0]), /* 1 */
	asn_DEF_LSAInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_LSAInformation_tags_1)
		/sizeof(asn_DEF_LSAInformation_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LSAInformation_1,
	4,	/* Elements count */
	&asn_SPC_LSAInformation_specs_1	/* Additional specs */
};

