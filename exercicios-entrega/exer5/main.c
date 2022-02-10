#include <stdio.h>
#include <math.h>

int main()
{
    
    double R,pi,area_circulo,volume_esfera;

    pi = 3.14159;

    printf("Digite o número real do raio R: ");
    scanf("%lf",&R);

    area_circulo = pi * (R * R);

    volume_esfera = (4.0 * pi * pow(R,3))/3.0;

    printf("========================");
    printf("\nArea do circulo = %.3f",area_circulo);
    printf("\nVolume da esfera = %.3f",volume_esfera);

    printf("\n\n");
    system("PAUSE");

    return 0;
}