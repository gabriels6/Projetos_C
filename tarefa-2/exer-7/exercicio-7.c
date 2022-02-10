#include <stdio.h>
#include <stdbool.h>

int get_zero_seq_sum(int *sequence, int n){
    int seq_sum = 0;
    bool seq_found = false;
    for(int *p = sequence; p < sequence + n; ++p){
        if(!seq_found){
            seq_sum += *p;
            seq_found = *p == 0;
        }
    }
    return seq_sum;
}

int main()
{
    int n;
    printf("Digite um valor n >= 1: ");
    scanf("%d",&n);

    int sequence[n - 1];
    int value;
    for (int i = 0; i < n - 1; i++) {
        printf("Digite o %d valor: ",i + 1);
        scanf("%d",&value);
        sequence[i] = value;
    }

    // Verificar para cada valor do array se ele está na sequencia
    // senão, colocar como abscent_number
    int abscent_number = 0;
    bool value_found = false;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < n - 1; j++) {
            if (value_found == false) {
                value_found = sequence[j] == i;
            }
        }
        if (value_found == false) {
            abscent_number = i;
        }
        value_found = false;
    }

    printf("Número ausente: %d",abscent_number);
    
}