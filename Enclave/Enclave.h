
#ifndef _ENCLAVE_H_
#define _ENCLAVE_H_

#include <stdlib.h>
#include <assert.h>

#if defined(__cplusplus)
extern "C" {
#endif

void ocall_printf(const char *fmt, ...);

#if defined(__cplusplus)
}
#endif


#define printf ocall_printf

#endif /* !_ENCLAVE_H_ */
