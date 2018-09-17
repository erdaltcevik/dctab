/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * (C) Copyright 2014 Chen-Yu Tsai <wens@csie.org>
 *
 * Configuration settings for the Allwinner A23 (sun8i) CPU
 */
#ifndef _DCTAB_CONFIG_H
#define _DCTAB_CONFIG_H

/*
 * A23 specific configuration
 */
#include <configs/sun8i.h>

/*
 * Include common sunxi configuration where most the settings are
 */
#include <configs/sunxi-common.h>

/*
 * Undefine / Re-define / Define: 
 *  DCTAB - specific settings
 */

#define CONFIG_SYS_MMCSD_RAW_MODE_ARGS_SECTOR	0x540
#define CONFIG_SYS_MMCSD_RAW_MODE_ARGS_SECTORS	0x100
#define CONFIG_SYS_SPL_ARGS_ADDR						0x40000100
#define CONFIG_SYS_MMCSD_RAW_MODE_KERNEL_SECTOR	0x640

#define CONFIG_SPLASH_SCREEN

#ifndef CONFIG_SPL_BUILD
#undef CONFIG_EXTRA_ENV_SETTINGS
#define CONFIG_EXTRA_ENV_SETTINGS	\
	CONSOLE_ENV_SETTINGS \
	MEM_LAYOUT_ENV_SETTINGS \
	"fdtfile=" FDTFILE "\0" \
	"console=ttyS0,115200\0"

#else /* ifndef CONFIG_SPL_BUILD */
#undef CONFIG_EXTRA_ENV_SETTINGS
#define CONFIG_EXTRA_ENV_SETTINGS
#endif

#endif /* _DCTAB_CONFIG_H */
