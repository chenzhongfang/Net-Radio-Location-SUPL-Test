/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_AddionalAngleFields_H_
#define	_AddionalAngleFields_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AddionalAngleFields */
typedef struct AddionalAngleFields {
	long	 azimuth;
	long	 elevation;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AddionalAngleFields_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AddionalAngleFields;

#ifdef __cplusplus
}
#endif

#endif	/* _AddionalAngleFields_H_ */
#include <asn_internal.h>
