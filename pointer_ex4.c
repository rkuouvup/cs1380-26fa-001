#include <stdio.h>

int main() {
    int var = 10;
    int* ptr1 = &var;
    int** ptr2 = &ptr1;
    int*** ptr3 = &ptr2;

    printf("var:\t%d\n", var);
    printf("ptr1:\t%p\n", ptr1);
    printf("&ptr1:\t%p\n", &ptr1);
    printf("*ptr1:\t%d\n", *ptr1);
    printf("ptr2:\t%p\n", ptr2);
    printf("*ptr2:\t%p\n", *ptr2);
    printf("**ptr2:\t%d\n", **ptr2);  // **ptr2 ==> *(*ptr2)
    printf("ptr3:\t%p\n", ptr3);
    printf("***ptr3:\t%d\n", ***ptr3);


    return 0;
}