cmd_arch/arm/boot/dts/imx6sl-evk-btwifi.dtb := arm-poky-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6sl-evk-btwifi.dtb.d.pre.tmp -nostdinc -I/home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts -I/home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include -I/home/tic-imx/Desktop/SCM/kernel_scm/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6sl-evk-btwifi.dtb.dts.tmp arch/arm/boot/dts/imx6sl-evk-btwifi.dts ; /home/tic-imx/Desktop/SCM/kernel_scm/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6sl-evk-btwifi.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6sl-evk-btwifi.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6sl-evk-btwifi.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6sl-evk-btwifi.dtb.d.pre.tmp arch/arm/boot/dts/.imx6sl-evk-btwifi.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6sl-evk-btwifi.dtb.d

source_arch/arm/boot/dts/imx6sl-evk-btwifi.dtb := arch/arm/boot/dts/imx6sl-evk-btwifi.dts

deps_arch/arm/boot/dts/imx6sl-evk-btwifi.dtb := \
  arch/arm/boot/dts/imx6sl-evk.dts \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/input/input.h \
  arch/arm/boot/dts/imx6sl.dtsi \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/imx6sl-pinfunc.h \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/clock/imx6sl-clock.h \

arch/arm/boot/dts/imx6sl-evk-btwifi.dtb: $(deps_arch/arm/boot/dts/imx6sl-evk-btwifi.dtb)

$(deps_arch/arm/boot/dts/imx6sl-evk-btwifi.dtb):
