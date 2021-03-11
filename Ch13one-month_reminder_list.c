#include<stdio.h>
#include<string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[],int n);

int main(){
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3];
    char msg_str[MSG_LEN + 1];
    int day, i, j, num_remind = 0;

    for(;;){
        if (num_remind == MAX_REMIND){
            printf("No space left");
            break;
        }
        /*  輸入   */
        printf("Enter day and reminder: ");
        scanf("%2d", &day);
        read_line(msg_str,MSG_LEN);

        

    }


    return 0;
}

int reed_line(char str[], int n){
    int i = 0,ch;
    
    while((ch = getchar()) != '\n'){
        if (i< n){
            str[i++]= ch;
        }
    str[i]= '\0';     /*  array of str has \0  */
    }
    return i;         /*  number of characters stored*/
}