/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "Almanac-ReducedKeplerianSet.h"

static int
memb_redAlmDeltaA_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -128 && value <= 127)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_redAlmOmega0_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -64 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_redAlmPhi0_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -64 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_redAlmDeltaA_constr_3 = {
	{ APC_CONSTRAINED,	 8,  8, -128,  127 }	/* (-128..127) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_redAlmOmega0_constr_4 = {
	{ APC_CONSTRAINED,	 7,  7, -64,  63 }	/* (-64..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_redAlmPhi0_constr_5 = {
	{ APC_CONSTRAINED,	 7,  7, -64,  63 }	/* (-64..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Almanac_ReducedKeplerianSet_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Almanac_ReducedKeplerianSet, svID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SVID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"svID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Almanac_ReducedKeplerianSet, redAlmDeltaA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_redAlmDeltaA_constraint_1,
		&asn_PER_memb_redAlmDeltaA_constr_3,
		0,
		"redAlmDeltaA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Almanac_ReducedKeplerianSet, redAlmOmega0),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_redAlmOmega0_constraint_1,
		&asn_PER_memb_redAlmOmega0_constr_4,
		0,
		"redAlmOmega0"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Almanac_ReducedKeplerianSet, redAlmPhi0),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_redAlmPhi0_constraint_1,
		&asn_PER_memb_redAlmPhi0_constr_5,
		0,
		"redAlmPhi0"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Almanac_ReducedKeplerianSet, redAlmL1Health),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"redAlmL1Health"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Almanac_ReducedKeplerianSet, redAlmL2Health),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"redAlmL2Health"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Almanac_ReducedKeplerianSet, redAlmL5Health),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"redAlmL5Health"
		},
};
static ber_tlv_tag_t asn_DEF_Almanac_ReducedKeplerianSet_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Almanac_ReducedKeplerianSet_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* svID at 1603 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* redAlmDeltaA at 1604 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* redAlmOmega0 at 1605 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* redAlmPhi0 at 1606 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* redAlmL1Health at 1607 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* redAlmL2Health at 1608 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* redAlmL5Health at 1609 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Almanac_ReducedKeplerianSet_specs_1 = {
	sizeof(struct Almanac_ReducedKeplerianSet),
	offsetof(struct Almanac_ReducedKeplerianSet, _asn_ctx),
	asn_MAP_Almanac_ReducedKeplerianSet_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Almanac_ReducedKeplerianSet = {
	"Almanac-ReducedKeplerianSet",
	"Almanac-ReducedKeplerianSet",
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
	asn_DEF_Almanac_ReducedKeplerianSet_tags_1,
	sizeof(asn_DEF_Almanac_ReducedKeplerianSet_tags_1)
		/sizeof(asn_DEF_Almanac_ReducedKeplerianSet_tags_1[0]), /* 1 */
	asn_DEF_Almanac_ReducedKeplerianSet_tags_1,	/* Same as above */
	sizeof(asn_DEF_Almanac_ReducedKeplerianSet_tags_1)
		/sizeof(asn_DEF_Almanac_ReducedKeplerianSet_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Almanac_ReducedKeplerianSet_1,
	7,	/* Elements count */
	&asn_SPC_Almanac_ReducedKeplerianSet_specs_1	/* Additional specs */
};

