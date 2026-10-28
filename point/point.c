#include <math.h>
#include "point.h"

double distance(struct point_t p, struct point_t q) {
    return sqrt(pow(p.x-q.x, 2) + pow(p.y-q.y, 2));
}

void init_point(struct point_t *p, double x, double y) {
    (*p).x = x;
    (*p).y = y;
}
void dist_to_org(struct point_t p[], int len, double d[]) {
    struct point_t org = {0.0, 0.0};
    for (int i = 0; i < len; i++)
        d[i] = distance(p[i], org);
}