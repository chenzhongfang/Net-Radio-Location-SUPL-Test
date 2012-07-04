/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "CallBarringData.h"

static asn_TYPE_member_t asn_MBR_CallBarringData_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CallBarringData, callBarringFeatureList),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Ext_CallBarFeatureList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"callBarringFeatureList"
		},
	{ ATF_POINTER, 4, offsetof(struct CallBarringData, password),
		(ASN_TAG_CLASS_UNIVERSAL | (18 << 2)),
		0,
		&asn_DEF_Password,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"password"
		},
	{ ATF_POINTER, 3, offsetof(struct CallBarringData, wrongPasswordAttemptsCounter),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_WrongPasswordAttemptsCounter,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"wrongPasswordAttemptsCounter"
		},
	{ ATF_POINTER, 2, offsetof(struct CallBarringData, notificationToCSE),
		(ASN_TAG_CLASS_UNIVERSAL | (5 << 2)),
		0,
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"notificationToCSE"
		},
	{ ATF_POINTER, 1, offsetof(struct CallBarringData, extensionContainer),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
};
static int asn_MAP_CallBarringData_oms_1[] = { 1, 2, 3, 4 };
static ber_tlv_tag_t asn_DEF_CallBarringData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CallBarringData_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 2, 0, 0 }, /* wrongPasswordAttemptsCounter at 2933 */
    { (ASN_TAG_CLASS_UNIVERSAL | (5 << 2)), 3, 0, 0 }, /* notificationToCSE at 2934 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 1 }, /* callBarringFeatureList at 2931 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, -1, 0 }, /* extensionContainer at 2935 */
    { (ASN_TAG_CLASS_UNIVERSAL | (18 << 2)), 1, 0, 0 } /* password at 2932 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CallBarringData_specs_1 = {
	sizeof(struct CallBarringData),
	offsetof(struct CallBarringData, _asn_ctx),
	asn_MAP_CallBarringData_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_CallBarringData_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CallBarringData = {
	"CallBarringData",
	"CallBarringData",
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
	asn_DEF_CallBarringData_tags_1,
	sizeof(asn_DEF_CallBarringData_tags_1)
		/sizeof(asn_DEF_CallBarringData_tags_1[0]), /* 1 */
	asn_DEF_CallBarringData_tags_1,	/* Same as above */
	sizeof(asn_DEF_CallBarringData_tags_1)
		/sizeof(asn_DEF_CallBarringData_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CallBarringData_1,
	5,	/* Elements count */
	&asn_SPC_CallBarringData_specs_1	/* Additional specs */
};

