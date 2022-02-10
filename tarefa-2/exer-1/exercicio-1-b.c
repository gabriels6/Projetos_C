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

    int int_roots[n];
    for(int i = 0;i < n;i++){

        int value;
        printf("Digite o %d valor:",i + 1);
        scanf("%d",&value);

        int_roots[i] = int_root(value);
    }

    for(int i = 0;i < n;i++) printf("%d ",int_roots[i]);

    return 0;
}
