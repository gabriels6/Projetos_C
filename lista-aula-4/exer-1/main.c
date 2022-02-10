#include <stdio.h>
#include <math.h>

int valor_maior_k(int valor, int k){
    return valor > k ? valor : 0;
}


int main()
{
    printf("Digite um numero inteiro n >= 0: ");

    int n;
    scanf("%d", &n);

    printf("Digite um numero inteiro k: ");

    int k;
    scanf("%d", &k);

    int soma_maiores = 0;
    for (int j = 0; j < n; j++) {
        printf("Digite um valor: ");

        int valor;
        scanf("%d", &valor);
        soma_maiores += valor_maior_k(valor, k);
    }
    printf("A soma dos valores absolutos equivale a: %d", soma_maiores);
    return 0;
}