#include <stdio.h>

typedef struct node {
    int value;
    struct node* node_left;
    struct node* node_right;
    int filled_right;
    int filled_left;
} node;

node* create_node(int value) {
    node* newNode = malloc(sizeof(node));
    newNode->value = value;
    newNode->filled_left = 0;
    newNode->filled_right = 0;
    newNode->node_left = malloc(sizeof(node));
    newNode->node_right = malloc(sizeof(node));
    return newNode;
}

void add_node(node* root, int value) {
    if (root->filled_left && root->filled_right) {
        if(value < root->node_right->value)
            add_node(root->node_left, value);
        else
            add_node(root->node_right, value);
    }
    // Caso não haja nodes na ramificação atual, criar node a esquerda
    if (!root->filled_left && !root->filled_right) {
        root->node_left = create_node(value);
        root->filled_left = 1;
        return;
    }
    // Node esquerdo deve ser preenchido
    if (!root->filled_left) {
        root->node_left = create_node(0);
        if(value > root->node_right->value) {  
            root->node_left->value = root->node_right->value;
            root->node_right->value = value;
        } else {
            root->node_left->value = value;
        }
        root->filled_left = 1;
        return;
    }
    // Node direito deve ser preenchido
    if (!root->filled_right) {
        root->node_right = create_node(0);
        if(value < root->node_left->value) {
            root->node_right->value = root->node_left->value;
            root->node_left->value = value;
        } else {
            root->node_right->value = value;
        }
        root->filled_right = 1;
        return;
    }
}

void print_tree(node* root){
    printf("%d ", root->value);
    if(root->filled_left){
        printf("left node of %d:", root->value);
        print_tree(root->node_left);
    }
    if(root->filled_right){
        printf("right node of %d:", root->value);
        print_tree(root->node_right);
    }
    if(!root->filled_left && !root->filled_right){
        
        return;
    } 
}


int main(){
    node* root = create_node(1);
    add_node(root,2);
    add_node(root,13);
    add_node(root,12);
    add_node(root,14);
    add_node(root,20);

    print_tree(root);
}