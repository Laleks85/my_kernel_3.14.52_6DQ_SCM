cmd_arch/arm/boot/dts/imx27-phytec-phycore-rdk.dtb := arm-poky-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx27-phytec-phycore-rdk.dtb.d.pre.tmp -nostdinc -I/home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts -I/home/tic-imx/Desktop/SCM/kernel_scm/arch/arm/boot/dts/include -I/home/tic-imx/Desktop/SCM/kernel_scm/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx27-phytec-phycore-rdk.dtb.dts.tmp arch/arm/boot/dts/imx27-phytec-phycore-rdk.dts ; /home/tic-imx/Desktop/SCM/kernel_scm/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx27-phytec-phycore-rdk.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx27-phytec-phycore-rdk.dtb.d.dtc.tmp arch/arm/boot/dts/.imx27-phytec-phycore-rdk.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx27-phytec-phycore-rdk.dtb.d.pre.tmp arch/arm/boot/dts/.imx27-phytec-phycore-rdk.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx27-phytec-phycore-rdk.dtb.d

source_arch/arm/boot/dts/imx27-phytec-phycore-rdk.dtb := arch/arm/boot/dts/imx27-phytec-phycore-rdk.dts

deps_arch/arm/boot/dts/imx27-phytec-phycore-rdk.dtb := \
  arch/arm/boot/dts/imx27-phytec-phycore-som.dts \
  arch/arm/boot/dts/imx27.dtsi \
  arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/imx27-phytec-phycore-rdk.dtb: $(deps_arch/arm/boot/dts/imx27-phytec-phycore-rdk.dtb)

$(deps_arch/arm/boot/dts/imx27-phytec-phycore-rdk.dtb):
