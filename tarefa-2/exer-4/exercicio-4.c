#include <stdio.h>

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

    int divisible_values[3];
    for (int i = 0; i < 3; i++) divisible_values[i] = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            if(sequence[j] % 3 == i) divisible_values[i]++;
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("O numero de elementos divisiveis por 3 com resto %d é de %d\n",i, divisible_values[i]);
    }

}