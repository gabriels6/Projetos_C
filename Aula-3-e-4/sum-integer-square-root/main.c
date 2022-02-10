#include <stdio.h>
#include <stdbool.h>

int raiz_quadrada_inteira(int k){
    int i;
    for (i = 0; i * i < k; i++); 
    return k == i * i ? i : i - 1;
}

int raiz_quadrada_inteira_v2(int k){
    int i;
    for (i = 0; i * i <= k; i++);
    return i - 1;
}

int main()
{
    int num;
    int soma_raiz = 0;
    int valor;
    printf("Digite um numero inteiro n >= 0: ");
    scanf("%d",&num);
    for(int j = 0;j < num;j++){
        printf("Digite um valor: ");
        scanf("%d",&valor);
        soma_raiz += raiz_quadrada_inteira(valor);
    }
    printf("A soma das raizes inteiras equivale a: %d",soma_raiz);
    return 0;
}
