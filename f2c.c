#include <stdio.h>

int main() {
    int f = 100;

    // casting: explicit conversion
    // float(5)
    int c = ((float)5 / 9) * (f - 32);
    printf("%d degrees Fahrenheit is %d degress Celsius\n", f, c);

    return 0;
}