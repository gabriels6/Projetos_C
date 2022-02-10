#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("Digite um numero inteiro n >= 0: ");

    int num;
    scanf("%d", &num);


    double n3 = 3,n2 = -2, n1 = 1;
    double num_sequencia;

    if(num == 0){
        printf("Número na sequencia: %lf",n1);
        return 0;
    }

    if(num == 1){
        printf("Número na sequencia: %lf",n2);
        return 0;
    }

    if(num == 2){
        printf("Número na sequencia: %lf",n3);
        return 0;
    }

    for (int j = 3; j < num; j++) {
        num_sequencia = (n3 + n2 + n1)/3.0;
        n1 = n2;
        n2 = n3;
        n3 = num_sequencia;
        printf("%lf %lf %lf",n3, n2, n1);
    }
    // printf("Número na sequencia: %lf",num_sequencia);
    return 0;
}