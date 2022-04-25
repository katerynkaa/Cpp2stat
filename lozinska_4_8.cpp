//task 3.17
#include <stdio.h>
#include <math.h>

struct xy {
    int x, y;
};


int intersection(xy lb_1, xy ru_1, xy lb_2, xy ru_2){
    
    if (lb_1.x < lb_2.x && lb_1.y < lb_2.y) {
        if (lb_2.x < ru_1.x && lb_2.y < ru_1.y) {
            printf("The squares intersect\n");
            return 1;}
    }

    if (lb_1.x < lb_2.x && lb_1.y > lb_2.y) {
        if (ru_1.x < ru_2.x && ru_1.y > ru_2.y) {
            printf("The squares intersect\n");
            return 2;}
    }

    if (lb_2.x < lb_1.x && lb_2.y < lb_1.y) {
        if (lb_1.x < ru_2.x && lb_1.y < ru_2.y) {
            printf("The squares intersect\n");
            return 3;}
    }

    if (lb_1.x > lb_2.x && lb_1.y < lb_2.y) {
        if (ru_1.x > ru_2.x && ru_1.y < ru_2.y) {
            printf("The squares intersect\n");
            return 4;}
    
    }

    printf("The squares don`t intersect\n");
}

int pts(xy lb_1, xy ru_1, xy lb_2, xy ru_2, int t) {
    if (t == 1) {
        printf("Left bottom point coords (%i, %i)\n", lb_2.x, lb_2.y);
        printf("Right upper point coords (%i, %i)\n", ru_1.x, ru_1.y);
    }

    if (t == 2) {
        printf("Left bottom point coords (%i, %i)\n", lb_2.x, lb_1.y);
        printf("Right upper point coords (%i, %i)\n", ru_1.x, ru_2.y);
    }

    if (t == 3) {
        printf("Left bottom point coords (%i, %i)\n", lb_1.x, lb_1.y);
        printf("Right upper point coords (%i, %i)\n", ru_2.x, ru_2.y);
    }

    if (t == 4) {
        printf("Left bottom point coords (%i, %i)\n", lb_1.x, lb_2.y);
        printf("Right upper point coords (%i, %i)\n", ru_2.x, ru_1.y);
    }

    return 0;
}

int main(){
    xy lb_1 = { 2, 8 }, ru_1 = { 5, 11 };
    xy lb_2 = { 1, 9 }, ru_2 = { 4, 12 };

    int t = intersection(lb_1, ru_1, lb_2, ru_2);
    printf("Type of intersection: %i\n", t);
    pts(lb_1, ru_1, lb_2, ru_2, t);

}