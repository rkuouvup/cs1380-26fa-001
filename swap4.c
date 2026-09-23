#include <stdio.h>

void swap(int* a, int* b) {
    /* swap */
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    printf("inside swap function: a = %d\tb = %d\n", *a, *b);
}

int main() {
    int a = 6;
    int b = 9;

    printf("before swap call: a = %d\tb = %d\n", a, b);

    swap(&a, &b);

    printf("after swap call: a = %d\tb = %d\n", a, b);
    return 0;
}