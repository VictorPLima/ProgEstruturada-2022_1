#include <stdio.h>

int maiores(int n, int *vet, int x){
    int i, count=0;
    for(i=0;i<n;i++){
        //count += (*(vet+i)>x ? 1 : 0);
        count += (vet[i]>x ? 1 : 0);
    }
    return count;
}

int main(void){
    int v[] = {0,1,2,3,4,5,6,7,8,9};
    int qtd, a=3;
    qtd = maiores(10, v, a);
    printf("%d maiores que %d", qtd, a);
}