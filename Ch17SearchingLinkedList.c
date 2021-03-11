#include<stdio.h>
#include<stdlib.h>

struct node{
    int value;          //data stored in the node
    struct node *next;  //指向下個一樣ㄉstruc
};

//function
struct node *search_list(struct node *list, int n){
    struct node *p;

    for (p = list; p !=NULL ; p = p->next){     //p = p -> next 是以node為單位
        if (p->next == n)
            return p;
    }
    return NULL;
}