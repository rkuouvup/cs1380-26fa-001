#include <stdio.h>

int square(int);    // function prototype/declaration

int main() {
    int result = square(5);
    printf("squre of 5 is %d\n", result);
    return 0;
}
// return_type func_name(parameters)
int square(int x) { // function definition
    return x * x;
}