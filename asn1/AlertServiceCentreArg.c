/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-SM-DataTypes"
 * 	found in "../asn1src/MAP-SM-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "AlertServiceCentreArg.h"

static asn_TYPE_member_t asn_MBR_AlertServiceCentreArg_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AlertServiceCentreArg, msisdn),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_ISDN_AddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"msisdn"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AlertServiceCentreArg, serviceCentreAddress),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_AddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"serviceCentreAddress"
		},
};
static ber_tlv_tag_t asn_DEF_AlertServiceCentreArg_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_AlertServiceCentreArg_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 0, 0, 1 }, /* msisdn at 206 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 1, -1, 0 } /* serviceCentreAddress at 207 */
};
static asn_SEQUENCE_specifics_t asn_SPC_AlertServiceCentreArg_specs_1 = {
	sizeof(struct AlertServiceCentreArg),
	offsetof(struct AlertServiceCentreArg, _asn_ctx),
	asn_MAP_AlertServiceCentreArg_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_AlertServiceCentreArg = {
	"AlertServiceCentreArg",
	"AlertServiceCentreArg",
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
	asn_DEF_AlertServiceCentreArg_tags_1,
	sizeof(asn_DEF_AlertServiceCentreArg_tags_1)
		/sizeof(asn_DEF_AlertServiceCentreArg_tags_1[0]), /* 1 */
	asn_DEF_AlertServiceCentreArg_tags_1,	/* Same as above */
	sizeof(asn_DEF_AlertServiceCentreArg_tags_1)
		/sizeof(asn_DEF_AlertServiceCentreArg_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_AlertServiceCentreArg_1,
	2,	/* Elements count */
	&asn_SPC_AlertServiceCentreArg_specs_1	/* Additional specs */
};

