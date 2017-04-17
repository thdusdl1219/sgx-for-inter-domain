
#ifndef _APP_H_
#define _APP_H_

#include<stdint.h>


#if defined(__cplusplus)
extern "C" {
#endif
void ecall_libc_functions(void);

void ecall_count_packets(char* buf_addr, const uint16_t n, uint16_t off);

#if defined(__cplusplus)
}
#endif

#endif /* !_APP_H_ */
