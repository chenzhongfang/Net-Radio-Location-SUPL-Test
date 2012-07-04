/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "SendIdentificationArg.h"

static asn_TYPE_member_t asn_MBR_SendIdentificationArg_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SendIdentificationArg, tmsi),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_TMSI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tmsi"
		},
	{ ATF_POINTER, 9, offsetof(struct SendIdentificationArg, numberOfRequestedVectors),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NumberOfRequestedVectors,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"numberOfRequestedVectors"
		},
	{ ATF_POINTER, 8, offsetof(struct SendIdentificationArg, segmentationProhibited),
		(ASN_TAG_CLASS_UNIVERSAL | (5 << 2)),
		0,
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"segmentationProhibited"
		},
	{ ATF_POINTER, 7, offsetof(struct SendIdentificationArg, extensionContainer),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
	{ ATF_POINTER, 6, offsetof(struct SendIdentificationArg, msc_Number),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_ISDN_AddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"msc-Number"
		},
	{ ATF_POINTER, 5, offsetof(struct SendIdentificationArg, previous_LAI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LAIFixedLength,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"previous-LAI"
		},
	{ ATF_POINTER, 4, offsetof(struct SendIdentificationArg, hopCounter),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HopCounter,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hopCounter"
		},
	{ ATF_POINTER, 3, offsetof(struct SendIdentificationArg, mtRoamingForwardingSupported),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mtRoamingForwardingSupported"
		},
	{ ATF_POINTER, 2, offsetof(struct SendIdentificationArg, newVLR_Number),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ISDN_AddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"newVLR-Number"
		},
	{ ATF_POINTER, 1, offsetof(struct SendIdentificationArg, new_lmsi),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LMSI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-lmsi"
		},
};
static int asn_MAP_SendIdentificationArg_oms_1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
static ber_tlv_tag_t asn_DEF_SendIdentificationArg_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SendIdentificationArg_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 0 }, /* numberOfRequestedVectors at 376 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 0, 0, 1 }, /* tmsi at 375 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 4, -1, 0 }, /* msc-Number at 383 */
    { (ASN_TAG_CLASS_UNIVERSAL | (5 << 2)), 2, 0, 0 }, /* segmentationProhibited at 380 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, 0, 0 }, /* extensionContainer at 381 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 5, 0, 0 }, /* previous-LAI at 384 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 6, 0, 0 }, /* hopCounter at 385 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 7, 0, 0 }, /* mtRoamingForwardingSupported at 386 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 8, 0, 0 }, /* newVLR-Number at 387 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 9, 0, 0 } /* new-lmsi at 388 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SendIdentificationArg_specs_1 = {
	sizeof(struct SendIdentificationArg),
	offsetof(struct SendIdentificationArg, _asn_ctx),
	asn_MAP_SendIdentificationArg_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_SendIdentificationArg_oms_1,	/* Optional members */
	3, 6,	/* Root/Additions */
	3,	/* Start extensions */
	11	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SendIdentificationArg = {
	"SendIdentificationArg",
	"SendIdentificationArg",
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
	asn_DEF_SendIdentificationArg_tags_1,
	sizeof(asn_DEF_SendIdentificationArg_tags_1)
		/sizeof(asn_DEF_SendIdentificationArg_tags_1[0]), /* 1 */
	asn_DEF_SendIdentificationArg_tags_1,	/* Same as above */
	sizeof(asn_DEF_SendIdentificationArg_tags_1)
		/sizeof(asn_DEF_SendIdentificationArg_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SendIdentificationArg_1,
	10,	/* Elements count */
	&asn_SPC_SendIdentificationArg_specs_1	/* Additional specs */
};

