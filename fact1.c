#include <stdio.h>

int f(int n) {
    //if (n <= 1)
    //    return 1;
    //else
        return n * f(n - 1);
}

int main() {
    int a = 5;
    printf("%d! = %d\n", a, f(a));
    return 0;
}