#include <stdio.h>

int main()
{
    int sequence_size, sequence_sum, value_index, value;

    sequence_sum = 0;
    value_index = 1;

    printf("Digite o tamanho da sequência: ");
    scanf("%d",&sequence_size);

    while(value_index <= sequence_size){
        printf("Digite o %do valor da sequencia: ", value_index);
        scanf("%d",&value);

        sequence_sum += value;
        value_index++;
    }

    printf("A soma da sequência equivale a: %d\n",sequence_sum);

    return 0;
}

