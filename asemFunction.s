#include <xc.h>   
    
.data  
/* data declarations */
    hands: .asciz "8C TS KC 9H 4S 7D 2S 5D 3S AC"
    one: .space (0x50 * 4)
    two: .space (0x50 * 4)
 
.text
.align
     
.global asmFunction
asmFunction:  
    
    ldr R1, = #hands
    mov R2, #0
    
    ldrb R3, [R1,R2]
    mov PC,LR      
    
.end asmFunction

flush:
    
rank:
    
    mov PC,LR


.end
           
