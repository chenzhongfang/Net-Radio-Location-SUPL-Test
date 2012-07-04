/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "Ext3-QoS-Subscribed.h"

int
Ext3_QoS_Subscribed_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 2)) {
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
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static void
Ext3_QoS_Subscribed_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_OCTET_STRING.free_struct;
	td->print_struct   = asn_DEF_OCTET_STRING.print_struct;
	td->ber_decoder    = asn_DEF_OCTET_STRING.ber_decoder;
	td->der_encoder    = asn_DEF_OCTET_STRING.der_encoder;
	td->xer_decoder    = asn_DEF_OCTET_STRING.xer_decoder;
	td->xer_encoder    = asn_DEF_OCTET_STRING.xer_encoder;
	td->uper_decoder   = asn_DEF_OCTET_STRING.uper_decoder;
	td->uper_encoder   = asn_DEF_OCTET_STRING.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_OCTET_STRING.per_constraints;
	td->elements       = asn_DEF_OCTET_STRING.elements;
	td->elements_count = asn_DEF_OCTET_STRING.elements_count;
	td->specifics      = asn_DEF_OCTET_STRING.specifics;
}

void
Ext3_QoS_Subscribed_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	Ext3_QoS_Subscribed_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
Ext3_QoS_Subscribed_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	Ext3_QoS_Subscribed_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
Ext3_QoS_Subscribed_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	Ext3_QoS_Subscribed_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
Ext3_QoS_Subscribed_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	Ext3_QoS_Subscribed_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
Ext3_QoS_Subscribed_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	Ext3_QoS_Subscribed_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
Ext3_QoS_Subscribed_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	Ext3_QoS_Subscribed_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
Ext3_QoS_Subscribed_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	Ext3_QoS_Subscribed_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
Ext3_QoS_Subscribed_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	Ext3_QoS_Subscribed_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_Ext3_QoS_Subscribed_constr_1 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static ber_tlv_tag_t asn_DEF_Ext3_QoS_Subscribed_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Ext3_QoS_Subscribed = {
	"Ext3-QoS-Subscribed",
	"Ext3-QoS-Subscribed",
	Ext3_QoS_Subscribed_free,
	Ext3_QoS_Subscribed_print,
	Ext3_QoS_Subscribed_constraint,
	Ext3_QoS_Subscribed_decode_ber,
	Ext3_QoS_Subscribed_encode_der,
	Ext3_QoS_Subscribed_decode_xer,
	Ext3_QoS_Subscribed_encode_xer,
	Ext3_QoS_Subscribed_decode_uper,
	Ext3_QoS_Subscribed_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Ext3_QoS_Subscribed_tags_1,
	sizeof(asn_DEF_Ext3_QoS_Subscribed_tags_1)
		/sizeof(asn_DEF_Ext3_QoS_Subscribed_tags_1[0]), /* 1 */
	asn_DEF_Ext3_QoS_Subscribed_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ext3_QoS_Subscribed_tags_1)
		/sizeof(asn_DEF_Ext3_QoS_Subscribed_tags_1[0]), /* 1 */
	&asn_PER_type_Ext3_QoS_Subscribed_constr_1,
	0, 0,	/* No members */
	0	/* No specifics */
};

