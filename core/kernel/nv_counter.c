// SPDX-License-Identifier: BSD-2-Clause
/*
 * Copyright (c) 2023, Linaro Limited
 * Copyright (c) 2024, CCX Technologies Inc.
 */

#include <compiler.h>
#include <kernel/nv_counter.h>

TEE_Result __weak nv_counter_get_ree_fs(uint32_t *value)
{
    /* NOTE: CCX platforms don't overwriting keys */
    /*       so no need for roll-back protection. */
    *value = 0;
	return TEE_SUCCESS;
}

TEE_Result __weak nv_counter_incr_ree_fs_to(uint32_t value __unused)
{
	return TEE_SUCCESS;
}
