

.section .vectors
.word stack_top		//Stack_top   address
.word _reset			//_reset		  address
.word Vector_handler	//NMI			  address
.word Vector_handler	//Hard_fault  address
.word Vector_handler	//MM			  address
.word Vector_handler	//Bus_fault   address
.word Vector_handler	//Usage_fault address

.section .text
_reset:
	bl main
	b .

.thumb_func				// to deal with thumb & Arm instructions
Vector_handler:
	b _reset