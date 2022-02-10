#include <stdio.h>

int *find_minimum_value(int *arr,int *arr_end){
    
    int *min_value = arr;

    for (int *value = arr + 2; value < arr_end; ++value) {
        if (*value < *min_value) {
            min_value = value;
        }
    }

    return min_value;
}

void sort_array_select(int *arr, int *arr_end){
    for (int *value = arr; value < arr_end; ++value) {
        int *min_value = find_minimum_value(value,arr_end);
        int temp_value = *value; *value = *min_value; *min_value = temp_value;
    }
}

void compare_value_and_switch(int *arr, int *arr_end){
    for(int *value = arr_end; value > arr && value != arr; --value){
        if(*value < *(value - 1)){
            int temp_value = *(value - 1); *(value - 1) = *value; *value = temp_value;
        }
    }
}

void sort_array_insc(int *arr, int *arr_end){
    for (int *value = arr; value < arr_end; ++value){
        compare_value_and_switch(arr,value);
    }
}

void print_arr(int *arr, int length){
    for (int *value = arr; value < arr + length; ++value) {
        printf("%d ",*value);
    }
}

int main(){

    int array[] = {2,5,7,8,1,6,3,4,9,10};

    sort_array_insc(array,array + 10);

    print_arr(array,10);

    return 0;
}

