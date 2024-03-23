#include <stdio.h>
int global_var;

int add_two_nums(int a, int b){
    int result = a + b;
    return result;
}

int main(){
    int x = 10;
    int y = 20;
    int s = add_two_nums(x, y);
    printf("sum of x and y is : %d\n", s);
    return 0;
}