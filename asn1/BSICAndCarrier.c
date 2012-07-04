/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "BSICAndCarrier.h"

static asn_TYPE_member_t asn_MBR_BSICAndCarrier_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BSICAndCarrier, carrier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BCCHCarrier,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BSICAndCarrier, bsic),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BSIC,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bsic"
		},
};
static ber_tlv_tag_t asn_DEF_BSICAndCarrier_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_BSICAndCarrier_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrier at 317 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* bsic at 319 */
};
static asn_SEQUENCE_specifics_t asn_SPC_BSICAndCarrier_specs_1 = {
	sizeof(struct BSICAndCarrier),
	offsetof(struct BSICAndCarrier, _asn_ctx),
	asn_MAP_BSICAndCarrier_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_BSICAndCarrier = {
	"BSICAndCarrier",
	"BSICAndCarrier",
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
	asn_DEF_BSICAndCarrier_tags_1,
	sizeof(asn_DEF_BSICAndCarrier_tags_1)
		/sizeof(asn_DEF_BSICAndCarrier_tags_1[0]), /* 1 */
	asn_DEF_BSICAndCarrier_tags_1,	/* Same as above */
	sizeof(asn_DEF_BSICAndCarrier_tags_1)
		/sizeof(asn_DEF_BSICAndCarrier_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_BSICAndCarrier_1,
	2,	/* Elements count */
	&asn_SPC_BSICAndCarrier_specs_1	/* Additional specs */
};

