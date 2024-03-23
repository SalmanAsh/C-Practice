#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[50];
    char id[10];
    int age;
    int grades[5];
} Student;

typedef struct{
    int x;
    int y;
} Point;

void print_student(Student student);

int main(){
    // Student struct
    Student salman;
    strcpy(salman.name, "Salman Ashraf");
    strcpy(salman.id, "10859934");
    salman.age = 22;
    salman.grades[0] = 90;
    salman.grades[1] = 87;
    salman.grades[2] = 65;
    salman.grades[3] = 86;
    salman.grades[4] = 59;
    print_student(salman);
    printf("\n");

    // Point Struct
    Point p1 = {5, 10};
    printf("P1.x = %d\n", p1.x);
    printf("P1.y = %d\n", p1.y);
    printf("\n");

    Point p2 = {.x = 50, .y = 60};
    printf("P2.x = %d\n", p2.x);
    printf("P2.y = %d\n", p2.y);
    printf("\n");
    return 0;   
}

void print_student(Student student){
    printf("Student: \n");
    printf("Name: %s\n", student.name);
    printf("Id: %s\n", student.id);
    printf("Age: %d\n", student.age);
    printf("Grade: ");
    for (int i = 0; i < 5; i++){
        printf("%d ", student.grades[i]);
    }
    printf("\n");
}
