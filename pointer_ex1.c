#include <stdio.h>

int main() {
    int a = 50;
    //int b, c;
    int* p = &a;    // integer pointer declaration
    int* x, y;  // x is an integer pointer, but y is an integer
    printf("a: %d\n", a);
    printf("The address of variable a is %p\n", &a);    // reference operator
    printf("p: %p\n", p);
    printf("The address of variable p is %p\n", &p);
    printf("The value that p is pointing to is %d\n", *p); // dereference operator
    printf("size of x: %d, size of y: %d\n", sizeof(x), sizeof(y));
    return 0;
}