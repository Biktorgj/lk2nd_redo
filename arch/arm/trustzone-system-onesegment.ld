OUTPUT_FORMAT("elf32-littlearm", "elf32-littlearm", "elf32-littlearm")
OUTPUT_ARCH(arm)

ENTRY(_start)
SECTIONS
{
/*Added TRUSTZONE at 0x0. Moving rest of APPSBL to %MEMBASE% */
	. = 0x0;
	.tzbsp 0x0 : {*tzbsp_bin.o(.data)}
	. = %MEMBASE%;
	.interp : { *(.interp) }
	.hash : { *(.hash) }
	.dynsym : { *(.dynsym) }
	.dynstr : { *(.dynstr) }
	.rel.text : { *(.rel.text) *(.rel.gnu.linkonce.t*) }
	.rela.text : { *(.rela.text) *(.rela.gnu.linkonce.t*) }
	.rel.data : { *(.rel.data) *(.rel.gnu.linkonce.d*) }
	.rela.data : { *(.rela.data) *(.rela.gnu.linkonce.d*) }
	.rel.rodata : { *(.rel.rodata) *(.rel.gnu.linkonce.r*) }
	.rela.rodata : { *(.rela.rodata) *(.rela.gnu.linkonce.r*) }
	.rel.got : { *(.rel.got) }
	.rela.got : { *(.rela.got) }
	.rel.ctors : { *(.rel.ctors) }
	.rela.ctors : { *(.rela.ctors) }
	.rel.dtors : { *(.rel.dtors) }
	.rela.dtors : { *(.rela.dtors) }
	.rel.init : { *(.rel.init) }
	.rela.init : { *(.rela.init) }
	.rel.fini : { *(.rel.fini) }
	.rela.fini : { *(.rela.fini) }
	.rel.bss : { *(.rel.bss) }
	.rela.bss : { *(.rela.bss) }
	.rel.plt : { *(.rel.plt) }
	.rela.plt : { *(.rela.plt) }
/*Moving harcoded addresses by a displacement of %MEMBASE%  */
	.init : { *(.init) } = %MEMBASE% + 0x9090
	.plt : { *(.plt) }

	/* text/read-only data */

/*Moving harcoded addresses by a displacement of %MEMBASE%  */
	 .text : { *(.text .text.* .glue_7* .gnu.linkonce.t.*) } = %MEMBASE% + 0x9090

	.rodata : {
		*(.rodata .rodata.* .gnu.linkonce.r.*)
		. = ALIGN(4);
		__commands_start = .;
		KEEP (*(.commands))
		__commands_end = .;
		. = ALIGN(4);
		__apps_start = .;
		KEEP (*(.apps))
		__apps_end = .;
		. = ALIGN(4);
		__rodata_end = . ;
	}

	/* writable data  */
	__data_start_rom = .;	/* in one segment binaries, the rom data address is on top of the ram data address */
	__data_start = .;
	.data : SUBALIGN(4) { *(.data .data.* .gnu.linkonce.d.*) }

	__ctor_list = .;
	.ctors : { *(.ctors) }
	__ctor_end = .;
	__dtor_list = .;
	.dtors : { *(.dtors) }
	__dtor_end = .;
	.got : { *(.got.plt) *(.got) }
	.dynamic : { *(.dynamic) }

	. = ALIGN(4);
	__data_end = .;

	/* unintialized data (in same segment as writable data) */
	. = ALIGN(4);
	__bss_start = .;
	.bss : { *(.bss .bss.*) }




	. = ALIGN(4);
	_end = .;



	. = %MEMBASE% + %MEMSIZE%;
	_end_of_ram = .;

	/* Strip unnecessary stuff */
	/DISCARD/ : { *(.comment .note .eh_frame) }
}
