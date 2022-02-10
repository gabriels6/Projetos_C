#include <stdio.h>

int comp_maior_pref_cresc(int* arr,int *arr_size){

    if(arr == arr_size) return 0;
    
    int pref_size = 0;
    int value_found = 0;
    ++arr;

    for(int *pos = arr; pos < arr_size && value_found == 0; ++pos){
        ++arr;
        ++pref_size;
        value_found = *pos > *arr;
    }

    return pref_size;
}

int main(){

    int arr[] = {2,7,10,6,4,1,7,8};

    printf("%d",comp_maior_pref_cresc(arr,arr + 8));
}