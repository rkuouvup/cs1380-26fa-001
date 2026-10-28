#ifndef POINT_H
#define POINT_H
struct point_t {
    double x;
    double y;
};
double distance(struct point_t p, struct point_t q);
void init_point(struct point_t *p, double x, double y);
void dist_to_org(struct point_t p[], int len, double d[]);
#endif