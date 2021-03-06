/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-SM-DataTypes"
 * 	found in "../asn1src/MAP-SM-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "InformServiceCentreArg.h"

static asn_TYPE_member_t asn_MBR_InformServiceCentreArg_1[] = {
	{ ATF_POINTER, 5, offsetof(struct InformServiceCentreArg, storedMSISDN),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_ISDN_AddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"storedMSISDN"
		},
	{ ATF_POINTER, 4, offsetof(struct InformServiceCentreArg, mw_Status),
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_MW_Status,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mw-Status"
		},
	{ ATF_POINTER, 3, offsetof(struct InformServiceCentreArg, extensionContainer),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
	{ ATF_POINTER, 2, offsetof(struct InformServiceCentreArg, absentSubscriberDiagnosticSM),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_AbsentSubscriberDiagnosticSM,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"absentSubscriberDiagnosticSM"
		},
	{ ATF_POINTER, 1, offsetof(struct InformServiceCentreArg, additionalAbsentSubscriberDiagnosticSM),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AbsentSubscriberDiagnosticSM,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"additionalAbsentSubscriberDiagnosticSM"
		},
};
static int asn_MAP_InformServiceCentreArg_oms_1[] = { 0, 1, 2, 3, 4 };
static ber_tlv_tag_t asn_DEF_InformServiceCentreArg_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_InformServiceCentreArg_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 3, 0, 0 }, /* absentSubscriberDiagnosticSM at 215 */
    { (ASN_TAG_CLASS_UNIVERSAL | (3 << 2)), 1, 0, 0 }, /* mw-Status at 212 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 0, 0, 0 }, /* storedMSISDN at 211 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, 0, 0 }, /* extensionContainer at 213 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 4, 0, 0 } /* additionalAbsentSubscriberDiagnosticSM at 216 */
};
static asn_SEQUENCE_specifics_t asn_SPC_InformServiceCentreArg_specs_1 = {
	sizeof(struct InformServiceCentreArg),
	offsetof(struct InformServiceCentreArg, _asn_ctx),
	asn_MAP_InformServiceCentreArg_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_InformServiceCentreArg_oms_1,	/* Optional members */
	3, 2,	/* Root/Additions */
	2,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_InformServiceCentreArg = {
	"InformServiceCentreArg",
	"InformServiceCentreArg",
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
	asn_DEF_InformServiceCentreArg_tags_1,
	sizeof(asn_DEF_InformServiceCentreArg_tags_1)
		/sizeof(asn_DEF_InformServiceCentreArg_tags_1[0]), /* 1 */
	asn_DEF_InformServiceCentreArg_tags_1,	/* Same as above */
	sizeof(asn_DEF_InformServiceCentreArg_tags_1)
		/sizeof(asn_DEF_InformServiceCentreArg_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_InformServiceCentreArg_1,
	5,	/* Elements count */
	&asn_SPC_InformServiceCentreArg_specs_1	/* Additional specs */
};

