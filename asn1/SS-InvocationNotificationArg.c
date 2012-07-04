/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-SS-DataTypes"
 * 	found in "../asn1src/MAP-SS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "SS-InvocationNotificationArg.h"

static asn_TYPE_member_t asn_MBR_SS_InvocationNotificationArg_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SS_InvocationNotificationArg, imsi),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IMSI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"imsi"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SS_InvocationNotificationArg, msisdn),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ISDN_AddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"msisdn"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SS_InvocationNotificationArg, ss_Event),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SS_Code,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ss-Event"
		},
	{ ATF_POINTER, 4, offsetof(struct SS_InvocationNotificationArg, ss_EventSpecification),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SS_EventSpecification,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ss-EventSpecification"
		},
	{ ATF_POINTER, 3, offsetof(struct SS_InvocationNotificationArg, extensionContainer),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
	{ ATF_POINTER, 2, offsetof(struct SS_InvocationNotificationArg, b_subscriberNumber),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ISDN_AddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"b-subscriberNumber"
		},
	{ ATF_POINTER, 1, offsetof(struct SS_InvocationNotificationArg, ccbs_RequestState),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CCBS_RequestState,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ccbs-RequestState"
		},
};
static int asn_MAP_SS_InvocationNotificationArg_oms_1[] = { 3, 4, 5, 6 };
static ber_tlv_tag_t asn_DEF_SS_InvocationNotificationArg_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SS_InvocationNotificationArg_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* imsi at 263 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* msisdn at 264 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ss-Event at 265 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ss-EventSpecification at 271 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* extensionContainer at 272 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* b-subscriberNumber at 274 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ccbs-RequestState at 275 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SS_InvocationNotificationArg_specs_1 = {
	sizeof(struct SS_InvocationNotificationArg),
	offsetof(struct SS_InvocationNotificationArg, _asn_ctx),
	asn_MAP_SS_InvocationNotificationArg_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_SS_InvocationNotificationArg_oms_1,	/* Optional members */
	2, 2,	/* Root/Additions */
	4,	/* Start extensions */
	8	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SS_InvocationNotificationArg = {
	"SS-InvocationNotificationArg",
	"SS-InvocationNotificationArg",
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
	asn_DEF_SS_InvocationNotificationArg_tags_1,
	sizeof(asn_DEF_SS_InvocationNotificationArg_tags_1)
		/sizeof(asn_DEF_SS_InvocationNotificationArg_tags_1[0]), /* 1 */
	asn_DEF_SS_InvocationNotificationArg_tags_1,	/* Same as above */
	sizeof(asn_DEF_SS_InvocationNotificationArg_tags_1)
		/sizeof(asn_DEF_SS_InvocationNotificationArg_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SS_InvocationNotificationArg_1,
	7,	/* Elements count */
	&asn_SPC_SS_InvocationNotificationArg_specs_1	/* Additional specs */
};

