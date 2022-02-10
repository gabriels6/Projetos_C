#include <stdio.h>
#include <stdbool.h>

int verifica_sequencia(int valor_a,int valor_b){
    return (valor_a > 0 && valor_b < 0) || (valor_a < 0 && valor_b > 0);
}

int main()
{
    bool sequencia_alternante = true;

    printf("Digite um numero inteiro n >= 0: ");

    int n;
    scanf("%d", &n);

    int valor_anterior;
    for (int j = 1; j <= n; j++) {

        printf("Digite um valor: ");

        int valor;
        scanf("%d", &valor);

        if(j == 1){
            valor_anterior = valor;
        }

        if(!verifica_sequencia(valor_anterior,valor) && j > 1){
            sequencia_alternante = false;
        }

        valor_anterior = valor;

        
    }
    printf(sequencia_alternante ? "true" : "false");
    return 0;
}