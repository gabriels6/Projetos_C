#include <stdio.h>

int recur_sum(int value, int acc, int max)
{

    if(acc <= max){
        return recur_sum(value + acc,(acc + 1),max);
    }
    return value;
}

/* Main Function */
int main()
{  
    int acc;
    int n;

    printf("Digite um valor para n >= 0: ");
    scanf("%d",&n);

    acc = recur_sum(0,1,n);

    printf("Valor final = %d",acc);

    return 0;
}

