#include <stdio.h>
#include <math.h>

int valor_absoluto(int k){
    return k < 0 ? -k : k;
}


int main()
{   
    printf("Digite um numero inteiro n >= 0: ");

    int num;
    scanf("%d", &num);

    int soma_abs = 0;
    for (int j = 0; j < num; j++) {
        printf("Digite um valor: ");

        int valor;
        scanf("%d", &valor);

        soma_abs += valor_absoluto(valor);
    }
    printf("A soma dos valores absolutos equivale a: %d",soma_abs);
    return 0;
}