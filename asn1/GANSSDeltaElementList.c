/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "GANSSDeltaElementList.h"

static int
memb_OCTET_STRING_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 49)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_Member_constr_2 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  49 }	/* (SIZE(1..49)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_GANSSDeltaElementList_constr_1 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_GANSSDeltaElementList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_OCTET_STRING,
		memb_OCTET_STRING_constraint_1,
		&asn_PER_memb_Member_constr_2,
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_GANSSDeltaElementList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_GANSSDeltaElementList_specs_1 = {
	sizeof(struct GANSSDeltaElementList),
	offsetof(struct GANSSDeltaElementList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_GANSSDeltaElementList = {
	"GANSSDeltaElementList",
	"GANSSDeltaElementList",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_GANSSDeltaElementList_tags_1,
	sizeof(asn_DEF_GANSSDeltaElementList_tags_1)
		/sizeof(asn_DEF_GANSSDeltaElementList_tags_1[0]), /* 1 */
	asn_DEF_GANSSDeltaElementList_tags_1,	/* Same as above */
	sizeof(asn_DEF_GANSSDeltaElementList_tags_1)
		/sizeof(asn_DEF_GANSSDeltaElementList_tags_1[0]), /* 1 */
	&asn_PER_type_GANSSDeltaElementList_constr_1,
	asn_MBR_GANSSDeltaElementList_1,
	1,	/* Single element */
	&asn_SPC_GANSSDeltaElementList_specs_1	/* Additional specs */
};

