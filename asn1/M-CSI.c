/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "M-CSI.h"

static asn_TYPE_member_t asn_MBR_M_CSI_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct M_CSI, mobilityTriggers),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_MobilityTriggers,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mobilityTriggers"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M_CSI, serviceKey),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_ServiceKey,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"serviceKey"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M_CSI, gsmSCF_Address),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ISDN_AddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gsmSCF-Address"
		},
	{ ATF_POINTER, 3, offsetof(struct M_CSI, extensionContainer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
	{ ATF_POINTER, 2, offsetof(struct M_CSI, notificationToCSE),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"notificationToCSE"
		},
	{ ATF_POINTER, 1, offsetof(struct M_CSI, csi_Active),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csi-Active"
		},
};
static int asn_MAP_M_CSI_oms_1[] = { 3, 4, 5 };
static ber_tlv_tag_t asn_DEF_M_CSI_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_M_CSI_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 0 }, /* serviceKey at 2264 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 }, /* mobilityTriggers at 2263 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 2, 0, 0 }, /* gsmSCF-Address at 2265 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 3, 0, 0 }, /* extensionContainer at 2266 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 4, 0, 0 }, /* notificationToCSE at 2267 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 5, 0, 0 } /* csi-Active at 2268 */
};
static asn_SEQUENCE_specifics_t asn_SPC_M_CSI_specs_1 = {
	sizeof(struct M_CSI),
	offsetof(struct M_CSI, _asn_ctx),
	asn_MAP_M_CSI_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_M_CSI_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	5,	/* Start extensions */
	7	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_M_CSI = {
	"M-CSI",
	"M-CSI",
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
	asn_DEF_M_CSI_tags_1,
	sizeof(asn_DEF_M_CSI_tags_1)
		/sizeof(asn_DEF_M_CSI_tags_1[0]), /* 1 */
	asn_DEF_M_CSI_tags_1,	/* Same as above */
	sizeof(asn_DEF_M_CSI_tags_1)
		/sizeof(asn_DEF_M_CSI_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_M_CSI_1,
	6,	/* Elements count */
	&asn_SPC_M_CSI_specs_1	/* Additional specs */
};

