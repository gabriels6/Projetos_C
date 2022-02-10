#include <stdio.h>

void switch_array(int *first_value_of_arr, int max_length){
    int cont = 11;
    for(int i = 0;i < max_length;i++){
        *(first_value_of_arr + i) += cont;
    }
}

void switch_string_array(char *first_value_of_arr, int max_length){
    char value = 'h';
    for(int i = 0;i < max_length;i++){
        *(first_value_of_arr + i) = value;
    }
}


int main() {
    char v[] = {'f','o','o','l'};

    switch_string_array(v,4);

    for(int j = 0; j < 4; j++){
        printf("%c",v[j]);
    }
}