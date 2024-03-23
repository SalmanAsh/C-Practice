#include <stdio.h>

typedef struct {
    double a;
    double b;
    double c;
    double d;
    double e;
    double f;
} large_struct;

void f(large_struct *s){
    (*s).a = 42.0;
}

int main(){
    large_struct x = {1, 2, 3, 4, 5, 6};
    printf("Before call: x.a = %f\n", x.a);
    f(&x);
    printf("After call: x.a = %f\n", x.a);
    return 0;
}