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
	{ 0xa3ad19b7, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xc8eba6e9, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xcc8ae23c, __VMLINUX_SYMBOL_STR(v4l2_async_register_subdev) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7c6ec284, __VMLINUX_SYMBOL_STR(regulator_set_voltage) },
	{ 0xe76320b4, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xbf7c6ab1, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x74a675f8, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x1b3085da, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0xdeadadf4, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xd537d632, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0xf816c866, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xa12d929d, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0xfcdf0f15, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4df9f923, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x368382e2, __VMLINUX_SYMBOL_STR(of_get_named_gpiod_flags) },
	{ 0xcfdbcdb7, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x2f364ccf, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xd5875a9b, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x1f202476, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x985146c1, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xd8b518f3, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x3bd9075b, __VMLINUX_SYMBOL_STR(devm_pinctrl_put) },
	{ 0x687934e9, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x98a0f2cd, __VMLINUX_SYMBOL_STR(v4l2_async_unregister_subdev) },
	{ 0xc48aa353, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xaaf1a70a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xd8381b9d, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0xc606086b, __VMLINUX_SYMBOL_STR(regulator_enable) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:ov5640_mipi");

MODULE_INFO(srcversion, "957405095D066B975F1361B");
