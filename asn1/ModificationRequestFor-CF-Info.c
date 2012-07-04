/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "ModificationRequestFor-CF-Info.h"

static asn_TYPE_member_t asn_MBR_ModificationRequestFor_CF_Info_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ModificationRequestFor_CF_Info, ss_Code),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SS_Code,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ss-Code"
		},
	{ ATF_POINTER, 7, offsetof(struct ModificationRequestFor_CF_Info, basicService),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Ext_BasicServiceCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"basicService"
		},
	{ ATF_POINTER, 6, offsetof(struct ModificationRequestFor_CF_Info, ss_Status),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ext_SS_Status,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ss-Status"
		},
	{ ATF_POINTER, 5, offsetof(struct ModificationRequestFor_CF_Info, forwardedToNumber),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"forwardedToNumber"
		},
	{ ATF_POINTER, 4, offsetof(struct ModificationRequestFor_CF_Info, forwardedToSubaddress),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ISDN_SubaddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"forwardedToSubaddress"
		},
	{ ATF_POINTER, 3, offsetof(struct ModificationRequestFor_CF_Info, noReplyConditionTime),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ext_NoRepCondTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"noReplyConditionTime"
		},
	{ ATF_POINTER, 2, offsetof(struct ModificationRequestFor_CF_Info, modifyNotificationToCSE),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ModificationInstruction,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modifyNotificationToCSE"
		},
	{ ATF_POINTER, 1, offsetof(struct ModificationRequestFor_CF_Info, extensionContainer),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
};
static int asn_MAP_ModificationRequestFor_CF_Info_oms_1[] = { 1, 2, 3, 4, 5, 6, 7 };
static ber_tlv_tag_t asn_DEF_ModificationRequestFor_CF_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ModificationRequestFor_CF_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ss-Code at 3054 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* basicService at 3055 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ss-Status at 3056 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* forwardedToNumber at 3057 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* forwardedToSubaddress at 3058 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* noReplyConditionTime at 3059 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* modifyNotificationToCSE at 3060 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* extensionContainer at 3061 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ModificationRequestFor_CF_Info_specs_1 = {
	sizeof(struct ModificationRequestFor_CF_Info),
	offsetof(struct ModificationRequestFor_CF_Info, _asn_ctx),
	asn_MAP_ModificationRequestFor_CF_Info_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_ModificationRequestFor_CF_Info_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	7,	/* Start extensions */
	9	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ModificationRequestFor_CF_Info = {
	"ModificationRequestFor-CF-Info",
	"ModificationRequestFor-CF-Info",
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
	asn_DEF_ModificationRequestFor_CF_Info_tags_1,
	sizeof(asn_DEF_ModificationRequestFor_CF_Info_tags_1)
		/sizeof(asn_DEF_ModificationRequestFor_CF_Info_tags_1[0]), /* 1 */
	asn_DEF_ModificationRequestFor_CF_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_ModificationRequestFor_CF_Info_tags_1)
		/sizeof(asn_DEF_ModificationRequestFor_CF_Info_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ModificationRequestFor_CF_Info_1,
	8,	/* Elements count */
	&asn_SPC_ModificationRequestFor_CF_Info_specs_1	/* Additional specs */
};
