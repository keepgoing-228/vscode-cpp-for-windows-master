#include<stdio.h>
/*
int main(){
    char ch;
    int i;
    for (i = 0 ; i < 3 ; i++){
        ch = getchar();//文字輸入用，scanf較慢
        printf("%c\n",ch);
    }

    return 0;
}
*/

/*
int main (){
    char ch;
    ch = getchar();
    while (ch != '\n'){
        if (ch == ' '){
            putchar(ch);
        }else{
            putchar(ch + 1);
        }
        ch = getchar();//可以重複的code不要擔心
    }

    return 0;
}
*/

int main(){
    char ch;
    int len = 0;
    printf("Enter a message: ");
    ch = getchar();
    while (ch != '\n'){
        if (ch != ' '){
            len++;
        }
                    
        ch = getchar();
    }
    printf("Your message was %d character(s) long.\n",len);
    return 0;
}
