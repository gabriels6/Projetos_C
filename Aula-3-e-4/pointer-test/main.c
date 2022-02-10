#include <stdio.h>

void succ(int *x){
    *x = *x + 1;
}

int main(){
    int value = 5;
    succ(&value);
    printf("%d",value);
}
