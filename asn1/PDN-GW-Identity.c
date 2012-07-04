/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "PDN-GW-Identity.h"

static asn_TYPE_member_t asn_MBR_PDN_GW_Identity_1[] = {
	{ ATF_POINTER, 4, offsetof(struct PDN_GW_Identity, pdn_gw_ipv4_Address),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDP_Address,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdn-gw-ipv4-Address"
		},
	{ ATF_POINTER, 3, offsetof(struct PDN_GW_Identity, pdn_gw_ipv6_Address),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDP_Address,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdn-gw-ipv6-Address"
		},
	{ ATF_POINTER, 2, offsetof(struct PDN_GW_Identity, pdn_gw_name),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FQGWN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdn-gw-name"
		},
	{ ATF_POINTER, 1, offsetof(struct PDN_GW_Identity, extensionContainer),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
};
static int asn_MAP_PDN_GW_Identity_oms_1[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_PDN_GW_Identity_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PDN_GW_Identity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdn-gw-ipv4-Address at 1229 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdn-gw-ipv6-Address at 1230 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdn-gw-name at 1231 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* extensionContainer at 1232 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PDN_GW_Identity_specs_1 = {
	sizeof(struct PDN_GW_Identity),
	offsetof(struct PDN_GW_Identity, _asn_ctx),
	asn_MAP_PDN_GW_Identity_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_PDN_GW_Identity_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PDN_GW_Identity = {
	"PDN-GW-Identity",
	"PDN-GW-Identity",
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
	asn_DEF_PDN_GW_Identity_tags_1,
	sizeof(asn_DEF_PDN_GW_Identity_tags_1)
		/sizeof(asn_DEF_PDN_GW_Identity_tags_1[0]), /* 1 */
	asn_DEF_PDN_GW_Identity_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDN_GW_Identity_tags_1)
		/sizeof(asn_DEF_PDN_GW_Identity_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PDN_GW_Identity_1,
	4,	/* Elements count */
	&asn_SPC_PDN_GW_Identity_specs_1	/* Additional specs */
};

