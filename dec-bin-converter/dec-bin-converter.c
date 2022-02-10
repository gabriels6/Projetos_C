/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int value;
    int cont = 1024;
    int firstNumIsOne = 0;
    
    printf("Digite um valor: ");
    scanf("%d", &value);
    
    
    
    while(cont >= 1){
        
        if(value >= cont){
            printf("1");
            value -= cont;
            firstNumIsOne = 1;
        }else{
            if(firstNumIsOne == 1){
                printf("0");
            }
        }
        
        cont /= 2;
    }

    return 0;
}
