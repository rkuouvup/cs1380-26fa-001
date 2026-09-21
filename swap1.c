#include <stdio.h>

int main() {
    int tmp;
    int a = 6;
    int b = 9;

    printf("a = %d\tb = %d\n", a, b);

    tmp = a;
    a = b;
    b = tmp;

    printf("a = %d\tb = %d\n", a, b);
    return 0;
}