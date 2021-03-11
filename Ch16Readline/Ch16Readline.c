#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include"Ch16Readline.h"

int read_line(char str[],int n){
    int ch, i = 0;

    while(isspace(ch = getchar()))  //確認ch是不是空白字元
        ;
    while(ch != '\n' && ch != EOF){
        if (i < n){
            str[i++]= ch;
        }
        ch = getchar();
    }
    str[i]= '\0';
    return i;
}