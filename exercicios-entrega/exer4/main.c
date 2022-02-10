#include <stdio.h>

int main()
{
    
    int a,b;
    double r;

    printf("Digite um valor inteiro A: ");
    scanf("%d",&a);

    printf("Digite um valor inteiro B: ");
    scanf("%d",&b);

    r = (3 * a + 2 * b)/((a + b) * 1.0) ;

    printf("======================");
    printf("\nO resultado de (3A + 2B)/(A + B) = %lf",r);

    printf("\n\n");
    system("PAUSE");

    return 0;
}