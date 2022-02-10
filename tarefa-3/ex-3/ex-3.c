#include <stdio.h>

double return_average(double *v, int n){

    double total = 0;

    if(n <= 0) return 0; 

    int i = 0;
    while (i < n) {
        total += v[i];
        ++i;
    }
    return total/n;
}

int main(){

    double v[] = {2,1,3,4,5,7};
    double w[] = {2,1,3,4,5};

    printf("%lf",return_average(v,6));
    
}