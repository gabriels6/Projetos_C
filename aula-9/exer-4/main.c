#include <stdio.h>

void verify_even(int *b, int*e){

    while (b <= e) {
        *b = *b%2 == 0 ? 0 : 1;
        ++b;
    }
}

void print_arr(int *arr, int *arr_end){
    for (int *pos = arr; pos != arr_end; ++pos) {
        printf("%d,",*pos);
    }
}

int main(){

    int arr[] = {10,5,7,1,6,8};

    verify_even(arr,arr+6);

    print_arr(arr,arr+6);
}