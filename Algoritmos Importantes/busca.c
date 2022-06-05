#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int linear_search(int n, int* v, int element){
    for(int i=0; i<n; i++){
        if( v[i]==element ) return 1;
    }
    return 0;
}

int binary_search(int n, int* v, int element){// v needs to be ordered
    int start=0, end=n-1, middle;

    while(start<=end){
        middle=(end+start)/2;
        if(element < v[middle]){// First half
            end = middle-1;
        }
        else if(element > v[middle]){
            start = middle+1;
        }
        else{
            return 1;
        }
    }
    return 0;
}
int binary_search_recursive(int n, int* v, int element){// v needs to be ordered
    int start=0, end=n-1, middle;

    if(start<=end){
        middle=(end+start)/2;
        if(element < v[middle]){// First half
            binary_search_recursive(middle, v, element);
        }
        else if(element > v[middle]){
            binary_search_recursive(n-middle-1, &v[middle+1], element);
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}


int main(void){
    int v[] = {10, 4, 9, 3, 2, 13, 15};
    int v_ordered[] = {2, 3, 4, 9, 10, 13, 15};
    int i, n=sizeof(v)/sizeof(v[0]);
    int element = 5;

    // Linear search
    printf("Vetor: ");
    for(i=0; i<n; i++){
        printf("%d ",v[i]);
    }
    printf("\nLinear Search Result for %d: ", element);
    printf("%s", (linear_search(n, v, element) ? "FOUND" : "NOT FOUND"));
    printf("\n\n");

    // Binary Search
    printf("Vetor: ");
    for(i=0; i<n; i++){
        printf("%d ",v_ordered[i]);
    }
    printf("\nBinary Search Result for %d: ", element);
    printf("%s", (binary_search(n, v_ordered, element) ? "FOUND" : "NOT FOUND"));
    printf("\n\n");

    // Recursive Binary Search
    printf("Vetor: ");
    for(i=0; i<n; i++){
        printf("%d ",v_ordered[i]);
    }
    printf("\nRecursive Binary Search Result for %d: ", element);
    printf("%s", (binary_search_recursive(n, v_ordered, element) ? "FOUND" : "NOT FOUND"));
    printf("\n\n");

    return 0;
}