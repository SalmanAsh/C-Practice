#include <stdio.h>

void negate_int_array(int *ptr, int size){
    for(int i = 0; i < size; i++){
        ptr[i] = -ptr[i];
    }
}

int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int length = sizeof(array) / sizeof(array[0]);
    printf("Before call: \n");
    for(int i = 0; i < length; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    negate_int_array(array, length);
    printf("After call: \n");
    for(int i = 0; i < length; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    printf("\n");
    printf("\n");

    int int_array[2] = {1, 2};
    double double_array[2] = {4.2, 2.4};
    char char_array[] = "ab";

    printf("INT ARRAY\n");
    printf("int_array[0]: %d\n", int_array[0]);
    printf("int_array[1]: %d\n", int_array[1]);
    printf("int_array: %p\n", int_array);
    printf("*(int_array[0]): %p\n", &int_array[0]);

    printf("*(int_array + 0): %d\n", *(int_array + 0));
    printf("*(int_array + 1): %d\n", *(int_array + 1));

    printf("\n");
    printf("Double Array\n");
    printf("double_array[0]   = %f\n", double_array[0]);
    printf("double_array[1]   = %f\n", double_array[1]);
    printf("*(double_array+0) = %f\n", *(double_array+0));
    printf("*(double_array+1) = %f\n", *(double_array+1));

    printf("\n");
    printf("Double Array\n");
    printf("char_array[0]     = %c\n", char_array[0]);
    printf("char_array[1]     = %c\n", char_array[1]);
    printf("*(char_array+0)   = %c\n", *(char_array+0));
    printf("*(char_array+1)   = %c\n", *(char_array+1));



}