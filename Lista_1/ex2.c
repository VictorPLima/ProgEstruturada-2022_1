// Lista 1 - Exercicio 2
#include <stdio.h>

int main(void){
    int a, b, c;
    int min, max;
    float mean;

    printf("1o valor: ");
    scanf("%d", &a);
    printf("2o valor: ");
    scanf("%d", &b);
    printf("3o valor: ");
    scanf("%d", &c);

    //Minimo
    if(a<=b && a<=c){
        min = a;
    }
    else if(b<=a && b<=c){
        min = b;
    }
    else{
        min = c;
    }
    //Maximo
    if(a>=b && a>=c){
        max = a;
    }
    else if(b>=a && b>=c){
        max = b;
    }
    else{
        max = c;
    }
    mean = (a+b+c)/3.0;

    printf("\nMaior = %d \nMenor = %d", max, min);
    printf("\nValores pares: ");
    if(a%2==0){ printf("%d ", a); }
    if(b%2==0){ printf("%d ", b); }
    if(c%2==0){ printf("%d ", c); }
    printf("\nMedia = %.2f", mean);

    return 0;
}
