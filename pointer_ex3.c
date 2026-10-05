#include <stdio.h>

int main() {
    int v[] = {1, 2, 3, 4, 5};
    double d[] = {1.0, 2.0, 3.0, 4.0, 5.0};

    int *vptr1 = &v[0];
    printf("v:\t\t%p\n", v);
    printf("vptr1:\t\t%p\n", vptr1);
    printf("vptr1 + 1:\t%p\n", vptr1 + 1);
    printf("*(vptr1 + 1):\t%d\n", *(vptr1 + 1));
    printf("vptr1[1]:\t%d\n", vptr1[1]);

    vptr1 = vptr1 + 1;
    printf("*vptr1:\t\t%d\n", *vptr1);
    //v = v + 1;
    //printf("*v:\t\t%d\n", *v);

    double *vptr2 = &d[0];
    printf("vptr2:\t\t%p\n", vptr2);
    printf("vptr2 + 1:\t%p\n", vptr2 + 1);


    return 0;
}