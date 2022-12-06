
MEMORY{
	flash(rx) : ORIGIN = 0x08000000 , LENGTH = 128K
	ram(rwx)  : ORIGIN = 0x20000000 , LENGTH =  20K
}
SECTIONS{
	.text : {
		*(.vectors)
		*(.text)
		_E_text = . ;
	}> flash
	.data : {
		_S_data = . ;
		*(.data)
		_E_data = . ;
	}> ram AT> flash	
	.bss :  {
		_S_bss = . ;
		*(.bss)
		. = ALIGN(4);
		_E_bss = . ;
	}> ram
	. = . + 1000  ; 
	stack_top = . ;

}