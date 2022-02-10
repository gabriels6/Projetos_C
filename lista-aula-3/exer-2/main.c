#include <stdio.h>
#include <math.h>

int quadrado(int k){
    return k * k;
}


int main()
{
    printf("Digite um numero inteiro n >= 0: ");

    int num;
    scanf("%d", &num);

    int soma_sqrt = 0;
    for (int j = 0; j < num; j++) {
        printf("Digite um valor: ");

        int valor;
        scanf("%d", &valor);
        soma_sqrt += quadrado(valor);
    }
    printf("A soma dos valores absolutos equivale a: %d", soma_sqrt);
    return 0;
}