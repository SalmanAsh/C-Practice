#include <stdio.h>

int main(int argc, char **argv) { // 'char ** argv' means 'char argv[][]'

    printf("Number of command line arguments: %d\n", argc);
    
    printf("argument 0: %s\n", argv[0]);
    printf("argument 1: %s\n", argv[1]);
    printf("argument 2: %s\n", argv[2]);
    printf("argument 3: %s\n", argv[3]);
    printf("argument 4: %s\n", argv[4]);

    return 0;
}