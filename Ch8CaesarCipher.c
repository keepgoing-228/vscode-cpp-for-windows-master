#include<stdio.h>
#include<string.h>
#define N 100


int main(){
    char ch1[N],ch2[N];
    int num[N];
    int shift,len;
    int i = 0;
    //getchar()讀單個字元
    gets(ch1);//讀取一行直到換行
    scanf("%d",&shift);
    len = strlen(ch1);
    for(i=0;i<len ; i++ ){
        num[i] = (int)(ch1[i]);
        if (num[i]<123 && num[i]>96){
            num[i] += shift;
            if (num[i]>=123){
                num[i] = num[i] - 26;
            }
        }
        else if (num[i]<91 && num[i]>64){
            num[i] += shift;
            if (num[i]>90){
                num[i] = num[i] - 26;
            }
        }
        else
            num[i] =num[i];
    }

    for(i=0;i<len;i++){
        ch2[i] = (char)(num[i]);
        printf("%c",ch2[i]);//%s---字符串   %c---字符
    }
    
    return 0;
}
