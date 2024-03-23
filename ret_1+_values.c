#include <stdio.h>

int multiply_and_divide(int n1, int n2, int *product, int *quotient){
    if (n2 == 0) return -1;

    *product = n1 * n2;
    *quotient = n1 / n2;
    return 0;
}
int main(int argc, char **argv){
    int p, q, a = 5, b = 0;
    if (multiply_and_divide(a, b, &p, &q) == 0){
        printf("%d * %d = %d\n", a, b, p);
        printf("%d / %d = %d\n", a, b, q);
    }else printf("Impossible Operation.\n");
}