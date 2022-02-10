#include <stdio.h>

int sum_array(int *v, int n){
    int sum = 0;
    for (int i = 0;i < n; i++){
        sum += *(v + i);
    }
    return sum;
}

int sum_array_v2(int *v, int n){
    int s = 0;
    for(int *p = v; p < v + n; ++p) s += *p;
    return s;
}

int sum_pos_array(int *v, int n){
    int sum = 0;
    for(int *p = v; p < v + n; ++p) sum += *p > 0 ? *p : 0;
    return sum;
}

int main() {

    int v[] = { -4, 3, 1, 2, 8, 1, 7, 6, 5};
    printf("%d\n",sum_pos_array(v,4));

    return 0;
}