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
	{ 0xfdffe514, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x34f134d5, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x839f99e, __VMLINUX_SYMBOL_STR(gserial_connect) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb537468, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xcd96af59, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x4df9f923, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa0305531, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x505e312e, __VMLINUX_SYMBOL_STR(gserial_disconnect) },
	{ 0xadc592d4, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x33bfdca2, __VMLINUX_SYMBOL_STR(gserial_alloc_line) },
	{ 0xdad4c692, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0xfe4e8bab, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x82bcded2, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb6652875, __VMLINUX_SYMBOL_STR(gserial_free_line) },
	{ 0x6d275ea2, __VMLINUX_SYMBOL_STR(usb_string_id) },
	{ 0xbd5d4ed1, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x365d05ba, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_serial,configfs";


MODULE_INFO(srcversion, "97844922A52FC0C07CD7DA2");