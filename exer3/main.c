#include <stdio.h>

int main()
{

    double valor_hora, valor_hora_extra;
    double horas_trabalhadas,horas_extras;

    double salario_bruto;

    printf("Digite o valor hora: ");
    scanf("%lf",&valor_hora);

    printf("Digite o valor de horas trabalhadas: ");
    scanf("%lf",&horas_trabalhadas);

    printf("Digite o valor de horas extras: ");
    scanf("%lf",&horas_extras);

    

    valor_hora_extra = 2 * valor_hora;

    salario_bruto = (valor_hora * horas_trabalhadas) + (valor_hora_extra * horas_extras); 

    printf("======================");
    printf("\nO salário bruto vale: R$%lf",salario_bruto);

    printf("\n\n");
    system("PAUSE");

    return 0;
}