#include <stdio.h>

struct node{
    char *value;
    struct node* node;
};

struct node* initialize_node(char *value){

    struct node *node = malloc(sizeof(struct node));

    node->value = strdup(value);

    return node;

}

void add_node(struct node* root,char *value){

    struct node *node;

    if(root->node != NULL){
        add_node(root->node,value);
        return;
    }
    node->value = value;

    root->node = node;
    
}

void search_list_values(struct node* root){

    printf("%s->",root->value);

    if(root->node != NULL){
        search_list_values(root->node);
    }
}

int main()
{
    
    struct node *root;

    root = initialize_node("Hi");

    add_node(root,"ABC");
    // add_node(root,"DEF");

    search_list_values(root);



    return 0;
}
