#include <stdio.h>

void f1() {
    int count1 = 0;
    count1++;
    printf("count in function1 is %d\n", count1);
}

void f2() {
    static int count2 = 0;
    count2++;
    printf("count in function2 is %d\n", count2);
}

int main() {
    f1();
    f1();
    f1();
    f2();
    f2();
    f2();
    return 0;
}