#include <stdio.h>
#include <stdarg.h>

int sum_n(int n, ...) {
    int sum = 0;
    va_list a;
    va_start(a, n);        // macro

    for (int i = 0; i < n; i++)
        sum = sum + va_arg(a, int);
    va_end(a);

    return sum;
}

int main() {
    printf("sum_n(3, 1, 2, 3): %d\n", sum_n(3, 1, 2, 3));
    printf("sum_n(5, 10, 20, 30, 40, 50): %d\n", sum_n(5, 10, 20, 30, 40, 50));
    return 0;
}