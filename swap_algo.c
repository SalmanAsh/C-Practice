#include <stdio.h>

void swap(int *a, int *b);

int main(){
    int x;
    int y;
    x = 5;
    y = 10;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    swap(&x, &y);
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


