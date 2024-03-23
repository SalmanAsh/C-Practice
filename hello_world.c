#include <stdio.h>

int main(){
    // Print
    printf("Hello, World! \n");

    // Variables
    int x = 10;
    printf("x's value: %d\n", x);

    int a; int b; int c;
    int y, z = 10;
    printf("y's value: %d\n", y);
    printf("z's value: %d\n", z);

    int d;
    printf("d's value: %d\n", d);
    d++;
    printf("d's value: %d\n", d);

    printf("a's value: %d\n", a);
    printf("b's value: %d\n", b);
    printf("c's value: %d\n", c);

    // Types
    int p = -5125;

    char my_char = 'a';

    float my_float = 1.254;

    // Arithmetic op
    int int1 = 4; 
    int int2 = 6;
    float float1 = 2.8;

    float sum1 = int1 + float1;
    printf("sum1: %f\n", sum1);
    int sum1_ = int1 + float1;
    printf("sum1: %d\n", sum1_);

    float sum2 = int2 + float1;
    printf("sum2: %f\n", sum2);
    int sum2_ = int2 + float1;
    printf("sum2: %d\n", sum2_);

    int int_res = int1 * int2 * float1;
    printf("int_res: %d\n", int_res);
    float float_res = int1 * int2 * float1;
    printf("int_res: %f\n", float_res);
    return 0;
}