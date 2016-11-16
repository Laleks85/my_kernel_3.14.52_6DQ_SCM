#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe8e9fb26, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x65403545, __VMLINUX_SYMBOL_STR(ipu_get_soc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5bae06a7, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x89af1cc8, __VMLINUX_SYMBOL_STR(ipu_init_channel) },
	{ 0x5a919370, __VMLINUX_SYMBOL_STR(ipu_clear_buffer_ready) },
	{ 0x67a885fd, __VMLINUX_SYMBOL_STR(ipu_uninit_channel) },
	{ 0xe30f005f, __VMLINUX_SYMBOL_STR(ipu_init_channel_buffer) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7f1767d1, __VMLINUX_SYMBOL_STR(ipu_disable_channel) },
	{ 0xceb5057c, __VMLINUX_SYMBOL_STR(ipu_enable_channel) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x98036c19, __VMLINUX_SYMBOL_STR(mipi_csi2_get_bind_csi) },
	{ 0xb5b592ee, __VMLINUX_SYMBOL_STR(ipu_disable_csi) },
	{ 0xb474cfa7, __VMLINUX_SYMBOL_STR(ipu_clear_irq) },
	{ 0xda062027, __VMLINUX_SYMBOL_STR(ipu_update_channel_buffer) },
	{ 0xc747ec8a, __VMLINUX_SYMBOL_STR(ipu_free_irq) },
	{ 0xca2a3d63, __VMLINUX_SYMBOL_STR(mipi_csi2_get_bind_ipu) },
	{ 0xbb6102d9, __VMLINUX_SYMBOL_STR(mipi_csi2_pixelclk_enable) },
	{ 0xe870d2c8, __VMLINUX_SYMBOL_STR(ipu_csi_get_sensor_protocol) },
	{ 0x3636dd42, __VMLINUX_SYMBOL_STR(mipi_csi2_get_status) },
	{ 0x24a79310, __VMLINUX_SYMBOL_STR(mipi_csi2_get_info) },
	{ 0xbc023502, __VMLINUX_SYMBOL_STR(ipu_enable_csi) },
	{ 0x27d0ee27, __VMLINUX_SYMBOL_STR(mipi_csi2_pixelclk_disable) },
	{ 0x428f9e8f, __VMLINUX_SYMBOL_STR(ipu_select_buffer) },
	{ 0x4be0e398, __VMLINUX_SYMBOL_STR(mipi_csi2_get_virtual_channel) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xca0412e0, __VMLINUX_SYMBOL_STR(ipu_request_irq) },
	{ 0x37d2c303, __VMLINUX_SYMBOL_STR(mipi_csi2_get_datatype) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1930B232ED601F7BA7DF499");
