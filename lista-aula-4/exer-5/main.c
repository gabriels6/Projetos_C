#include <stdio.h>
#include <stdbool.h>

int main()
{
    int comp_segmento = 0;
    int valor_anterior = -1;
    int valor = 0;

    printf("Digite um numero inteiro n >= 0: ");

    int num;
    scanf("%d", &num);


    int num_fibbonacci, n2 = 1, n1 = 1;
    for (int j = 1; j < num; j++) {
        num_fibbonacci = n2 + n1;
        n1 = n2;
        n2 = num_fibbonacci;
    }
    printf("Número na sequencia de fibbonacci: %d",num_fibbonacci);
    return 0;
}