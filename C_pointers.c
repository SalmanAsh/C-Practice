#include <stdio.h>

void printAge(int *pAge){
    printf("You are %d years old. \n", *pAge);
    printf("Your age is stored at address %p \n", pAge);
}

int main(){
    int age = 22;
    int *pAge = &age;

    printf("Address of age: %p\n", &age);
    printf("Value of pAge: %p\n", pAge);

    printf("Value of age: %d \n", age);
    printf("Value store at address pAge: %d \n", *pAge);

    printf("Size of age: %lu bytes\n", sizeof(age));
    printf("Size of pAge: %lu bytes\n", sizeof(pAge));

    printAge(pAge);
    return 0;
}