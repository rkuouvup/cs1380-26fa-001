#include <stdio.h>
#include "point.h"

int main() {
    struct point_t p1 = {0.0, 0.0};
    struct point_t p2 = {3.0, 4.0};

    double d = distance(p1, p2);
    printf("d: %lf\n", d);
    struct point_t p3;
    init_point(&p3, 10.0, 10.0);
    printf("p3: (%lf, %lf)\n", p3.x, p3.y);

    int a[] = {1, 2, 3};
    double dist[2];
    struct point_t pts[] = {{3.5, 7.8}, {3.0, 4.0}};
    dist_to_org(pts, 2, dist);
    return 0;
}