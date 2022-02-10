#include <stdio.h>

int accessValue(int *n){
    *n = 92;

    return 0;
}

int main(){

    int x = 10;
    int *r = &x;

    printf("%d\n",*r);

    // Escrever em x a partir do *r

    *r = 32;

    printf("%d\n",x);

    accessValue(&x);

    printf("%d",*r);

    return 0;
}