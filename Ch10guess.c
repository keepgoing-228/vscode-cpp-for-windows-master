
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Max_number 100
/*************************************************************
external variable 是神祕答案數字，也可以在main裡面喇--->2.0版  *
**************************************************************/
int secret_number;

void initialize_number_generator(void);
void choose_new_secret_number(void);
void read_guesses(void);

int main(){
    char command;
    printf("Guess the secret number between 1 and %d.\n",Max_number);
    initialize_number_generator();
    do{
        choose_new_secret_number();
        printf("A new number has been chosen.\n");
        read_guesses();
        printf("Play again? (Y/N) ");
        scanf(" %c",&command);
        //command = getchar();
        printf("\n");
    }while (command=='y'||command=='Y');
    return 0;
}

void initialize_number_generator(void){
    srand((unsigned)time(NULL));
}

void choose_new_secret_number(void){
    secret_number = rand() % Max_number + 1;
} 

void read_guesses(void){
    int guess, num_guesses = 0;
    for(;;){
        num_guesses++;
        printf("Enter guess: ");
        scanf("%d",&guess);//注意&啊啊啊啊啊啊啊啊啊
        if (guess == secret_number){
            printf("You won in %d guesses!!\n\n",num_guesses);
            return;//本來在主程式寫break現在在function中寫return
        }else if(guess<secret_number){
            printf("Too low; try again.\n");
        }else if(guess>secret_number){
            printf("Too high; try again.\n");
        }
    }
}
