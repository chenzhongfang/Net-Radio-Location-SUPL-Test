/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_NAVclockModel_H_
#define	_NAVclockModel_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NAVclockModel */
typedef struct NAVclockModel {
	long	 navToc;
	long	 navaf2;
	long	 navaf1;
	long	 navaf0;
	long	 navTgd;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NAVclockModel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NAVclockModel;

#ifdef __cplusplus
}
#endif

#endif	/* _NAVclockModel_H_ */
#include <asn_internal.h>
