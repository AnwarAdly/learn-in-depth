MEMORY {
	flash (rx) : ORIGIN = 0x00000000 , LENGTH = 512M
	ram   (rxw): ORIGIN = 0x20000000 , LENGTH = 512M
}
SECTIONS {
	.text : {
		*(.vectors)
		*(.text)
		_E_text = . ;
	}> flash
	.data : {
		_S_DATA = .  ;
		*(.data)
		. = ALIGN(4) ;
		_E_DATA = .  ;
	}> ram AT> flash
	.bss : {
		_S_bss = .  ;
		*(.bss)
		. = ALIGN(4) ;
		_E_bss = .  ;
	}> ram
}