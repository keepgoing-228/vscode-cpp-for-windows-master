#include<stdio.h>
#include<stdlib.h>

struct node{
    int value;          //data stored in the node
    struct node *next;  //指向下個一樣ㄉstruc
};

//function
struct node *delete_from_list(struct node *list, int n){
    struct node *cur, *prev;
    for (cur = list, prev = NULL;
        cur != NULL && cur->value != n;
        prev = cur, cur = cur->next)
    ;
    if(cur == NULL)
        return list;            //n was not found
    if(prev == NULL)
        list = list->next;      //n was in the first node
    else
        prev->next = cur->next;
    free(cur);
    return list;
}