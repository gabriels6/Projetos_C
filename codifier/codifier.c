#include <stdio.h>
#include <string.h>

int stringLength(char str[]){
   return 0; 
}

char getThirdChar(char str[]){
    return str[2];
}

int main(){

    char characters[] = {'_','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int cont = 0;
    char word[30];
    char coded_word[] = "";

    printf("Digite uma palavra para codificar: ");
    scanf("%s",word);

    int wordSize = strlen(word);
    int alphLength = strlen(characters);

    while(cont < wordSize){
        for(int i = 0;i < alphLength;i++){
            if(word[cont] == characters[i]){
                sprintf(coded_word,"%s%d",coded_word,i);
            }
        }
        cont++;
    }

    printf("Palavra: %s\n",coded_word);

    system("PAUSE");

    return 0;
}

