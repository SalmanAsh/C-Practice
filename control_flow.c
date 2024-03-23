#include <stdio.h>

int main(){
    // Conditionals
    int x = 0;
    if(x){
        printf("The value of x is %d\n", x);
    }else{
        printf("The value of x is %d\n", x);
    }

    // Switch Statement
    int a;

    switch(a){
        case 1: 
            printf("a is 1\n");
            break;
        case 2: 
            printf("a is 2\n");
            break;
        case 3: 
            printf("a is 3\n");
            break;
        default:
            printf("a is not 1, nor 2, nor 3\n");
            printf("a is %d\n", a);
    }

    // While loop
    int i = 5;
    while(i){
        printf("count1 = %d\n", i);
        i--;
    }

    // For loop
    for (int i = 0; i < 5; i++){
        if (!i){
            continue;
        }else{
            printf("count2 = %d\n", i);
        }
    }
    
}