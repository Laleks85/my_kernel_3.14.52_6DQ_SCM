cmd_arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2-mqs.dtb := arm-poky-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6ul-14x14-ddr3-arm2-mqs.dtb.d.pre.tmp -nostdinc -I/home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts -I/home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include -I/home/tic-imx/Desktop/SCM/kernel_scm/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6ul-14x14-ddr3-arm2-mqs.dtb.dts.tmp arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2-mqs.dts ; /home/tic-imx/Desktop/SCM/kernel_scm/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2-mqs.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6ul-14x14-ddr3-arm2-mqs.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6ul-14x14-ddr3-arm2-mqs.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6ul-14x14-ddr3-arm2-mqs.dtb.d.pre.tmp arch/arm/boot/dts/.imx6ul-14x14-ddr3-arm2-mqs.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6ul-14x14-ddr3-arm2-mqs.dtb.d

source_arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2-mqs.dtb := arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2-mqs.dts

deps_arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2-mqs.dtb := \
  arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2.dts \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/input/input.h \
  arch/arm/boot/dts/imx6ul.dtsi \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/clock/imx6ul-clock.h \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx6ul-pinfunc.h \
  arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2-mqs.dtb: $(deps_arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2-mqs.dtb)

$(deps_arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2-mqs.dtb):