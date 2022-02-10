#include <stdio.h>

int return_higher_than_x(int *v, int n, int x){

    if(n < 0) return 0;

    int values_higher = 0;
    int i = 0;
    while(i < n){
        if( v[i] > x){
            ++values_higher;
        }
        ++i;
    }

    return values_higher;
}

int main(){

    int v[] = {2,1,-3,-4,5,7};

    printf("%d",return_higher_than_x(v,6,1));

}