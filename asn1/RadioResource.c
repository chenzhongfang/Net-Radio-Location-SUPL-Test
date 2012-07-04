/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "RadioResource.h"

static asn_TYPE_member_t asn_MBR_RadioResource_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResource, radioResourceInformation),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_RadioResourceInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"radioResourceInformation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResource, rab_Id),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_RAB_Id,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rab-Id"
		},
};
static ber_tlv_tag_t asn_DEF_RadioResource_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RadioResource_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 0 }, /* rab-Id at 764 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 0, 0, 0 } /* radioResourceInformation at 763 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RadioResource_specs_1 = {
	sizeof(struct RadioResource),
	offsetof(struct RadioResource, _asn_ctx),
	asn_MAP_RadioResource_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RadioResource = {
	"RadioResource",
	"RadioResource",
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
	asn_DEF_RadioResource_tags_1,
	sizeof(asn_DEF_RadioResource_tags_1)
		/sizeof(asn_DEF_RadioResource_tags_1[0]), /* 1 */
	asn_DEF_RadioResource_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioResource_tags_1)
		/sizeof(asn_DEF_RadioResource_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RadioResource_1,
	2,	/* Elements count */
	&asn_SPC_RadioResource_specs_1	/* Additional specs */
};

