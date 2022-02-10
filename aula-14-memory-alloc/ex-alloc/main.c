#include <stdio.h>

int* alloc_number(){
    int* v = malloc(1 * sizeof(int));
    return v;
}

int disalloc_number(int* n){
    int v = *n;
    free(n);
    return v;
}

int main(){
    int* v = alloc_number();
    *v = 2;
    printf("%d",*v);
    printf("%d",disalloc_number(v));
}