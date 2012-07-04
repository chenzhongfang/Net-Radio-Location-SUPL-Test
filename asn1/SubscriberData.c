/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "SubscriberData.h"

static asn_TYPE_member_t asn_MBR_SubscriberData_1[] = {
	{ ATF_POINTER, 12, offsetof(struct SubscriberData, msisdn),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ISDN_AddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"msisdn"
		},
	{ ATF_POINTER, 11, offsetof(struct SubscriberData, category),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Category,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"category"
		},
	{ ATF_POINTER, 10, offsetof(struct SubscriberData, subscriberStatus),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubscriberStatus,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"subscriberStatus"
		},
	{ ATF_POINTER, 9, offsetof(struct SubscriberData, bearerServiceList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BearerServiceList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bearerServiceList"
		},
	{ ATF_POINTER, 8, offsetof(struct SubscriberData, teleserviceList),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TeleserviceList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"teleserviceList"
		},
	{ ATF_POINTER, 7, offsetof(struct SubscriberData, provisionedSS),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ext_SS_InfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"provisionedSS"
		},
	{ ATF_POINTER, 6, offsetof(struct SubscriberData, odb_Data),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ODB_Data,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"odb-Data"
		},
	{ ATF_POINTER, 5, offsetof(struct SubscriberData, roamingRestrictionDueToUnsupportedFeature),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"roamingRestrictionDueToUnsupportedFeature"
		},
	{ ATF_POINTER, 4, offsetof(struct SubscriberData, regionalSubscriptionData),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ZoneCodeList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"regionalSubscriptionData"
		},
	{ ATF_POINTER, 3, offsetof(struct SubscriberData, vbsSubscriptionData),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VBSDataList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"vbsSubscriptionData"
		},
	{ ATF_POINTER, 2, offsetof(struct SubscriberData, vgcsSubscriptionData),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VGCSDataList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"vgcsSubscriptionData"
		},
	{ ATF_POINTER, 1, offsetof(struct SubscriberData, vlrCamelSubscriptionInfo),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VlrCamelSubscriptionInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"vlrCamelSubscriptionInfo"
		},
};
static int asn_MAP_SubscriberData_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
static ber_tlv_tag_t asn_DEF_SubscriberData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SubscriberData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* msisdn at 1492 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* category at 1493 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, 0, 0 }, /* subscriberStatus at 1494 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 3, 0, 0 }, /* bearerServiceList at 1495 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 4, 0, 0 }, /* teleserviceList at 1498 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 5, 0, 0 }, /* provisionedSS at 1501 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 6, 0, 0 }, /* odb-Data at 1502 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 7, 0, 0 }, /* roamingRestrictionDueToUnsupportedFeature at 1503 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 8, 0, 0 }, /* regionalSubscriptionData at 1504 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 9, 0, 0 }, /* vbsSubscriptionData at 1505 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 10, 0, 0 }, /* vgcsSubscriptionData at 1506 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 11, 0, 0 } /* vlrCamelSubscriptionInfo at 1507 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SubscriberData_specs_1 = {
	sizeof(struct SubscriberData),
	offsetof(struct SubscriberData, _asn_ctx),
	asn_MAP_SubscriberData_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_SubscriberData_oms_1,	/* Optional members */
	12, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SubscriberData = {
	"SubscriberData",
	"SubscriberData",
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
	asn_DEF_SubscriberData_tags_1,
	sizeof(asn_DEF_SubscriberData_tags_1)
		/sizeof(asn_DEF_SubscriberData_tags_1[0]), /* 1 */
	asn_DEF_SubscriberData_tags_1,	/* Same as above */
	sizeof(asn_DEF_SubscriberData_tags_1)
		/sizeof(asn_DEF_SubscriberData_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SubscriberData_1,
	12,	/* Elements count */
	&asn_SPC_SubscriberData_specs_1	/* Additional specs */
};

