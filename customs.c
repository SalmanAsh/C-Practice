#include <stdio.h>
#include <string.h>


// Custom Data type
typedef long long unsigned int my_int;

// Custom Data Structures
struct person {
    char name[10];
    float height;
    int weight;
};

void print_person(struct person p){
    printf("name: %s\n", p.name);
    printf("height: %f\n", p.height);
    printf("Wwight: %d\n", p.weight);
}

int main(){
    struct person p1;
    strcpy(p1.name, "Salman");
    p1.weight = 60;
    p1.height = 1.80;
    print_person(p1);
}