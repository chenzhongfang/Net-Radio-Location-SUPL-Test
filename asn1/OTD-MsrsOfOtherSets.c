/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "OTD-MsrsOfOtherSets.h"

static asn_per_constraints_t asn_PER_type_OTD_MsrsOfOtherSets_constr_1 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_OTD_MsrsOfOtherSets_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OTD_MsrsOfOtherSets, choice.identityNotPresent),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OTD_Measurement,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"identityNotPresent"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OTD_MsrsOfOtherSets, choice.identityPresent),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OTD_MeasurementWithID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"identityPresent"
		},
};
static asn_TYPE_tag2member_t asn_MAP_OTD_MsrsOfOtherSets_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* identityNotPresent at 385 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* identityPresent at 387 */
};
static asn_CHOICE_specifics_t asn_SPC_OTD_MsrsOfOtherSets_specs_1 = {
	sizeof(struct OTD_MsrsOfOtherSets),
	offsetof(struct OTD_MsrsOfOtherSets, _asn_ctx),
	offsetof(struct OTD_MsrsOfOtherSets, present),
	sizeof(((struct OTD_MsrsOfOtherSets *)0)->present),
	asn_MAP_OTD_MsrsOfOtherSets_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_OTD_MsrsOfOtherSets = {
	"OTD-MsrsOfOtherSets",
	"OTD-MsrsOfOtherSets",
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
	&asn_PER_type_OTD_MsrsOfOtherSets_constr_1,
	asn_MBR_OTD_MsrsOfOtherSets_1,
	2,	/* Elements count */
	&asn_SPC_OTD_MsrsOfOtherSets_specs_1	/* Additional specs */
};

