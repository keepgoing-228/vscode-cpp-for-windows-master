#include<stdio.h>
#include<stdlib.h>

struct node{
    int value;          //data stored in the node
    struct node *next;  //指向下個一樣ㄉstruc
};

//把main的內容概念換成function的內容
struct node *add_to_list(struct node *list, int n);
struct node *read_numbers(void);

int main(){
    /*************************************
    struct node *first;
    first = NULL;
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof (struct node));
    new_node->value = 10;       //等於(*new_node).value = 10;
    new_node->next = first;
    first = new_node;

    new_node = (struct node*)malloc(sizeof (struct node));
    new_node->value = 20;
    new_node->next = first;
    first = new_node;
     * ***********************************/
    return 0;
}

struct node *add_to_list(struct node *list, int n){
    struct node *new_node;

    new_node = (struct node*)malloc(sizeof(struct node));
    if (new_node == NULL){
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }
    new_node->value = n;
    new_node->next = list;
    return new_node;
}

struct node *read_numbers(void){
    struct node *first = NULL;
    int n;

    printf("Enter a series of integers(0 to terminate): ");
    for (;;){
        scanf("%d", &n);
        if(n == 0){
            return first;
        }
        first = add_to_list(first,n);
    }
}
