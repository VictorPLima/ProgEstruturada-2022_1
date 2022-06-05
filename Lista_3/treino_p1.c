#include <stdio.h>
#include <stdlib.h>

void troca(int *pa, int *pb){
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main(void){
    int i, qtd_nomes=3;
    char **nomes;
    int strl = 10;
    
    nomes = (char **) malloc(qtd_nomes*sizeof(char *));
    if(nomes == NULL) printf("MEMORIA INSUFICIENTE");
    for(i=0;i<qtd_nomes;i++){
        nomes[i] = (char *) malloc((strl+1)*sizeof(char));
        if(nomes[i] == NULL) printf("MEMORIA INSUFICIENTE");

        printf("\nNome %d: ",i);
        scanf(" %10[^\n]", nomes[i]);
    }
    for(i=0;i<qtd_nomes;i++){
        printf("\n%s", nomes[i]);
    }

    free(nomes);
}