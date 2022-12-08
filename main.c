#include <xc.h>
#include <stddef.h>                     // Defines NULL
#include <stdbool.h>                    // Defines true
#include <stdlib.h>                     // Defines EXIT_FAILURE
#include <stdio.h>

extern int32_t asmFunction();

int main(void) 
{
        asmFunction();
        while(1);
}