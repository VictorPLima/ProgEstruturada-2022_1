#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* compactar(char* s){
    char* s_compactada;
    int i, start=0, end, s_compactada_length;

    end = strlen(s)-1;

    while(s[start]==' ' && start<end){// Encontra primeiro caractere diferente de espaço
        start++;
    }
    while(s[end]==' ' && end>start){// Encontra ultimo caractere diferente de espaço
        end--;
    }

    s_compactada_length = end-start+2; //Tamanho contando os caracteres mais '\0'
    s_compactada = (char *) malloc(s_compactada_length*sizeof(char));
    if(s_compactada==NULL){
        return NULL;
    }

    for(i=0;i<(s_compactada_length-1);i++){
        s_compactada[i] = s[i+start];
    }
    s_compactada[s_compactada_length-1] = '\0';

    return s_compactada;
}

int main(void){
    char str[] = "  lorem ipsum   ", *str_compactada;
    int i;

    printf("%s", str);
    str_compactada = compactar(str);

    printf("\n%s", str_compactada);
    for(i=0;str_compactada[i]!='\0';i++){
        printf("\n%c", str_compactada[i]);
    }

    free(str_compactada);
}