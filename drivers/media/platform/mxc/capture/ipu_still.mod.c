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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x89af1cc8, __VMLINUX_SYMBOL_STR(ipu_init_channel) },
	{ 0x67a885fd, __VMLINUX_SYMBOL_STR(ipu_uninit_channel) },
	{ 0xe30f005f, __VMLINUX_SYMBOL_STR(ipu_init_channel_buffer) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7f1767d1, __VMLINUX_SYMBOL_STR(ipu_disable_channel) },
	{ 0xceb5057c, __VMLINUX_SYMBOL_STR(ipu_enable_channel) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb5b592ee, __VMLINUX_SYMBOL_STR(ipu_disable_csi) },
	{ 0xb474cfa7, __VMLINUX_SYMBOL_STR(ipu_clear_irq) },
	{ 0xc747ec8a, __VMLINUX_SYMBOL_STR(ipu_free_irq) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xbc023502, __VMLINUX_SYMBOL_STR(ipu_enable_csi) },
	{ 0x428f9e8f, __VMLINUX_SYMBOL_STR(ipu_select_buffer) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xca0412e0, __VMLINUX_SYMBOL_STR(ipu_request_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1E61B72CB7821993B479560");
