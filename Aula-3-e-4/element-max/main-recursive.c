#include <stdio.h>

int recursive_max_value(int max_value, int sequence_size, int curr_index)
{
    int value;

    printf("Digite o %do elemento: ",curr_index);
    scanf("%d",&value);

    if(value > max_value){
        max_value = value;
    }

    if(curr_index < sequence_size){
        return recursive_max_value(max_value,sequence_size,++curr_index);      
    }
    return max_value;

}

int main()
{
    
    int sequence_size, max_value;

    printf("Digite o tamanho da sequência: ");
    scanf("%d",&sequence_size);

    max_value = recursive_max_value(0,sequence_size,1);

    printf("O maior valor é de: %d\n",max_value);

    return 0;
}
