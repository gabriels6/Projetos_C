#include <stdio.h>
#include <stdbool.h>

int main()
{
    int comp_segmento = 1;
    int comp_maior_segmento = 0;

    int valor_anterior;
    int valor = 0;

    printf("Digite um numero inteiro n >= 0: ");

    int num;
    scanf("%d", &num);

    if(num == 0){
        printf("O comprimento é de: 0");
        return 0;
    }

    for (int j = 0; j < num; j++) {   

        if( j == 1 ) {
            printf("Digite um valor: ");
            scanf("%d", &valor_anterior);
        } else {
            printf("Digite um valor: ");
            scanf("%d", &valor);
        }

        if (valor_anterior < valor) {
            valor_anterior = valor;
            ++comp_segmento;
        } else {
            valor_anterior = valor;
            if(comp_segmento > comp_maior_segmento){
                comp_maior_segmento = comp_segmento;
            }
            comp_segmento = 1;
        }
    }
    
    if(comp_maior_segmento == 0){
        comp_maior_segmento = comp_segmento;
    }

    printf("O comprimento é de: %d", comp_maior_segmento);
    return 0;
}