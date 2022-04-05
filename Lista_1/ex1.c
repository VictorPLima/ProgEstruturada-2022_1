// Lista 1 - Exercicio 1
#include <stdio.h>

int main(void){
    int seg, h, min, s;

    printf("Segundos: ");
    scanf("%d", &seg);

    h = seg/3600;
    min = (seg%3600)/60;
    s = (seg%3600)%60;

    printf("%d s = %d h %d min %d s", seg, h, min, s);
    return 0;
}
