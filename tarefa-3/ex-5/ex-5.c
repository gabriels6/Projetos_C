#include <stdio.h>

int is_in_non_desc_order(int* b, int* e){

    int is_in_non_desc_order = 1;

    for(int *p = b; p != e - 1; ++p){
        if(*p > *(p+1)){
            is_in_non_desc_order = 0;
        }
    }

    if (*(e-1) > *(e)) {
        return 0;
    }

    return is_in_non_desc_order;
}

int main(){

    int v[] = {2,5,7,9,9,12};
    int w[] = {2,5,6,3,10};

    printf("%s\n", is_in_non_desc_order(v,v+6) ? "True" : "False");
    printf("%s", is_in_non_desc_order(w,w+5) ? "True" : "False");
    
}