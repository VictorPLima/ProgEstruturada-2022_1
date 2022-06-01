#include <stdio.h>
#include <stdlib.h>

int main(void){
    char s[] = "abc";
    
    printf("Tamanho de s: %d", sizeof(s)/sizeof(char)-1);
}