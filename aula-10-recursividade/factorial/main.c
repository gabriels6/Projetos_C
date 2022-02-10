#include <stdio.h>

int factorial_recursion(int n){
    if(n == 0) return 1;

    int f = factorial_recursion(n-1);

    return f*n;
}

int main()
{
    printf("%d", factorial_recursion(10));

    return 0;
}