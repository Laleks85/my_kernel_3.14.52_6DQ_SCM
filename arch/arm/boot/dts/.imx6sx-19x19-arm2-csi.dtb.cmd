cmd_arch/arm/boot/dts/imx6sx-19x19-arm2-csi.dtb := arm-poky-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6sx-19x19-arm2-csi.dtb.d.pre.tmp -nostdinc -I/home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts -I/home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include -I/home/tic-imx/Desktop/SCM/kernel_scm/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6sx-19x19-arm2-csi.dtb.dts.tmp arch/arm/boot/dts/imx6sx-19x19-arm2-csi.dts ; /home/tic-imx/Desktop/SCM/kernel_scm/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6sx-19x19-arm2-csi.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6sx-19x19-arm2-csi.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6sx-19x19-arm2-csi.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6sx-19x19-arm2-csi.dtb.d.pre.tmp arch/arm/boot/dts/.imx6sx-19x19-arm2-csi.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6sx-19x19-arm2-csi.dtb.d

source_arch/arm/boot/dts/imx6sx-19x19-arm2-csi.dtb := arch/arm/boot/dts/imx6sx-19x19-arm2-csi.dts

deps_arch/arm/boot/dts/imx6sx-19x19-arm2-csi.dtb := \
  arch/arm/boot/dts/imx6sx-19x19-arm2.dts \
  arch/arm/boot/dts/imx6sx.dtsi \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/clock/imx6sx-clock.h \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx6sx-pinfunc.h \
  arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/imx6sx-19x19-arm2-csi.dtb: $(deps_arch/arm/boot/dts/imx6sx-19x19-arm2-csi.dtb)

$(deps_arch/arm/boot/dts/imx6sx-19x19-arm2-csi.dtb):