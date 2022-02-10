#include <stdio.h>

int main()
{
    int acc;
    int n;

    printf("Digite um valor para n >= 0: ");
    scanf("%d",&n);

    acc = recursive_factor(1,1,n);

    printf("%d! = %d",n, acc);

    return 0;


    return 0;
}

int recursive_factor(int value,int acc, int max){
    if(acc < max){
        return recursive_factor(value * acc,++acc,max);
    }
    return value;
}
