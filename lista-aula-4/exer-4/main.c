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

    if(num == 0){
        printf("O comprimento é de: 0");
        return 0;
    }

    bool valor_encontrado = false;
    bool sequencia_triangular = true;
    for (int j = 0; j < num; j++) {   
        printf("Digite um valor: ");
        scanf("%d", &valor);

        if (valor_anterior < valor && !valor_encontrado) {
            valor_anterior = valor;
            ++comp_segmento;
        } else {
            valor_encontrado = true;   
        }

        if(valor_encontrado){
            if(valor_anterior < valor && sequencia_triangular == true){
                sequencia_triangular = false;
            }
            valor_anterior = valor;
        }

    }
    printf(sequencia_triangular ? "true" : "false");
    return 0;
}