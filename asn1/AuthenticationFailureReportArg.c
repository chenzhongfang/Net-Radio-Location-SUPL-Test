/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "AuthenticationFailureReportArg.h"

static asn_TYPE_member_t asn_MBR_AuthenticationFailureReportArg_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AuthenticationFailureReportArg, imsi),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_IMSI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"imsi"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AuthenticationFailureReportArg, failureCause),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_FailureCause,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"failureCause"
		},
	{ ATF_POINTER, 6, offsetof(struct AuthenticationFailureReportArg, extensionContainer),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
	{ ATF_POINTER, 5, offsetof(struct AuthenticationFailureReportArg, re_attempt),
		(ASN_TAG_CLASS_UNIVERSAL | (1 << 2)),
		0,
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"re-attempt"
		},
	{ ATF_POINTER, 4, offsetof(struct AuthenticationFailureReportArg, accessType),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_AccessType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"accessType"
		},
	{ ATF_POINTER, 3, offsetof(struct AuthenticationFailureReportArg, rand),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_RAND,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rand"
		},
	{ ATF_POINTER, 2, offsetof(struct AuthenticationFailureReportArg, vlr_Number),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ISDN_AddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"vlr-Number"
		},
	{ ATF_POINTER, 1, offsetof(struct AuthenticationFailureReportArg, sgsn_Number),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ISDN_AddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sgsn-Number"
		},
};
static int asn_MAP_AuthenticationFailureReportArg_oms_1[] = { 2, 3, 4, 5, 6, 7 };
static ber_tlv_tag_t asn_DEF_AuthenticationFailureReportArg_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_AuthenticationFailureReportArg_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (1 << 2)), 3, 0, 0 }, /* re-attempt at 470 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 0, 0, 1 }, /* imsi at 466 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 5, -1, 0 }, /* rand at 472 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 1, 0, 1 }, /* failureCause at 467 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 4, -1, 0 }, /* accessType at 471 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, 0, 0 }, /* extensionContainer at 468 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 6, 0, 0 }, /* vlr-Number at 473 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 7, 0, 0 } /* sgsn-Number at 474 */
};
static asn_SEQUENCE_specifics_t asn_SPC_AuthenticationFailureReportArg_specs_1 = {
	sizeof(struct AuthenticationFailureReportArg),
	offsetof(struct AuthenticationFailureReportArg, _asn_ctx),
	asn_MAP_AuthenticationFailureReportArg_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_AuthenticationFailureReportArg_oms_1,	/* Optional members */
	1, 5,	/* Root/Additions */
	2,	/* Start extensions */
	9	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_AuthenticationFailureReportArg = {
	"AuthenticationFailureReportArg",
	"AuthenticationFailureReportArg",
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
	asn_DEF_AuthenticationFailureReportArg_tags_1,
	sizeof(asn_DEF_AuthenticationFailureReportArg_tags_1)
		/sizeof(asn_DEF_AuthenticationFailureReportArg_tags_1[0]), /* 1 */
	asn_DEF_AuthenticationFailureReportArg_tags_1,	/* Same as above */
	sizeof(asn_DEF_AuthenticationFailureReportArg_tags_1)
		/sizeof(asn_DEF_AuthenticationFailureReportArg_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_AuthenticationFailureReportArg_1,
	8,	/* Elements count */
	&asn_SPC_AuthenticationFailureReportArg_specs_1	/* Additional specs */
};
