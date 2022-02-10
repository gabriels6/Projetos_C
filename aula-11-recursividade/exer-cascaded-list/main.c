#include <stdio.h>

struct Value{
    int price;
    struct Value *next_value;
};

void print_list(struct Value *list) {
    if(list->next_value == NULL){
        return;
    }
    printf("%d ", list.price);
    print_list(list->next_value);
}

int main(){
   
    struct Value list;
    value.price = 3;
    value.next_value = NULL;

    print_list(list);

    return 0;
}