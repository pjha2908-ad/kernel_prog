#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe8213e80, "_printk" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xe8f59cda, "kmalloc_caches" },
	{ 0x1269973e, "__kmalloc_cache_noprof" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x746723bc, "param_ops_bool" },
	{ 0x746723bc, "param_ops_int" },
	{ 0x746723bc, "param_array_ops" },
	{ 0x7d435000, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe8213e80,
	0xbd03ed67,
	0xe8f59cda,
	0x1269973e,
	0xe4de56b4,
	0x90a48d82,
	0xcb8b6ec6,
	0x746723bc,
	0x746723bc,
	0x746723bc,
	0x7d435000,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"__ubsan_handle_load_invalid_value\0"
	"__ubsan_handle_out_of_bounds\0"
	"kfree\0"
	"param_ops_bool\0"
	"param_ops_int\0"
	"param_array_ops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A7D255F3085A7F6AC1457F4");
