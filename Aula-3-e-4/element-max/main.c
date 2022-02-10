#include <stdio.h>

int main()
{
    int sequence_size, max_value = 0;

    printf("Digite o tamanho da sequência: ");
    scanf("%d",&sequence_size);

    for (int i = 1;i <= sequence_size; ++i){

        int value;

        printf("Digite o %do elemento: ",i);
        scanf("%d",&value);

        if(value > max_value){
            max_value = value;
        }
    }

    printf("O maior valor da sequência equivale a: %d\n",max_value);

    return 0;
}
