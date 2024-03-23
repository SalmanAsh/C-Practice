# include <stdio.h>

int main(int argc, char **argv){
    char char_var = 12;
    int int_var = 1000;
    long long ll_var = 0x840A1231AC154;

    long long result = (char_var + int_var) + ll_var;
    printf("%lld\n", result);
    return 0;
}