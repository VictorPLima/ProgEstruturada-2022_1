#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble_sort(int n, int* v){
    int i, end;

    for(end=n-1; end>0; end--){
        int troca=0;
        for(i=0; i<end; i++){
            if(v[i]>v[i+1]){
                int temp = v[i];
                v[i]=v[i+1];
                v[i+1]=temp;
                troca=1;
            }
        }
        if(!troca) return;
    }
}

void quick_sort(int n, int* v){
    int i, a=0, pivot=n-1;
    int troca = 0;

    for(i=0; i<n; i++){
        if(v[i]<=v[pivot]){
            if(a<i){
                int temp = v[i];
                v[i]=v[a];
                v[a]=temp;
                troca=1;
            }
            a++;
        }
    }
    if(!troca) return;
    if(n>1){
        quick_sort(a, v);
        quick_sort(n-a, &v[a]);
    }
}


int main(void){
    int i, n=5;
    char letras[] = {'b', 'd', 'a', 'f', 'c'};
    int v[] = {10, 4, 9, 3, 2};


    bubble_sort(n, v);
    for(i=0; i<n; i++){
        printf("%d ",v[i]);
    }
    printf("\n");

    quick_sort(n, v);
    for(i=0; i<n; i++){
        printf("%d ",v[i]);
    }

    return 0;
}