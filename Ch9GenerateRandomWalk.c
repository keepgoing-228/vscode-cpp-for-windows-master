#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

#define row 10
#define col 10

void generate_randon_walk(char walk[row][col]);
void print_array(char walk[row][col]);


int main(){
    char g[row][col];

    generate_randon_walk(g);
    print_array(g);
    
    return 0;
}

void generate_randon_walk(char walk[row][col]){
    int r, c;
    int move, num_tries;
    int alpha = 'A';
    bool moved = true;

    // initialise grid
    for(r = 0; r < row; ++r){
        for (c = 0; c < col; ++c){
            walk[r][c]= '.';
        }
    }
    srand((unsigned) time(NULL));
    r = rand()% row;
    c = rand()% col;

    // place letters onto grid
    for(alpha = 'A'; alpha <= 'Z'; ++alpha){
        move = (rand()% row) % 4;
        moved = false;
        num_tries = 0;
        do {
            printf("move: %d, ",move);
            switch (move){
            case 0://left
                if(r > 0 && walk[r-1][c]=='.'){
                    --r;
                    moved = true;
                }else{
                    ++move;
                    ++num_tries;
                }
                break;
            case 1://right
                if (r < row-1 && walk[r+1][c]=='.'){
                    ++r;
                    moved = true;
                }else{
                    ++move;
                    ++num_tries;
                }
                break;
            case 2://up
                if (c > 0 && walk[r][c-1]=='.'){
                    --c;
                    moved = true;
                }else{
                    ++move;
                    ++num_tries;
                }
                break;
            case 3://down
                if(c < col -1 && walk[r][c+1]=='.'){
                    ++c;
                    moved = true;
                }else{
                    move=0;
                    ++num_tries;
                }
                break;
            default:
                break;
            }
            printf("moved: %s\n", moved?"true":"false");
        }while(!moved && num_tries < 4);
    
        if(moved){
            walk[r][c] = alpha;
        }else{break;}
            
        }

    return;
    }

void print_array(char walk[row][col]){
    int r, c;

    for(r = 0 ; r < row; ++r){
        for(c = 0; c < col; ++c){
            printf("%c", walk[r][c]);
        }
        printf("\n");
    }

    return;
}