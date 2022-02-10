#include <stdio.h>

typedef struct node {
    int value;
    struct node* next;
    int filled;
} node;

void add_node(node* root, int value){
    if(!root->filled) {
        node* newValue = malloc(1 * sizeof(node));
        newValue->value = value;
        newValue->next = newValue;
        newValue->filled = 0;
        root->filled = 1;
        root->next = newValue;
        return;
    }
    add_node(root->next,value);
}

void remove_last(node* root){
    if(root->filled && !root->next->filled) {
        free(root->next);
        root->filled = 0;
        return;
    }
    remove_last(root->next);
}

void print_list(node* root){
    if(!root->filled) {
        printf("%d ",root->value);
        return;
    }
    printf("%d ",root->value);
    print_list(root->next);
}

int main(){

    node* root = malloc(sizeof(node));
    root->value = 3;
    root->filled = 0;
    add_node(root,5);
    add_node(root,6);
    add_node(root,18);
    remove_last(root);
    print_list(root);
}