#include <stdio.h>

struct s {
    int i;
    double d;
};

union u {
    int i;
    double d;
};

int main() {
    struct s s1 = {123, 45.67};
    union u u1;
    printf("sizeof(s1): %zu\n", sizeof(s1));
    printf("sizeof(u1): %zu\n", sizeof(u1));

    u1.i = 1234567890;
    printf("s1.i: %d\n", s1.i);
    printf("u1.i: %d\n", u1.i);
    printf("u1.f: %lf\n", u1.d);

    u1.d = 1234.4567;
    printf("u1.i: %d\n", u1.i);
    printf("u1.f: %lf\n", u1.d);

    return 0;
}