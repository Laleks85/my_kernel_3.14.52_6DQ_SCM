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
	{ 0xf5b8b4c5, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x19c7ca2f, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x9ac389ba, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x36a3af44, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x44d9b45b, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x11d0f47c, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x647c8a13, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x13bec41d, __VMLINUX_SYMBOL_STR(release_bus_freq) },
	{ 0x6bffca2a, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0xdeadadf4, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xe57f0426, __VMLINUX_SYMBOL_STR(vb2_dma_contig_cleanup_ctx) },
	{ 0x3f59d6dd, __VMLINUX_SYMBOL_STR(request_bus_freq) },
	{ 0xbac64688, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x3c0ed9ba, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x39e59a90, __VMLINUX_SYMBOL_STR(vb2_dma_contig_memops) },
	{ 0xefe91743, __VMLINUX_SYMBOL_STR(vb2_dma_contig_init_ctx) },
	{ 0xa3ad19b7, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xe76320b4, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x1f202476, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc48aa353, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x5fee1c78, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x5bae06a7, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc88f759, __VMLINUX_SYMBOL_STR(of_graph_get_remote_port_parent) },
	{ 0x3d41904f, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x66283266, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x90705b7f, __VMLINUX_SYMBOL_STR(syscon_node_to_regmap) },
	{ 0xe35c5285, __VMLINUX_SYMBOL_STR(of_find_node_by_phandle) },
	{ 0x6199c0d4, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x338dfe0b, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_register) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x9e44b9b7, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0x4df9f923, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe14a2c18, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x8572221a, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x8f98abaf, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x189ebe08, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xb014c613, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x10b45503, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8591fb03, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x985146c1, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x166fed45, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x7322d8bf, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xf5ee3c1a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xbaa21e14, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xaca48754, __VMLINUX_SYMBOL_STR(vb2_read) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5096f545, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x21665d12, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x2bc929ad, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xab1fa9ed, __VMLINUX_SYMBOL_STR(vb2_reqbufs) },
	{ 0x5e85b9aa, __VMLINUX_SYMBOL_STR(vb2_plane_cookie) },
	{ 0x4557c878, __VMLINUX_SYMBOL_STR(vb2_querybuf) },
	{ 0xe19d64a1, __VMLINUX_SYMBOL_STR(vb2_qbuf) },
	{ 0x9103c113, __VMLINUX_SYMBOL_STR(vb2_dqbuf) },
	{ 0xb00ffa34, __VMLINUX_SYMBOL_STR(vb2_streamon) },
	{ 0x5a290cf, __VMLINUX_SYMBOL_STR(vb2_streamoff) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc3c287f8, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x9471207, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xd2b0b6e5, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x4469677a, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xdcf7e143, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_unregister) },
	{ 0xaaf1a70a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cfsl,imx6s-csi*");

MODULE_INFO(srcversion, "E1AE4BD09B751F8ACD08CE3");
