/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_GanssDataBitsElement_H_
#define	_GanssDataBitsElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SVID.h"
#include "Seq-OfGANSSDataBitsSgn.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GanssDataBitsElement */
typedef struct GanssDataBitsElement {
	SVID_t	 svID;
	Seq_OfGANSSDataBitsSgn_t	 ganssDataBitsSgnList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GanssDataBitsElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GanssDataBitsElement;

#ifdef __cplusplus
}
#endif

#endif	/* _GanssDataBitsElement_H_ */
#include <asn_internal.h>
