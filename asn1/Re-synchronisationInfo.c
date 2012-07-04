/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "Re-synchronisationInfo.h"

static asn_TYPE_member_t asn_MBR_Re_synchronisationInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Re_synchronisationInfo, rand),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_RAND,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rand"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Re_synchronisationInfo, auts),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_AUTS,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"auts"
		},
};
static ber_tlv_tag_t asn_DEF_Re_synchronisationInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Re_synchronisationInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 0, 0, 1 }, /* rand at 979 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 1, -1, 0 } /* auts at 980 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Re_synchronisationInfo_specs_1 = {
	sizeof(struct Re_synchronisationInfo),
	offsetof(struct Re_synchronisationInfo, _asn_ctx),
	asn_MAP_Re_synchronisationInfo_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Re_synchronisationInfo = {
	"Re-synchronisationInfo",
	"Re-synchronisationInfo",
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
	asn_DEF_Re_synchronisationInfo_tags_1,
	sizeof(asn_DEF_Re_synchronisationInfo_tags_1)
		/sizeof(asn_DEF_Re_synchronisationInfo_tags_1[0]), /* 1 */
	asn_DEF_Re_synchronisationInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_Re_synchronisationInfo_tags_1)
		/sizeof(asn_DEF_Re_synchronisationInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Re_synchronisationInfo_1,
	2,	/* Elements count */
	&asn_SPC_Re_synchronisationInfo_specs_1	/* Additional specs */
};
