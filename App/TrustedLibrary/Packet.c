
#include "../Tools.h"
#include "../App.h"
#include "Enclave_u.h"

void ecall_count_packets(uint16_t n)
{
  sgx_status_t ret = SGX_ERROR_UNEXPECTED;
  ret = ecall_count(global_eid, n);
  if(ret != SGX_SUCCESS)
    abort();

}
