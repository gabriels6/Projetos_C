#include <stdio.h>

int main(){

    int freq[11];

    int n;
    printf("Digite um numero n >= 0: ");
    scanf("%d",&n);

    for(int i = 0; i < 11;i++){
        freq[i] = 0;
    }

    for(int j = 0; j < n;j++){
        int val;
        printf("Digite uma nota de 0 a 10: ");
        scanf("%d",&val);
        ++freq[val];
    }

    for(int l = 0; l < 11; l++){
        printf("A frequência do numero %d e de: %d\n", l, freq[l]);
    }


    return 0;
}