#include <stdio.h>

int main(){
    // One Dimensional
    int my_array[4];

    printf("my_array[%d] contains %d\n", 0, my_array[0]);
    printf("my_array[%d] contains %d\n", 1, my_array[1]);
    printf("my_array[%d] contains %d\n", 2, my_array[2]);
    printf("my_array[%d] contains %d\n", 3, my_array[3]);

    // Multi Dimensional
    int my_2D_array[3][2];
    my_2D_array[0][0] = 3;
    my_2D_array[0][1] = 4;
    my_2D_array[1][0] = 5;
    my_2D_array[1][0] = 4;
    my_2D_array[2][0] = 5;

    printf("my_2D_array[0][0] contains %d\n", my_2D_array[0][0]);
    printf("my_2D_array[2][1] contains %d\n", my_2D_array[2][1]);

    // Static Initialisation
    int my_array2[] = {1, 2, 3, 4};
    return 0;

}