/*
 * OMAP3xxx Power/Reset Management (PRM) register definitions
 *
 * Copyright (C) 2007-2009, 2011-2012 Texas Instruments, Inc.
 * Copyright (C) 2008-2010 Nokia Corporation
 * Paul Walmsley
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * The PRM hardware modules on the OMAP2/3 are quite similar to each
 * other.  The PRM on OMAP4 has a new register layout, and is handled
 * in a separate file.
 */
#ifndef __ARCH_ARM_MACH_OMAP2_PRM3XXX_H
#define __ARCH_ARM_MACH_OMAP2_PRM3XXX_H

#include "prcm-common.h"
#include "prm.h"
#include "prm2xxx_3xxx.h"

#define OMAP34XX_PRM_REGADDR(module, reg)				\
		OMAP2_L4_IO_ADDRESS(OMAP3430_PRM_BASE + (module) + (reg))


/*
 * OMAP3-specific global PRM registers
 * Use {read,write}l_relaxed() with these registers.
 *
 * With a few exceptions, these are the register names beginning with
 * PRM_* on 34xx.  (The exceptions are the IRQSTATUS and IRQENABLE
 * bits.)
 */

#define OMAP3_PRM_REVISION_OFFSET	0x0004
#define OMAP3430_PRM_REVISION		OMAP34XX_PRM_REGADDR(OCP_MOD, 0x0004)
#define OMAP3_PRM_SYSCONFIG_OFFSET	0x0014
#define OMAP3430_PRM_SYSCONFIG		OMAP34XX_PRM_REGADDR(OCP_MOD, 0x0014)

#define OMAP3_PRM_IRQSTATUS_MPU_OFFSET	0x0018
#define OMAP3430_PRM_IRQSTATUS_MPU	OMAP34XX_PRM_REGADDR(OCP_MOD, 0x0018)
#define OMAP3_PRM_IRQENABLE_MPU_OFFSET	0x001c
#define OMAP3430_PRM_IRQENABLE_MPU	OMAP34XX_PRM_REGADDR(OCP_MOD, 0x001c)


#define OMAP3_PRM_VC_SMPS_SA_OFFSET	0x0020
#define OMAP3430_PRM_VC_SMPS_SA		OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x0020)
#define OMAP3_PRM_VC_SMPS_VOL_RA_OFFSET	0x0024
#define OMAP3430_PRM_VC_SMPS_VOL_RA	OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x0024)
#define OMAP3_PRM_VC_SMPS_CMD_RA_OFFSET	0x0028
#define OMAP3430_PRM_VC_SMPS_CMD_RA	OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x0028)
#define OMAP3_PRM_VC_CMD_VAL_0_OFFSET	0x002c
#define OMAP3430_PRM_VC_CMD_VAL_0	OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x002c)
#define OMAP3_PRM_VC_CMD_VAL_1_OFFSET	0x0030
#define OMAP3430_PRM_VC_CMD_VAL_1	OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x0030)
#define OMAP3_PRM_VC_CH_CONF_OFFSET	0x0034
#define OMAP3430_PRM_VC_CH_CONF		OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x0034)
#define OMAP3_PRM_VC_I2C_CFG_OFFSET	0x0038
#define OMAP3430_PRM_VC_I2C_CFG		OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x0038)
#define OMAP3_PRM_VC_BYPASS_VAL_OFFSET	0x003c
#define OMAP3430_PRM_VC_BYPASS_VAL	OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x003c)
#define OMAP3_PRM_RSTCTRL_OFFSET	0x0050
#define OMAP3430_PRM_RSTCTRL		OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x0050)
#define OMAP3_PRM_RSTTIME_OFFSET	0x0054
#define OMAP3430_PRM_RSTTIME		OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x0054)
#define OMAP3_PRM_RSTST_OFFSET	0x0058
#define OMAP3430_PRM_RSTST		OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x0058)
#define OMAP3_PRM_VOLTCTRL_OFFSET	0x0060
#define OMAP3430_PRM_VOLTCTRL		OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x0060)
#define OMAP3_PRM_SRAM_PCHARGE_OFFSET	0x0064
#define OMAP3430_PRM_SRAM_PCHARGE	OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x0064)
#define OMAP3_PRM_CLKSRC_CTRL_OFFSET	0x0070
#define OMAP3430_PRM_CLKSRC_CTRL	OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x0070)
#define OMAP3_PRM_VOLTSETUP1_OFFSET	0x0090
#define OMAP3430_PRM_VOLTSETUP1		OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x0090)
#define OMAP3_PRM_VOLTOFFSET_OFFSET	0x0094
#define OMAP3430_PRM_VOLTOFFSET		OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x0094)
#define OMAP3_PRM_CLKSETUP_OFFSET	0x0098
#define OMAP3430_PRM_CLKSETUP		OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x0098)
#define OMAP3_PRM_POLCTRL_OFFSET	0x009c
#define OMAP3430_PRM_POLCTRL		OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x009c)
#define OMAP3_PRM_VOLTSETUP2_OFFSET	0x00a0
#define OMAP3430_PRM_VOLTSETUP2		OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x00a0)
#define OMAP3_PRM_VP1_CONFIG_OFFSET	0x00b0
#define OMAP3430_PRM_VP1_CONFIG		OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x00b0)
#define OMAP3_PRM_VP1_VSTEPMIN_OFFSET	0x00b4
#define OMAP3430_PRM_VP1_VSTEPMIN	OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x00b4)
#define OMAP3_PRM_VP1_VSTEPMAX_OFFSET	0x00b8
#define OMAP3430_PRM_VP1_VSTEPMAX	OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x00b8)
#define OMAP3_PRM_VP1_VLIMITTO_OFFSET	0x00bc
#define OMAP3430_PRM_VP1_VLIMITTO	OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x00bc)
#define OMAP3_PRM_VP1_VOLTAGE_OFFSET	0x00c0
#define OMAP3430_PRM_VP1_VOLTAGE	OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x00c0)
#define OMAP3_PRM_VP1_STATUS_OFFSET	0x00c4
#define OMAP3430_PRM_VP1_STATUS		OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x00c4)
#define OMAP3_PRM_VP2_CONFIG_OFFSET	0x00d0
#define OMAP3430_PRM_VP2_CONFIG		OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x00d0)
#define OMAP3_PRM_VP2_VSTEPMIN_OFFSET	0x00d4
#define OMAP3430_PRM_VP2_VSTEPMIN	OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x00d4)
#define OMAP3_PRM_VP2_VSTEPMAX_OFFSET	0x00d8
#define OMAP3430_PRM_VP2_VSTEPMAX	OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x00d8)
#define OMAP3_PRM_VP2_VLIMITTO_OFFSET	0x00dc
#define OMAP3430_PRM_VP2_VLIMITTO	OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x00dc)
#define OMAP3_PRM_VP2_VOLTAGE_OFFSET	0x00e0
#define OMAP3430_PRM_VP2_VOLTAGE	OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x00e0)
#define OMAP3_PRM_VP2_STATUS_OFFSET	0x00e4
#define OMAP3430_PRM_VP2_STATUS		OMAP34XX_PRM_REGADDR(OMAP3430_GR_MOD, 0x00e4)

