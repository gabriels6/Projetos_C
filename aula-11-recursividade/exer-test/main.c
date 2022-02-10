#include <stdio.h>

int sum_recusive(int *arr, int arr_size){
    if(arr_size == 0) return 0;
    int sum = sum_recusive(arr,arr_size-1);
    return sum + arr[arr_size-1];
}

void sort_recursive(int *arr, int arr_size){
    if (arr_size == 0) return;
    sort_recursive(arr, arr_size-1);
    if (arr[arr_size - 1] > arr[arr_size]) {
        int temp = arr[arr_size - 1];
        arr[arr_size - 1] = arr[arr_size];
        arr[arr_size] = temp;
    }
}

void macro_sort(int *arr, int arr_size){
    if(arr_size == 0) return;
    sort_recursive(arr,arr_size);
    macro_sort(arr,arr_size-1);
}

void print_recursive(int *arr, int arr_size){
    if (arr_size == 0) return;
    print_recursive(arr, arr_size - 1);
    printf("%d ",arr[arr_size-1]);
}

int main(){
    int arr[] = {20,5,10,3,55,9,16,42};
    macro_sort(arr, 8);
    print_recursive(arr, 8);
}