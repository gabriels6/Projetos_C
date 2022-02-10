#include <stdio.h>

int max_arr(int *arr, int arr_size){
    if(arr_size == 1) return arr[0];
    int m = max_arr(arr,arr_size-1);
    return m >= arr[arr_size - 1] ? m : arr[arr_size - 1];
}

int max_arr_dc(int *arr, int arr_size){
    if(arr_size == 1) return arr[0];
    int mid = arr_size/2;
    int first_problem = max_arr(arr,arr_size-mid);
    int second_problem = max_arr(arr+mid,arr_size);
    return first_problem > second_problem ? first_problem : second_problem;
}

int main(){

    int arr[] = {1,5,2,3,9};
    printf("%d\n", max_arr(arr, 5));

}