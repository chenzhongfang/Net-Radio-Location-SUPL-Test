/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "APN-Configuration.h"

static asn_TYPE_member_t asn_MBR_APN_Configuration_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct APN_Configuration, contextId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ContextId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"contextId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct APN_Configuration, pdn_Type),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDN_Type,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdn-Type"
		},
	{ ATF_POINTER, 1, offsetof(struct APN_Configuration, servedPartyIP_IPv4_Address),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDP_Address,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"servedPartyIP-IPv4-Address"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct APN_Configuration, apn),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_APN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"apn"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct APN_Configuration, eps_qos_Subscribed),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EPS_QoS_Subscribed,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eps-qos-Subscribed"
		},
	{ ATF_POINTER, 11, offsetof(struct APN_Configuration, pdn_gw_Identity),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDN_GW_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdn-gw-Identity"
		},
	{ ATF_POINTER, 10, offsetof(struct APN_Configuration, pdn_gw_AllocationType),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDN_GW_AllocationType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdn-gw-AllocationType"
		},
	{ ATF_POINTER, 9, offsetof(struct APN_Configuration, vplmnAddressAllowed),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"vplmnAddressAllowed"
		},
	{ ATF_POINTER, 8, offsetof(struct APN_Configuration, chargingCharacteristics),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChargingCharacteristics,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"chargingCharacteristics"
		},
	{ ATF_POINTER, 7, offsetof(struct APN_Configuration, ambr),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AMBR,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ambr"
		},
	{ ATF_POINTER, 6, offsetof(struct APN_Configuration, specificAPNInfoList),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpecificAPNInfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"specificAPNInfoList"
		},
	{ ATF_POINTER, 5, offsetof(struct APN_Configuration, extensionContainer),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
	{ ATF_POINTER, 4, offsetof(struct APN_Configuration, servedPartyIP_IPv6_Address),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDP_Address,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"servedPartyIP-IPv6-Address"
		},
	{ ATF_POINTER, 3, offsetof(struct APN_Configuration, apn_oi_Replacement),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_APN_OI_Replacement,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"apn-oi-Replacement"
		},
	{ ATF_POINTER, 2, offsetof(struct APN_Configuration, sipto_Permission),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SIPTO_Permission,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sipto-Permission"
		},
	{ ATF_POINTER, 1, offsetof(struct APN_Configuration, lipa_Permission),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LIPA_Permission,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lipa-Permission"
		},
};
static int asn_MAP_APN_Configuration_oms_1[] = { 2, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
static ber_tlv_tag_t asn_DEF_APN_Configuration_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_APN_Configuration_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* contextId at 1159 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdn-Type at 1160 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* servedPartyIP-IPv4-Address at 1161 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* apn at 1162 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* eps-qos-Subscribed at 1163 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* pdn-gw-Identity at 1164 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pdn-gw-AllocationType at 1165 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* vplmnAddressAllowed at 1166 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* chargingCharacteristics at 1167 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ambr at 1168 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* specificAPNInfoList at 1169 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* extensionContainer at 1169 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* servedPartyIP-IPv6-Address at 1170 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* apn-oi-Replacement at 1172 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* sipto-Permission at 1174 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 } /* lipa-Permission at 1175 */
};
static asn_SEQUENCE_specifics_t asn_SPC_APN_Configuration_specs_1 = {
	sizeof(struct APN_Configuration),
	offsetof(struct APN_Configuration, _asn_ctx),
	asn_MAP_APN_Configuration_tag2el_1,
	16,	/* Count of tags in the map */
	asn_MAP_APN_Configuration_oms_1,	/* Optional members */
	9, 3,	/* Root/Additions */
	12,	/* Start extensions */
	17	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_APN_Configuration = {
	"APN-Configuration",
	"APN-Configuration",
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
	asn_DEF_APN_Configuration_tags_1,
	sizeof(asn_DEF_APN_Configuration_tags_1)
		/sizeof(asn_DEF_APN_Configuration_tags_1[0]), /* 1 */
	asn_DEF_APN_Configuration_tags_1,	/* Same as above */
	sizeof(asn_DEF_APN_Configuration_tags_1)
		/sizeof(asn_DEF_APN_Configuration_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_APN_Configuration_1,
	16,	/* Elements count */
	&asn_SPC_APN_Configuration_specs_1	/* Additional specs */
};

