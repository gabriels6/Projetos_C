#include <stdio.h>
#include <math.h>

int maiores = 0;
int iguais = 0;
int menores = 0;

void verifica_maior(int k){
    if ( k < 0 ) {
        menores++;
    } else if ( k == 0) {
        iguais++;
    } else {
        maiores++;
    }
}


int main()
{
    int num;
    
    int valor;
    printf("Digite um numero inteiro n >= 0: ");
    scanf("%d",&num);
    for(int j = 0;j < num;j++){
        printf("Digite um valor: ");
        scanf("%d",&valor);
        verifica_maior(valor);
    }

    printf("Valores menores que 0: %d\n", menores);
    printf("Valores iguais a 0: %d\n", iguais);
    printf("Valores maiores que 0: %d\n", maiores);

    return 0;
}