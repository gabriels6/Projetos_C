#include <stdio.h>

int count_divisible_values_in_arr(int *sequence,int n){
    int values = 0;
    for (int i = 0; i < n; i++) {
        if (sequence[i] % 3 == 0) {
            values++;
        } 
    }
    return values;
}

int main()
{

    int n;
    printf("Digite um valor n >= 0: ");
    scanf("%d",&n);

    int sequence[n];
    int value;
    for (int i = 0; i < n; i++) {
        printf("Digite o %d valor: ",i + 1);
        scanf("%d",&value);
        sequence[i] = value;
    }

    int divisible_values = count_divisible_values_in_arr(sequence,n);
    printf("A qtde. de elementos divisíveis por 3 é de: %d",divisible_values);

    return 0;
}