cmd_arch/arm/boot/dts/imx6dqscm-1gb-evb-hdcp-fix-ldo.dtb := arm-poky-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6dqscm-1gb-evb-hdcp-fix-ldo.dtb.d.pre.tmp -nostdinc -I/home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts -I/home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include -I/home/tic-imx/Desktop/SCM/kernel_scm/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6dqscm-1gb-evb-hdcp-fix-ldo.dtb.dts.tmp arch/arm/boot/dts/imx6dqscm-1gb-evb-hdcp-fix-ldo.dts ; /home/tic-imx/Desktop/SCM/kernel_scm/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6dqscm-1gb-evb-hdcp-fix-ldo.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6dqscm-1gb-evb-hdcp-fix-ldo.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6dqscm-1gb-evb-hdcp-fix-ldo.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6dqscm-1gb-evb-hdcp-fix-ldo.dtb.d.pre.tmp arch/arm/boot/dts/.imx6dqscm-1gb-evb-hdcp-fix-ldo.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6dqscm-1gb-evb-hdcp-fix-ldo.dtb.d

source_arch/arm/boot/dts/imx6dqscm-1gb-evb-hdcp-fix-ldo.dtb := arch/arm/boot/dts/imx6dqscm-1gb-evb-hdcp-fix-ldo.dts

deps_arch/arm/boot/dts/imx6dqscm-1gb-evb-hdcp-fix-ldo.dtb := \
  arch/arm/boot/dts/imx6dqscm-1gb-evb-fix-ldo.dts \
  arch/arm/boot/dts/imx6q-sabresd-ldo.dts \
  arch/arm/boot/dts/imx6q-sabresd.dts \
  arch/arm/boot/dts/imx6q.dtsi \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx6q-pinfunc.h \
  arch/arm/boot/dts/imx6qdl.dtsi \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/clock/imx6qdl-clock.h \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/imx6qdl-sabresd.dtsi \
  /home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include/dt-bindings/input/input.h \

arch/arm/boot/dts/imx6dqscm-1gb-evb-hdcp-fix-ldo.dtb: $(deps_arch/arm/boot/dts/imx6dqscm-1gb-evb-hdcp-fix-ldo.dtb)

$(deps_arch/arm/boot/dts/imx6dqscm-1gb-evb-hdcp-fix-ldo.dtb):
