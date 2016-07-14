#include <asm/arch/acs.h>
#include <asm/arch/timing.h>
#include "timing.c"

//main acs struct
struct acs_setting __acs_set={
					.acs_magic		= "acs__",
					.chip_type		= 0x24,
					.version 		= 1,
					.acs_set_length	= sizeof(__acs_set),

					.ddr_magic		= "ddrs_",
					.ddr_set_version= 3, //2016.01.15 update to v2, add dqs gate tuning
										//2016.03.21 update to v3, add lpddr3 support
					.ddr_set_length	= sizeof(ddr_set_t),
					.ddr_set_addr	= (unsigned long)(&__ddr_setting),

					.ddrt_magic		= "ddrt_",
					.ddrt_set_version= 2, //2016.03.21 update to v2, add lpddr3 support
					.ddrt_set_length= sizeof(ddr_timing_t),
					.ddrt_set_addr	= (unsigned long)(&__ddr_timming),

					.pll_magic		= "pll__",
					.pll_set_version= 1,
					.pll_set_length	= sizeof(__pll_setting),
					.pll_set_addr	= (unsigned long)(&__pll_setting),
};
