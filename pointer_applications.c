#include <stdio.h>

void add_one(int *param){
    (*param)++;
}

int main(){
    int x = 20;

    printf("x before call: %d\n", x);
    add_one(&x);
    printf("x after call: %d\n", x);
}