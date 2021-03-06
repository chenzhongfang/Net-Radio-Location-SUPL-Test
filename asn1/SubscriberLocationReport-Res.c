/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-LCS-DataTypes"
 * 	found in "../asn1src/MAP-LCS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "SubscriberLocationReport-Res.h"

static asn_TYPE_member_t asn_MBR_SubscriberLocationReport_Res_1[] = {
	{ ATF_POINTER, 7, offsetof(struct SubscriberLocationReport_Res, extensionContainer),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
	{ ATF_POINTER, 6, offsetof(struct SubscriberLocationReport_Res, na_ESRK),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ISDN_AddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"na-ESRK"
		},
	{ ATF_POINTER, 5, offsetof(struct SubscriberLocationReport_Res, na_ESRD),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ISDN_AddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"na-ESRD"
		},
	{ ATF_POINTER, 4, offsetof(struct SubscriberLocationReport_Res, h_gmlc_Address),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GSN_Address,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"h-gmlc-Address"
		},
	{ ATF_POINTER, 3, offsetof(struct SubscriberLocationReport_Res, mo_lrShortCircuitIndicator),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mo-lrShortCircuitIndicator"
		},
	{ ATF_POINTER, 2, offsetof(struct SubscriberLocationReport_Res, reportingPLMNList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportingPLMNList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportingPLMNList"
		},
	{ ATF_POINTER, 1, offsetof(struct SubscriberLocationReport_Res, lcs_ReferenceNumber),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LCS_ReferenceNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lcs-ReferenceNumber"
		},
};
static int asn_MAP_SubscriberLocationReport_Res_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static ber_tlv_tag_t asn_DEF_SubscriberLocationReport_Res_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SubscriberLocationReport_Res_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 }, /* extensionContainer at 655 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 }, /* na-ESRK at 657 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 2, 0, 0 }, /* na-ESRD at 658 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 3, 0, 0 }, /* h-gmlc-Address at 659 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 4, 0, 0 }, /* mo-lrShortCircuitIndicator at 660 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 5, 0, 0 }, /* reportingPLMNList at 661 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 6, 0, 0 } /* lcs-ReferenceNumber at 662 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SubscriberLocationReport_Res_specs_1 = {
	sizeof(struct SubscriberLocationReport_Res),
	offsetof(struct SubscriberLocationReport_Res, _asn_ctx),
	asn_MAP_SubscriberLocationReport_Res_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_SubscriberLocationReport_Res_oms_1,	/* Optional members */
	1, 6,	/* Root/Additions */
	0,	/* Start extensions */
	8	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SubscriberLocationReport_Res = {
	"SubscriberLocationReport-Res",
	"SubscriberLocationReport-Res",
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
	asn_DEF_SubscriberLocationReport_Res_tags_1,
	sizeof(asn_DEF_SubscriberLocationReport_Res_tags_1)
		/sizeof(asn_DEF_SubscriberLocationReport_Res_tags_1[0]), /* 1 */
	asn_DEF_SubscriberLocationReport_Res_tags_1,	/* Same as above */
	sizeof(asn_DEF_SubscriberLocationReport_Res_tags_1)
		/sizeof(asn_DEF_SubscriberLocationReport_Res_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SubscriberLocationReport_Res_1,
	7,	/* Elements count */
	&asn_SPC_SubscriberLocationReport_Res_specs_1	/* Additional specs */
};

