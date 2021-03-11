/***************************
搜尋字串中的字，並更改她
****************************/
#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "this is a simple string";
    char *p;
    /*search for the simple address*/
    p = strstr(str,"simple");//strchr is for char

    strncpy(p,"sample",6);//strcpy don't need 6
    puts(str);

    return 0;
}