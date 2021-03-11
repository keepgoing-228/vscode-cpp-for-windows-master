/*********************
 * first in first out想像成為一個水管
 * ******************/
#include<stdio.h>
#include<stdbool.h>  
#define QUEUE_SIZE 100
/* external variables */
int contents[QUEUE_SIZE];
int head, tail;

void init_make_empty(void){
	head = 0;
    tail = 0;
}

bool is_empty(void){
    if(head%QUEUE_SIZE == tail%QUEUE_SIZE)
        return 1;
    return 0;
}

bool is_full(void){
	if((tail+1)%QUEUE_SIZE == head)
        return 1;
    return 0;
}

void enqueue(int i){
    int num;
	if (! is_full()){
        scanf("%d",&num);
        tail++;
        tail %= QUEUE_SIZE;//重複用
        contents[tail] = num;
    }

}

int dequeue(void){
    if (! is_empty()){
        head++;
        head %= QUEUE_SIZE;
        return contents[head];
    }
}

void release(){
    for(int i = (head+1)%QUEUE_SIZE; i != (tail+1)%QUEUE_SIZE; ){
        contents[i] = -1;
        i++;
        i%= QUEUE_SIZE;
    }
}

void display(){
	for(int i = (head+1)%QUEUE_SIZE; i != (tail+1)%QUEUE_SIZE;){
		printf("%d ",contents[i]);
		i++;
		i%= QUEUE_SIZE;
	}
	printf("\n");
}
