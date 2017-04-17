
#include <stdint.h>
#include "sgx_trts.h"
#include "../Enclave.h"
#include "Enclave_t.h"

void ecall_count(char* buf, uint16_t n, uint16_t off)
{
  static int count = 0;
  count += n;
//  printf("%d\n", count);
}
