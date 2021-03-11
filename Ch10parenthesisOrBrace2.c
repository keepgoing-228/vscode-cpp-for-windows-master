#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define Max_lenth 100
/*外存array變數*/
char contents[Max_lenth];
int top = 0;//內容物的標記
/*function definition*/
void make_empty(){
    top= 0;
}
bool is_empty(){
    return top == 0;
}
bool is_full(){
    return top == Max_lenth;
}
void push(int i){
    if(is_full){
        exit(1);
    }else{
        contents[top++] = i;//ch可能是[或{
    }
}
int pop(){
    if(is_empty){
        exit(1);
    }else{
        return contents[--top];
    }

}

int main(){
    char line[Max_lenth];
    int i;
    while((i = getchar()) != '\n'){
        switch (i){
        case '(':
        case '{':
            push(i);
            break;
        case ')':
            if((i = pop()) != '('){
                exit(1);
            }
            break;
        case '}':
            if((i = pop()) != '{'){
                exit(1);
            }
            break;    
        default:
            break;
        }
    }
    
    if (is_empty()){
        printf("Parentheses/braces are nested properly\n");
    }else{
        printf("Parentheses/braces are NOT nested properly\n");
    }
    return 0;
}