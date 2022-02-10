#include <stdio.h>

int int_root(int n)
{
    int k;
    for(k = 0; k * k <= n; k++);
    return k - 1;
}

int main()
{

    int n;
    printf("Digite um valor inteiro n >= 0: ");
    scanf("%d",&n);

    printf("A raiz inteira de n é: %d",int_root(n));
    return 0;
}
