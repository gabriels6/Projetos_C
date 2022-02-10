#include <stdio.h>

int verify_sum_of_values(int *value_in_arr,int sum,int *arr, int *arr_end){
    int has_sum_equivalent = 0;
    for(int *value = arr; value < arr_end && !has_sum_equivalent; value++){
        has_sum_equivalent = *value_in_arr + *value == sum && value != value_in_arr;
    }
    return has_sum_equivalent;
}

int find_sum(int sum, int *arr, int *arr_end){
    int has_sum = 0;
    for(int *value = arr; value < arr_end && !has_sum; value++){
        has_sum = verify_sum_of_values(value,sum,arr,arr_end);
    }
    return has_sum;
}

// Encontrar dois valores tais que a soma dê o valor solicitado
// Dois valores não podem ser iguais
// Opção: pega um valor e verifica se a soma dos próximos resulta
int main()
{
    int array[] = {2,6,1,3,-2,7,-4};
    int val_solic = 14;

    printf("%s", find_sum(val_solic,array,array + 7) ? "true" : "false");

    return 0;
}
