/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "UESBI-IuB.h"

int
UESBI_IuB_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 1 && size <= 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using BIT_STRING,
 * so here we adjust the DEF accordingly.
 */
static void
UESBI_IuB_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_BIT_STRING.free_struct;
	td->print_struct   = asn_DEF_BIT_STRING.print_struct;
	td->ber_decoder    = asn_DEF_BIT_STRING.ber_decoder;
	td->der_encoder    = asn_DEF_BIT_STRING.der_encoder;
	td->xer_decoder    = asn_DEF_BIT_STRING.xer_decoder;
	td->xer_encoder    = asn_DEF_BIT_STRING.xer_encoder;
	td->uper_decoder   = asn_DEF_BIT_STRING.uper_decoder;
	td->uper_encoder   = asn_DEF_BIT_STRING.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_BIT_STRING.per_constraints;
	td->elements       = asn_DEF_BIT_STRING.elements;
	td->elements_count = asn_DEF_BIT_STRING.elements_count;
	td->specifics      = asn_DEF_BIT_STRING.specifics;
}

void
UESBI_IuB_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	UESBI_IuB_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
UESBI_IuB_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	UESBI_IuB_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
UESBI_IuB_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	UESBI_IuB_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
UESBI_IuB_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	UESBI_IuB_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
UESBI_IuB_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	UESBI_IuB_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
UESBI_IuB_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	UESBI_IuB_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
UESBI_IuB_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	UESBI_IuB_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
UESBI_IuB_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	UESBI_IuB_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_UESBI_IuB_constr_1 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 7,  7,  1,  128 }	/* (SIZE(1..128)) */,
	0, 0	/* No PER value map */
};
static ber_tlv_tag_t asn_DEF_UESBI_IuB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (3 << 2))
};
asn_TYPE_descriptor_t asn_DEF_UESBI_IuB = {
	"UESBI-IuB",
	"UESBI-IuB",
	UESBI_IuB_free,
	UESBI_IuB_print,
	UESBI_IuB_constraint,
	UESBI_IuB_decode_ber,
	UESBI_IuB_encode_der,
	UESBI_IuB_decode_xer,
	UESBI_IuB_encode_xer,
	UESBI_IuB_decode_uper,
	UESBI_IuB_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_UESBI_IuB_tags_1,
	sizeof(asn_DEF_UESBI_IuB_tags_1)
		/sizeof(asn_DEF_UESBI_IuB_tags_1[0]), /* 1 */
	asn_DEF_UESBI_IuB_tags_1,	/* Same as above */
	sizeof(asn_DEF_UESBI_IuB_tags_1)
		/sizeof(asn_DEF_UESBI_IuB_tags_1[0]), /* 1 */
	&asn_PER_type_UESBI_IuB_constr_1,
	0, 0,	/* No members */
	0	/* No specifics */
};

