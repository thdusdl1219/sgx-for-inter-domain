
#ifndef _APP_H_
#define _APP_H_

#include<stdint.h>


#if defined(__cplusplus)
extern "C" {
#endif
void ecall_libc_functions(void);
void ecall_libcxx_functions(void);
void ecall_thread_functions(void);

void ecall_count_packets(const uint16_t n);

#if defined(__cplusplus)
}
#endif

#endif /* !_APP_H_ */
