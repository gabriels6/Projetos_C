#include <stdio.h>
#include <stdbool.h>

bool quadrado_perfeito(int k){

    int i;

    for(i = 0;i * i < k;i++); // Verifica e incrementa até que o produto de i * i fique maior do que k

    return (i * i) == k;

}

int main(int argc, char const *argv[])
{
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    printf("O valor possui quadrado perfeito?: ",quadrado_perfeito(num));
    
    return 0;
}
