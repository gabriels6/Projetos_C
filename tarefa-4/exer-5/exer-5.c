#include <stdio.h>

int get_minimum_value_for_sum(int value, int sum) {
    if(sum == value || value > sum) return 0;
    return sum - value;
}

void print_arr(int *arr, int *arr_end) {
    while (arr != arr_end) {
        printf("%d ",*arr);
        ++arr;
    }
}

int main() {
    int v[] = {4,2,5,1};
    int n = 4;
    int w[n];
    for (int i = 0; i < n;++i){
        if(i == 0) {
            w[i] = 0;
        } else {
            w[i] = get_minimum_value_for_sum(v[i],v[i-1]);
        }
    }
    print_arr(w,w+4);
}