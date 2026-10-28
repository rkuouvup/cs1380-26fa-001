#include <stdio.h>

struct point_t {
    double x;
    double y;
};

typedef struct point_tt {
    double x;
    double y;
} Point;

typedef long long ll;

int main() {
    // type var_name;
    int i;
    long long l1;
    ll l2;
    int a[] = {1, 2, 3};
    struct point_t p1 = {3.0, 4.0};
    Point p2 = {.y = 3.0, .x = 4.0};
    struct point_tt p3;

    printf("p1: (%lf, %lf)\n", p1.x, p1.y);
    printf("p2: (%lf, %lf)\n", p2.x, p2.y);
    p1.x = 6.0;
    p1.y = 8.0;
    printf("p1: (%lf, %lf)\n", p1.x, p1.y);

    return 0;
}