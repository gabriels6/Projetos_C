#include <stdio.h>

int index_for_sum(int *arr, int n, int s) {
    int sum = 0;
    int selected_index = 0;
    if (n == 0) return 0;
    for(int i = 0; i < n; ++i) {
        if(sum <= s) {
            sum += arr[i];
            selected_index = i;
        }
    }
    return selected_index;
}

int bigger_index_for_sum() {

}

int main() {
    int v[] = {4,1,-3,5,12,4};
    int n = 6;
    
    printf("Maior índice: %d", index_for_sum(v,n,8));

}