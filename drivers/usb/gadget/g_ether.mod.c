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
	{ 0xb508f6f, __VMLINUX_SYMBOL_STR(usb_add_config) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xc90cf8e2, __VMLINUX_SYMBOL_STR(usb_otg_descriptor_init) },
	{ 0x201e4730, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xcd96af59, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9b5bd5d3, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0x35f9c9e2, __VMLINUX_SYMBOL_STR(usb_otg_descriptor_alloc) },
	{ 0x95c3b165, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0x3794d932, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0x9cde8e68, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x92e4ac96, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0x2d0ae68f, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0x2bf43ac0, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0xdfd2d35f, __VMLINUX_SYMBOL_STR(rndis_borrow_net) },
	{ 0x19d57a96, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0xb3d3d4c2, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x5b7a6ce4, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0x82559217, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x44c15ae1, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0xf2ef713d, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xafad493b, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether,usb_f_rndis";


MODULE_INFO(srcversion, "E80B3E062D6FFE82D2288D1");