#define OMAP3_PRM_CLKSEL_OFFSET	0x0040
#define OMAP3430_PRM_CLKSEL		OMAP34XX_PRM_REGADDR(OMAP3430_CCR_MOD, 0x0040)
#define OMAP3_PRM_CLKOUT_CTRL_OFFSET	0x0070
#define OMAP3430_PRM_CLKOUT_CTRL	OMAP34XX_PRM_REGADDR(OMAP3430_CCR_MOD, 0x0070)

/* OMAP3 specific register offsets */
#define OMAP3430ES2_PM_WKEN3				0x00f0
#define OMAP3430ES2_PM_WKST3				0x00b8

#define OMAP3430_PM_MPUGRPSEL				0x00a4
#define OMAP3430_PM_MPUGRPSEL1				OMAP3430_PM_MPUGRPSEL
#define OMAP3430ES2_PM_MPUGRPSEL3			0x00f8

#define OMAP3430_PM_IVAGRPSEL				0x00a8
#define OMAP3430_PM_IVAGRPSEL1				OMAP3430_PM_IVAGRPSEL
#define OMAP3430ES2_PM_IVAGRPSEL3			0x00f4

#define OMAP3430_PM_PREPWSTST				0x00e8

#define OMAP3430_PRM_IRQSTATUS_IVA2			0x00f8
#define OMAP3430_PRM_IRQENABLE_IVA2			0x00fc


#ifndef __ASSEMBLER__

/* OMAP3-specific VP functions */
u32 omap3_prm_vp_check_txdone(u8 vp_id);
void omap3_prm_vp_clear_txdone(u8 vp_id);

/*
 * OMAP3 access functions for voltage controller (VC) and
 * voltage proccessor (VP) in the PRM.
 */
extern u32 omap3_prm_vcvp_read(u8 offset);
extern void omap3_prm_vcvp_write(u32 val, u8 offset);
extern u32 omap3_prm_vcvp_rmw(u32 mask, u32 bits, u8 offset);

extern int __init omap3xxx_prm_init(void);
extern u32 omap3xxx_prm_get_reset_sources(void);
int omap3xxx_prm_clear_mod_irqs(s16 module, u8 regs, u32 ignore_bits);
void omap3xxx_prm_iva_idle(void);
void omap3_prm_reset_modem(void);
int omap3xxx_prm_clear_global_cold_reset(void);
void omap3_prm_save_scratchpad_contents(u32 *ptr);
void omap3_prm_init_pm(bool has_uart4, bool has_iva);

#endif /* __ASSEMBLER */


#endif
