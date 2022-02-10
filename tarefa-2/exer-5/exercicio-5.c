#include <stdio.h>
#include <stdbool.h>

int get_zero_seq_size(int *sequence, int n){
    int seq_size = 0;
    bool seq_found = false;
    for(int *p = sequence; p < sequence + n; ++p){
        if(!seq_found){
            ++seq_size;
            seq_found = *p == 0;
        }
    }
    return seq_size;
}

int main()
{
    int n;
    printf("Digite um valor n >= 0: ");
    scanf("%d",&n);

    int sequence[n];
    int value;
    for (int i = 0; i < n; i++) {
        printf("Digite o %d valor: ",i + 1);
        scanf("%d",&value);
        sequence[i] = value;
    }

    printf("A sequência terminada em 0 tem comprimento: %d", get_zero_seq_size(sequence,n));

}