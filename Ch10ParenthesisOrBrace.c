#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define Max_lenth 100
/*外存array變數*/
char contents[Max_lenth];
int top = 0;//內容物的標記
/*function definition*/
bool is_empty(){
    return top == 0;
}
bool is_full(){
    return top == Max_lenth;
}
void push(char ch){
    if(is_full){
        exit(1);
    }else{
        contents[top++] = ch;//ch可能是[或{
    }
}
char pop(){
    if(is_empty){
        exit(1);
    }else{
        return contents[--top];
    }

}

int main(){
    char line[Max_lenth];
    char ch;
    scanf("%100s",line);
    for(int i = 0; i <= strlen(line); ++i){
        switch (line[i]){
        case '(':
        case '{':
            push(line[i]);
            break;
        case ')':
            if((ch = pop() != '(')){
                exit(1);
            }
            break;
        case '}':
            if((ch = pop() != '{')){
                exit(1);
            }
            break;    
        case '\0':
            if (is_empty()){
                printf("Parentheses/braces are nested properly\n");
            }else{
                printf("Parentheses/braces are NOT nested properly\n");
            }
            
            break;
        default:
            break;
        }

    }


    return 0;
}