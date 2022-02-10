#include <stdio.h>

int is_bigger_than_sum(int *arr, int *arr_end,int value) {
    int sum = 0;
    for(int *pos = arr; pos != arr_end; ++pos) {   
        sum += *pos;
    }
    return value >= sum;
}

int is_smaller_than_sum(int *arr, int *arr_end,int value) {
    int sum = 0;
    for(int *pos = arr; pos != arr_end; ++pos) {   
        sum += *pos;
    }
    return value <= sum;
}

int main() {
    int v[] = {2,1,4,2,11,10};
    int n = 0;
    int is_alt = 1;
    for (int i = 0;i < n; ++i) {
        if (is_alt) {
            if(i == 0) {
                is_alt = 1;
            } else {
                if(i%2 == 0) {
                    is_alt = is_bigger_than_sum(v,v+i,*(v+i));
                } else {
                    is_alt = is_smaller_than_sum(v,v+i,*(v+i));
                }
                
            }
        }
    }

    printf("É alternante? %s",is_alt ? "true" : "false");
}

// Par -> Maior ou igual a soma anterior
// Ímpar -> Menor ou igual a soma que vem antes