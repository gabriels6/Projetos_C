#include <stdio.h>

int find_smallest_value_index(int *arr, int *arr_end) {
    int smallest_index = 0;
    int i = 0;
    for(int *pos = arr; pos < arr_end; ++pos) {
        if(*pos < *arr + smallest_index) smallest_index = i;
        ++i;
    }
    return smallest_index;
}

int sum_segment(int *arr, int *arr_end) {
    int sum = 0;
    for(int *pos = arr; pos < arr_end; ++pos) {
        sum += (*pos);
    }
    return sum;
}

void print_arr(int *arr, int *arr_end){
    for (int *value = arr; value < arr_end; ++value) {
        printf("%d",*value);
    }
}

int main() {
    int v[] = {4,3,1,3,3,9,2,2,2,1,1,9,-2,1};
    int n = 10;

    int s = 8;

    int comp = 0;
    int max_comp = 0;

    int small_index_found = 0;

    int smallest_index = find_smallest_value_index(v,v+n);
    int sum = 0;
    int i = 0;
    while (n - i > 0) {
        if(sum_segment(v+i,v+n) > s){
            
            ++i;
        }
        if(sum_segment(v+i,v+n) > s){
            
            --n;
        }
    }

    comp = n - i;

    printf("N: %d \nI:%d\nComp: %d", n, i,comp);
}