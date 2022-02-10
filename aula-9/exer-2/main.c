#include <stdio.h>

void partition(int *b, int *e, int x){
    int *i = b;
    for( int*k = b; k != e; ++k){
        if (*k < x){
            int tmp = *k;
            *k = *i;
            *i = tmp;
            ++i;
        }
    }
}

void print_arr(int *arr, int *arr_end){
    for(int *pos = arr; pos != arr_end; ++pos){
        printf("%d,",*pos);
    }
}

int main(){

    int arr[] = {2,9,10,6,4,1,7,8};

    partition(arr,arr + 8,6);

    print_arr(arr,(arr+8));
}