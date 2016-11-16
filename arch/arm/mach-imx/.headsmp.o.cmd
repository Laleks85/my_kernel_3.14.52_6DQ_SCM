cmd_arch/arm/mach-imx/headsmp.o := arm-poky-linux-gnueabi-gcc -Wp,-MD,arch/arm/mach-imx/.headsmp.o.d  -nostdinc -isystem /opt/poky/1.7/sysroots/x86_64-pokysdk-linux/usr/lib/arm-poky-linux-gnueabi/gcc/arm-poky-linux-gnueabi/4.9.1/include -I/home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/tic-imx/Desktop/SCM/kernel_scm/include/uapi -Iinclude/generated/uapi -include /home/tic-imx/Desktop/SCM/kernel_scm/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float      -Wa,-march=armv7-a   -c -o arch/arm/mach-imx/headsmp.o arch/arm/mach-imx/headsmp.S

source_arch/arm/mach-imx/headsmp.o := arch/arm/mach-imx/headsmp.S

deps_arch/arm/mach-imx/headsmp.o := \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/arm/cpu/suspend.h) \
    $(wildcard include/config/cache/l2x0.h) \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/include/asm/linkage.h \
  include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/include/asm/asm-offsets.h \
  include/generated/asm-offsets.h \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/include/asm/hardware/cache-l2x0.h \
    $(wildcard include/config/of.h) \
  include/linux/errno.h \
  include/uapi/linux/errno.h \
  arch/arm/include/generated/asm/errno.h \
  /home/tic-imx/Desktop/SCM/kernel_scm/include/uapi/asm-generic/errno.h \
  /home/tic-imx/Desktop/SCM/kernel_scm/include/uapi/asm-generic/errno-base.h \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/include/asm/smp_scu.h \
    $(wildcard include/config/have/arm/scu.h) \

arch/arm/mach-imx/headsmp.o: $(deps_arch/arm/mach-imx/headsmp.o)

$(deps_arch/arm/mach-imx/headsmp.o):
