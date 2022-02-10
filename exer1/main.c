#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    double area,base,altura;

    printf("Digite o comprimento da base: ");
    scanf("%lf",&base);

    printf("Digite a altura: ");
    scanf("%lf",&altura);

    area = (base * altura)/2;

    printf("Area do triangulo: %lf", area);
    printf("\n\n");

    system("PAUSE");

    return 0;
}
