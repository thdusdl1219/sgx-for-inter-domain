
#include "../Tools.h"
#include "../App.h"
#include "Enclave_u.h"

/* ecall_libc_functions:
 *   Invokes standard C functions.
 */
void ecall_libc_functions(void)
{
    sgx_status_t ret = SGX_ERROR_UNEXPECTED;

    ret = ecall_malloc_free(global_eid);
    if (ret != SGX_SUCCESS)
        abort();
    
    int cpuid[4] = {0x1, 0x0, 0x0, 0x0};
    ret = ecall_sgx_cpuid(global_eid, cpuid, 0x0);
    if (ret != SGX_SUCCESS)
        abort();
}
