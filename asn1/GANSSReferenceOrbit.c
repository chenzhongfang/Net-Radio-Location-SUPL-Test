/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "GANSSReferenceOrbit.h"

static asn_TYPE_member_t asn_MBR_GANSSReferenceOrbit_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSReferenceOrbit, svID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SVID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"svID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSReferenceOrbit, ganssOrbitModel),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReferenceNavModel,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganssOrbitModel"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSReferenceOrbit, ganssClockModel),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GANSSClockModel,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganssClockModel"
		},
};
static ber_tlv_tag_t asn_DEF_GANSSReferenceOrbit_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_GANSSReferenceOrbit_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* svID at 1728 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ganssOrbitModel at 1729 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ganssClockModel at 1730 */
};
static asn_SEQUENCE_specifics_t asn_SPC_GANSSReferenceOrbit_specs_1 = {
	sizeof(struct GANSSReferenceOrbit),
	offsetof(struct GANSSReferenceOrbit, _asn_ctx),
	asn_MAP_GANSSReferenceOrbit_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GANSSReferenceOrbit = {
	"GANSSReferenceOrbit",
	"GANSSReferenceOrbit",
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
	asn_DEF_GANSSReferenceOrbit_tags_1,
	sizeof(asn_DEF_GANSSReferenceOrbit_tags_1)
		/sizeof(asn_DEF_GANSSReferenceOrbit_tags_1[0]), /* 1 */
	asn_DEF_GANSSReferenceOrbit_tags_1,	/* Same as above */
	sizeof(asn_DEF_GANSSReferenceOrbit_tags_1)
		/sizeof(asn_DEF_GANSSReferenceOrbit_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_GANSSReferenceOrbit_1,
	3,	/* Elements count */
	&asn_SPC_GANSSReferenceOrbit_specs_1	/* Additional specs */
};
