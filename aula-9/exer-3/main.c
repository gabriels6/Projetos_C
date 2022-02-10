#include <stdio.h>

int *busca(int *b, int*e, int x){

    int valor_valido = 0;

    if(*b == x){
        return b;
    }

    while(b < e && valor_valido == 0){
        ++b;
        valor_valido = *b == x;
    }

    return b > e ? e : b;
}

int main(){

    int arr[] = {0,2,7,3,2,6};

    printf("%d",*busca(arr,arr+5,7));
}

