#include <stdio.h>

int main()
{
    
    int A,B,C,D,soma;
    double media;

    printf("Digite um valor inteiro A: ");
    scanf("%d",&A);

    printf("Digite um valor inteiro B: ");
    scanf("%d",&B);

    printf("Digite um valor inteiro C: ");
    scanf("%d",&C);

    printf("Digite um valor inteiro D: ");
    scanf("%d",&D);

    soma = A + B + C + D;
    media = (A + B + C + D)/4.0;

    printf("=================");
    printf("\nValor da soma: %d",soma);
    printf("\nValor da media: %lf",media);

    printf("\n\n");
    system("PAUSE");

    return 0;
}
