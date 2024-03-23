#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    // int b = 42;
    // int *a = &b;

    // printf("Pointer value: %p\n", a); 
    // printf("Pointed value: %d\n", *a); 

    // int a, b, c;
    // a = b = c = 0;
    // printf("Enter 3 numbers: ");
    // scanf("%d %d %d", &a, &b, &c);
    // printf("Result: %d\n", a + b + c);

    // printf("size of int b = %ld\n", sizeof(b));
    // printf("size of int b = %ld\n", sizeof(a));
    // printf("\n");

    int *a;
    int length = 0;
    printf("Enter  a length: ");
    scanf("%d", &length);
    a = malloc(length * sizeof(int));
    
    for (int i = 0; i < length; i++){
        a[i] = i;
    }

    for (int i = 0; i < length; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    free(a);
    return 0;
    
    
}