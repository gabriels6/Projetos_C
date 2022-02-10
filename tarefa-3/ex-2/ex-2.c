#include <stdio.h>

int return_positive_product(int *v, int n){

    if(n < 0) return 1;

    int product = 1;

    int i = 0;
    while(i < n){
        if(v[i] > 0){
            product *= v[i];
        }
        ++i;
    }

    return product;
}

int main(){

    int v[] = {2,1,-3,4,5,-7};
    int w[] = {2,1,3,4,5};

    printf("%d",return_positive_product(v,5));
    
}