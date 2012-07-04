/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-OM-DataTypes"
 * 	found in "../asn1src/MAP-OM-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "MDT-Configuration.h"

static asn_TYPE_member_t asn_MBR_MDT_Configuration_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MDT_Configuration, jobType),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_JobType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"jobType"
		},
	{ ATF_POINTER, 10, offsetof(struct MDT_Configuration, areaScope),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AreaScope,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"areaScope"
		},
	{ ATF_POINTER, 9, offsetof(struct MDT_Configuration, listOfMeasurements),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_ListOfMeasurements,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"listOfMeasurements"
		},
	{ ATF_POINTER, 8, offsetof(struct MDT_Configuration, reportingTrigger),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportingTrigger,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportingTrigger"
		},
	{ ATF_POINTER, 7, offsetof(struct MDT_Configuration, reportInterval),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_ReportInterval,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportInterval"
		},
	{ ATF_POINTER, 6, offsetof(struct MDT_Configuration, reportAmount),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportAmount,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportAmount"
		},
	{ ATF_POINTER, 5, offsetof(struct MDT_Configuration, eventThresholdRSRP),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_EventThresholdRSRP,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eventThresholdRSRP"
		},
	{ ATF_POINTER, 4, offsetof(struct MDT_Configuration, eventThresholdRSRQ),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EventThresholdRSRQ,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eventThresholdRSRQ"
		},
	{ ATF_POINTER, 3, offsetof(struct MDT_Configuration, loggingInterval),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoggingInterval,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"loggingInterval"
		},
	{ ATF_POINTER, 2, offsetof(struct MDT_Configuration, loggingDuration),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoggingDuration,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"loggingDuration"
		},
	{ ATF_POINTER, 1, offsetof(struct MDT_Configuration, extensionContainer),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
};
static int asn_MAP_MDT_Configuration_oms_1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
static ber_tlv_tag_t asn_DEF_MDT_Configuration_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MDT_Configuration_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 6, 0, 0 }, /* eventThresholdRSRP at 60 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 2, 0, 0 }, /* listOfMeasurements at 56 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 0, 0, 1 }, /* jobType at 54 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 4, -1, 0 }, /* reportInterval at 58 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 }, /* areaScope at 55 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 3, 0, 0 }, /* reportingTrigger at 57 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 5, 0, 0 }, /* reportAmount at 59 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 7, 0, 0 }, /* eventThresholdRSRQ at 61 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 8, 0, 0 }, /* loggingInterval at 62 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 9, 0, 0 }, /* loggingDuration at 63 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 10, 0, 0 } /* extensionContainer at 64 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MDT_Configuration_specs_1 = {
	sizeof(struct MDT_Configuration),
	offsetof(struct MDT_Configuration, _asn_ctx),
	asn_MAP_MDT_Configuration_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_MDT_Configuration_oms_1,	/* Optional members */
	10, 0,	/* Root/Additions */
	10,	/* Start extensions */
	12	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MDT_Configuration = {
	"MDT-Configuration",
	"MDT-Configuration",
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
	asn_DEF_MDT_Configuration_tags_1,
	sizeof(asn_DEF_MDT_Configuration_tags_1)
		/sizeof(asn_DEF_MDT_Configuration_tags_1[0]), /* 1 */
	asn_DEF_MDT_Configuration_tags_1,	/* Same as above */
	sizeof(asn_DEF_MDT_Configuration_tags_1)
		/sizeof(asn_DEF_MDT_Configuration_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MDT_Configuration_1,
	11,	/* Elements count */
	&asn_SPC_MDT_Configuration_specs_1	/* Additional specs */
};
