cmd_firmware/imx/sdma/sdma-imx7d.bin.gen.o := arm-poky-linux-gnueabi-gcc -Wp,-MD,firmware/imx/sdma/.sdma-imx7d.bin.gen.o.d  -nostdinc -isystem /opt/poky/1.7/sysroots/x86_64-pokysdk-linux/usr/lib/arm-poky-linux-gnueabi/gcc/arm-poky-linux-gnueabi/4.9.1/include -I/home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/tic-imx/Desktop/SCM/kernel_scm/include/uapi -Iinclude/generated/uapi -include /home/tic-imx/Desktop/SCM/kernel_scm/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float         -c -o firmware/imx/sdma/sdma-imx7d.bin.gen.o firmware/imx/sdma/sdma-imx7d.bin.gen.S

source_firmware/imx/sdma/sdma-imx7d.bin.gen.o := firmware/imx/sdma/sdma-imx7d.bin.gen.S

deps_firmware/imx/sdma/sdma-imx7d.bin.gen.o := \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \

firmware/imx/sdma/sdma-imx7d.bin.gen.o: $(deps_firmware/imx/sdma/sdma-imx7d.bin.gen.o)

$(deps_firmware/imx/sdma/sdma-imx7d.bin.gen.o):
