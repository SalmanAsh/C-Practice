# include <stdio.h>
# include <stdlib.h>

typedef struct
{
    int x;
    int y;
} Point;

int main(){
    Point p1;
    p1.x = 3;
    p1.y = 2;
    printf("p1: (%d, %d) \n", p1.x, p1.y);

    // Use of arrow notation
    Point *p2;
    p2 = &p1;

    p2 -> x = 5; // (*p2).x
    p2 -> y = 4; // (*p2).y
    printf("p1: (%d, %d) \n", p1.x, p1.y);
    printf("p2: (%d, %d) \n", p2->x, p2->y);

    // Dynamic Space allocation
    Point *p3;
    p3 = malloc(sizeof(Point)); // Ocuupy enough space to store something as large as Point
    p3 -> x = 5;
    p3 -> y = 10;
    printf("p3: (%d, %d) \n", p3->x, p3->y);
    (*p3).x = 15;
    (*p3).y = 20;
    printf("p3: (%d, %d) \n", p3->x, p3->y);

    return 0;
}