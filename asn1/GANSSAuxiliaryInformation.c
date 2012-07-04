/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "GANSSAuxiliaryInformation.h"

static asn_per_constraints_t asn_PER_type_GANSSAuxiliaryInformation_constr_1 = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_GANSSAuxiliaryInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSAuxiliaryInformation, choice.ganssID1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GANSS_ID1,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganssID1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSAuxiliaryInformation, choice.ganssID3),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GANSS_ID3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganssID3"
		},
};
static asn_TYPE_tag2member_t asn_MAP_GANSSAuxiliaryInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ganssID1 at 1880 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ganssID3 at 1881 */
};
static asn_CHOICE_specifics_t asn_SPC_GANSSAuxiliaryInformation_specs_1 = {
	sizeof(struct GANSSAuxiliaryInformation),
	offsetof(struct GANSSAuxiliaryInformation, _asn_ctx),
	offsetof(struct GANSSAuxiliaryInformation, present),
	sizeof(((struct GANSSAuxiliaryInformation *)0)->present),
	asn_MAP_GANSSAuxiliaryInformation_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_GANSSAuxiliaryInformation = {
	"GANSSAuxiliaryInformation",
	"GANSSAuxiliaryInformation",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_GANSSAuxiliaryInformation_constr_1,
	asn_MBR_GANSSAuxiliaryInformation_1,
	2,	/* Elements count */
	&asn_SPC_GANSSAuxiliaryInformation_specs_1	/* Additional specs */
};

