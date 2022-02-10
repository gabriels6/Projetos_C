#include <stdio.h>

int main()
{

    int n;
    printf("Digite um valor n >= 1: ");
    scanf("%d",&n);

    int sequence[n];
    int value;
    for (int i = 0; i < n; i++) {
        printf("Digite o %d valor: ",i + 1);
        scanf("%d",&value);
        sequence[i] = value;
    }

    int higher_value = sequence[0];
    for (int i = 0; i < n; i++) {
        if(sequence[i] > higher_value) higher_value = sequence[i];
    }

    int higher_values_in_seq = 0;
    for (int i = 0; i < n; i++) {
        if(sequence[i] == higher_value) higher_values_in_seq++;
    }

    printf("O número de ocorrências do elemento máximo equivale a: %d", higher_values_in_seq);

    return 0;
}
