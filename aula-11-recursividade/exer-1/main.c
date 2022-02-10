#include <stdio.h>
#include <stdbool.h>

bool contains_ptr(int *b, int *e, int x){
    if (e - b == 0) return false;
    int *m = b + (e-b)/2;
    return *m == x || contains_ptr(b, m, x) || contains_ptr(m + 1, e, x);
}

int main(){
    int a[] = {1, 4, 2, 3, 5, 6};
    printf("%d\n", contains_ptr(a, a+6, 4));
}