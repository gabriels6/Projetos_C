#include <stdio.h>

int is_prefix(int* v, int m,int* w, int n){
    
    int is_prefix = 1;

    if(m < n) return 0;

    for (int i = 0; i <= n - 1;i++) {
        if(v[i] != w[i]){
            is_prefix = 0;
        }
    }
    return is_prefix;
}

int main(){

    int v[] = {2,1,3,4,5,7};
    int w[] = {2,1,3,4};
    int err[] = {2,1,2,3,4,5};

    printf("%s\n", is_prefix(v,6,w,4) ? "True" : "False");
    printf("%s", is_prefix(v,6,err,6) ? "True" : "False");
    
}