#include <stdio.h>

int is_bigger_than_sum(int *arr, int *arr_end,int value) {
    int sum = 0;
    for(int *pos = arr; pos != arr_end; ++pos) {   
        sum += *pos;
    }
    return value >= sum;
}

int main() {
    int v[] = {2,6,6,16};
    int n = 4;
    int is_high = 1;
    for (int i = 0;i < n; ++i) {
        if (is_high) {
            if(i == 0) {
                is_high = 1;
            } else {
                is_high = is_bigger_than_sum(v,v+i,*(v+i));
            }
        }
    }

    printf("É alto? %s",is_high ? "true" : "false");
}