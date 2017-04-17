
#include "../Tools.h"
#include "../App.h"
#include "Enclave_u.h"

void ecall_count_packets(char* buf_addr, uint16_t n, uint16_t off)
{
  sgx_status_t ret = SGX_ERROR_UNEXPECTED;
  ret = ecall_count(global_eid, buf_addr, n, off);
  if(ret != SGX_SUCCESS)
    abort();

}
