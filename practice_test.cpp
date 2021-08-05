#include <stdio.h>

// Attributes in prototypes:
__attribute__((constructor, weak)) void beforeMain(void);
__attribute__((constructor)) __attribute__((weak)) void beforeMain2(void);

int main(){
    printf("In Main\n");
    return 0;
}

// Attributes in definitions:
__attribute__((constructor, weak)) void beforeMain(void){
    printf("Before Main 1\n");
}

__attribute__((constructor)) __attribute__((weak)) void beforeMain2(void){
    printf("Before Main 2\n");
}
