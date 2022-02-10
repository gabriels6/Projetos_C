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
    int v[] = {4,5,1,3,1,2,2,2,4,3,1};
    int n = 11;
    int value = 8;

    int comp_maior_seg = index_for_sum(v,n,value);
    int comp_seg = 0;

    for (int i = 1; i < n; ++i) {
        comp_seg = index_for_sum(v+i,n,value);
        printf("Comp seg: %d\n",comp_seg);
        if(comp_seg > comp_maior_seg) comp_maior_seg = comp_seg;
    }
    
    printf("Comprimento do maior segmento: %d", comp_maior_seg);

}