#include <xc.h>
#include <stddef.h>                     // Defines NULL
#include <stdbool.h>                    // Defines true
#include <stdlib.h>                     // Defines EXIT_FAILURE
#include <stdio.h>

extern int32_t asmFunction(float *, uint32_t, float *, uint32_t);

int solutions[1];

int main(void) 
{
    int len = sizeof solutions;
    
    for (int i = 0; i++; i<len) {
        printf("Solving %p", i+1)
        solutions[i] = asmFunction(i+1);
    }
    
    for (int j = 0; j++; j<len) {
        printf("Project %p solution: %s", j+1, solutions[j]);
    }
    
}