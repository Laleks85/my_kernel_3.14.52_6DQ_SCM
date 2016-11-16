cmd_arch/arm/boot/dts/imx6qp-sabreauto.dtb := arm-poky-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6qp-sabreauto.dtb.d.pre.tmp -nostdinc -I/home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts -I/home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include -I/home/tic-imx/Desktop/SCM/kernel_scm/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6qp-sabreauto.dtb.dts.tmp arch/arm/boot/dts/imx6qp-sabreauto.dts ; /home/tic-imx/Desktop/SCM/kernel_scm/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6qp-sabreauto.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6qp-sabreauto.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6qp-sabreauto.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6qp-sabreauto.dtb.d.pre.tmp arch/arm/boot/dts/.imx6qp-sabreauto.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6qp-sabreauto.dtb.d

source_arch/arm/boot/dts/imx6qp-sabreauto.dtb := arch/arm/boot/dts/imx6qp-sabreauto.dts

deps_arch/arm/boot/dts/imx6qp-sabreauto.dtb := \
  arch/arm/boot/dts/imx6q-sabreauto.dts \
  arch/arm/boot/dts/imx6q.dtsi \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx6q-pinfunc.h \
  arch/arm/boot/dts/imx6qdl.dtsi \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/clock/imx6qdl-clock.h \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/imx6qdl-sabreauto.dtsi \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/input/input.h \
  arch/arm/boot/dts/imx6qp.dtsi \

arch/arm/boot/dts/imx6qp-sabreauto.dtb: $(deps_arch/arm/boot/dts/imx6qp-sabreauto.dtb)

$(deps_arch/arm/boot/dts/imx6qp-sabreauto.dtb):
