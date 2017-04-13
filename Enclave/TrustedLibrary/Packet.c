
#include <stdint.h>
#include "sgx_trts.h"
#include "../Enclave.h"
#include "Enclave_t.h"

void ecall_count(uint16_t n)
{
  static int count = 0;
  count += n;
  printf("%d\n", count);
}
