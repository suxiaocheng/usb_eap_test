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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x96cec1da, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xac7e00ef, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xe1003072, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x43cfa983, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9380c074, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xdf2bf69, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x6170b080, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x1d09cec1, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x156a8a59, __VMLINUX_SYMBOL_STR(down_trylock) },
	{ 0x6dc0c9dc, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xade63c4d, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbbfdf7b5, __VMLINUX_SYMBOL_STR(usb_deregister_dev) },
	{ 0x28cf65ee, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xe67759ca, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe8025b94, __VMLINUX_SYMBOL_STR(usb_register_dev) },
	{ 0xd77259d1, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xba899caa, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x834e5caa, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb9901c6e, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa4d5abf7, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x643c4c76, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf7c2cca1, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0x6aac82d7, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x12e708f, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x7a3a179f, __VMLINUX_SYMBOL_STR(usb_find_interface) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd6f36aae, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x589bae1a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xf8509e7d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x41d4038, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x4395953e, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x24f45195, __VMLINUX_SYMBOL_STR(usb_wait_anchor_empty_timeout) },
	{ 0x7819011c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFFiscF0ip01in*");

MODULE_INFO(srcversion, "63F5F179C3EAE50BD5463FF");
