#include <stdio.h>

enum Action {
    STOP, RIGHT, LEFT, UP, DOWN
};

void play(enum Action action) {
    switch(action) {
        case STOP:
            puts("播放停止動畫");
            break;
        case RIGHT:
            puts("播放向右動畫");
            break;
        case LEFT:
            puts("播放向左動畫");
            break;
        case UP:
            puts("播放向上動畫");
            break;
        case DOWN:
            puts("播放向下動畫");
            break;
        default:
            puts("不支援此動作");
    }
} 

int main() { 
    play(RIGHT);
    play(LEFT);

    return 0; 
} 