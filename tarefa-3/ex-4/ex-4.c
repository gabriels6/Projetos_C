#include <stdio.h>

int is_in_non_desc_order(int* v, int n){

    int is_in_non_desc_order = 1;

    if(n == 0) return 0;

    for(int i = 0; i <= n - 1; ++i){
        if(v[i] > v[i+1]){
            is_in_non_desc_order = 0;
        }
    }

    return is_in_non_desc_order;
}

int main(){

    int v[] = {2,5,7,9,9,12};
    int w[] = {2,5,6,3,10};

    printf("%s\n", is_in_non_desc_order(v,6) ? "True" : "False");
    printf("%s", is_in_non_desc_order(w,6) ? "True" : "False");
    
}