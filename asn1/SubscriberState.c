/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "SubscriberState.h"

static asn_per_constraints_t asn_PER_type_SubscriberState_constr_1 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_SubscriberState_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SubscriberState, choice.assumedIdle),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"assumedIdle"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SubscriberState, choice.camelBusy),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"camelBusy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SubscriberState, choice.netDetNotReachable),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_NotReachableReason,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"netDetNotReachable"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SubscriberState, choice.notProvidedFromVLR),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"notProvidedFromVLR"
		},
};
static int asn_MAP_SubscriberState_cmap_1[] = { 2, 0, 1, 3 };
static asn_TYPE_tag2member_t asn_MAP_SubscriberState_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 2, 0, 0 }, /* netDetNotReachable at 2706 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* assumedIdle at 2704 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* camelBusy at 2705 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 3, 0, 0 } /* notProvidedFromVLR at 2707 */
};
static asn_CHOICE_specifics_t asn_SPC_SubscriberState_specs_1 = {
	sizeof(struct SubscriberState),
	offsetof(struct SubscriberState, _asn_ctx),
	offsetof(struct SubscriberState, present),
	sizeof(((struct SubscriberState *)0)->present),
	asn_MAP_SubscriberState_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SubscriberState_cmap_1,	/* Canonically sorted */
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SubscriberState = {
	"SubscriberState",
	"SubscriberState",
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
	&asn_PER_type_SubscriberState_constr_1,
	asn_MBR_SubscriberState_1,
	4,	/* Elements count */
	&asn_SPC_SubscriberState_specs_1	/* Additional specs */
};

