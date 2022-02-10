#include <stdio.h>
#include <math.h>

int logaritmo_inteiro(int k){

    int i;
    int p = 0;
    for (i = 1;i <= k;i*=2){
        p++;
    }

    return p - 1;
}


int main()
{
    int num;
    int soma_log = 0;
    int valor;
    printf("Digite um numero inteiro n >= 0: ");
    scanf("%d",&num);
    for(int j = 0;j < num;j++){
        printf("Digite um valor: ");
        scanf("%d",&valor);
        soma_log += logaritmo_inteiro(valor);
    }
    printf("A soma dos logaritmos inteiros equivale a: %d",soma_log);
    return 0;
}
