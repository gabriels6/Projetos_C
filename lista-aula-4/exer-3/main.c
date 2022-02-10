#include <stdio.h>
#include <stdbool.h>

int valor_e_maior_ou_igual(int suposto_maior, int suposto_menor){
    return suposto_maior >= suposto_menor;
}

int main()
{
    bool soma_consistente = true;


    printf("Digite um numero inteiro n >= 0: ");

    int n;
    scanf("%d", &n);

    int soma_numeros;

    printf("Digite um valor: ");

    int valor;
    scanf("%d", &valor);

    soma_numeros = valor;

    for (int j = 1; j < n && n > 0; j++) {

        printf("Digite um valor: ");

        scanf("%d", &valor);

        if(!valor_e_maior_ou_igual(valor,soma_numeros)){
            soma_consistente = false;
        }

        soma_numeros += valor;
    }
    printf(soma_consistente ? "true" : "false");
    return 0;
}