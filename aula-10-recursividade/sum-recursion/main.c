#include <stdio.h>

int sum_recursion(int n){
    // End of recursion
    if(n == 0) return 0;
    // Get the end, and make the recursion until n == 0, to end with the final value
    int sum = sum_recursion(n-1);
    // return sum;
    return sum + n;
}

int soma_dc(int b, int e) {
    if( e - b == 0 ) return 0;
    if ( e - b == 1) return b;
    int m = (b+e)/2;
    int x = soma_dc(b, m);
    int y = soma_dc(m, e);
    return x + y;
}


// Soma n-1 primeiros
int sum_arr(int *arr,int n){
    if(n == 0) return 0;
    int sum = sum_arr(arr,n-1);
    return sum + *(arr + n - 1);
}

int main()
{
    int arr[] = {2,3,1};

    printf("%d", sum_arr(arr,3));

    return 0;
}