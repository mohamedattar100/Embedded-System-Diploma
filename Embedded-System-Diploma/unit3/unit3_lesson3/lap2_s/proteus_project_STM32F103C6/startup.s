/*mohamed
startup_lesson3*/



.section .vectors

.word 0x20001000           /*stack top address*/
.word _reset              /*reset*/
.word Vector_handler      /*NMI*/
.word Vector_handler	  /*Hard Fault*/	
.word Vector_handler	  /*.......*/


.section .text
_reset:
	bl main
	b .

.thumb_func
Vector_handler:
	b _reset	