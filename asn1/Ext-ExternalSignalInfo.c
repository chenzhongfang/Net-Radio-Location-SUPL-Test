/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-CommonDataTypes"
 * 	found in "../asn1src/MAP-CommonDataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "Ext-ExternalSignalInfo.h"

static asn_TYPE_member_t asn_MBR_Ext_ExternalSignalInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ext_ExternalSignalInfo, ext_ProtocolId),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_Ext_ProtocolId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext-ProtocolId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ext_ExternalSignalInfo, signalInfo),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_SignalInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"signalInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct Ext_ExternalSignalInfo, extensionContainer),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
};
static int asn_MAP_Ext_ExternalSignalInfo_oms_1[] = { 2 };
static ber_tlv_tag_t asn_DEF_Ext_ExternalSignalInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Ext_ExternalSignalInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 1, 0, 0 }, /* signalInfo at 234 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 0, 0, 0 }, /* ext-ProtocolId at 233 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, 0, 0 } /* extensionContainer at 237 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Ext_ExternalSignalInfo_specs_1 = {
	sizeof(struct Ext_ExternalSignalInfo),
	offsetof(struct Ext_ExternalSignalInfo, _asn_ctx),
	asn_MAP_Ext_ExternalSignalInfo_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_Ext_ExternalSignalInfo_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Ext_ExternalSignalInfo = {
	"Ext-ExternalSignalInfo",
	"Ext-ExternalSignalInfo",
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
	asn_DEF_Ext_ExternalSignalInfo_tags_1,
	sizeof(asn_DEF_Ext_ExternalSignalInfo_tags_1)
		/sizeof(asn_DEF_Ext_ExternalSignalInfo_tags_1[0]), /* 1 */
	asn_DEF_Ext_ExternalSignalInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ext_ExternalSignalInfo_tags_1)
		/sizeof(asn_DEF_Ext_ExternalSignalInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Ext_ExternalSignalInfo_1,
	3,	/* Elements count */
	&asn_SPC_Ext_ExternalSignalInfo_specs_1	/* Additional specs */
};

