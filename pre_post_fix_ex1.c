#include <stdio.h>

int main() {
    int a;
    int b = 8;
    a = b++;    //b++ ==> b = b+1
                //a = b;  ==>  b++;
    //a = ++b;    // b++;  ==> a = b;

    printf("a: %d ; b: %d\n", a, b);
    printf("a: %d ; b: %d\n", ++a, ++b);
    printf("a: %d ; b: %d\n", a, b);
    return 0;
}