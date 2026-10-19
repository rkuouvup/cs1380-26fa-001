#include <stdio.h>

/*void foo(int a[]) {
    printf("Inside foo\n");
    printf("sizeof(a): %zu\n", sizeof(a));
}*/

int main() {
    // int a[5] = {1, 2, 3, 4, 5};
    int a[] = {1, 2, 3, 4, 5};
    printf("sizeof(a): %zu\n", sizeof(a));
    printf("sizeof(a)/sizeof(int): %zu\n", sizeof(a)/sizeof(int));
    int *p = a;
    printf("*p: %d\n", *p);
    printf("*(p+2): %d\n", *(p+2));
    printf("p[2]: %d\n", p[2]);
    printf("p: %p\n", p);
    printf("p+2: %p\n", p+2);
    printf("=====================\n");
    //foo(a);

    //int a2[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int a2[][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("sizeof(a2): %zu\n", sizeof(a2));
    for(int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            printf("&a2[%d][%d]: %p\n", i, j, &a2[i][j]);
    }

    printf("&a2[0]: %p\n", &a2[0]);
    printf("&a2[1]: %p\n", &a2[1]);
    int (*p2)[3] = a2;
    //int (*p2)[] = a2;
    printf("p2:\t%p\n", p2);
    printf("p2+1:\t%p\n", p2+1);

    return 0;
}