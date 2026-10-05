#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int *p[] = {a, a+1, a+2, a+3, a+4};
    int **pp = p;

    printf("==== Initial values ====\n");
    printf("a[i]:\t"); for(int i=0; i<5; i++) printf("%d ", a[i]); printf("\n");
    printf("p[i]:\t"); for(int i=0; i<5; i++) printf("%p ", p[i]); printf("\n");
    printf("*p[i]:\t"); for(int i=0; i<5; i++) printf("%d ", *p[i]); printf("\n");
    printf("&p[i]:\t"); for(int i=0; i<5; i++) printf("%p ", &p[i]); printf("\n");

    printf("**pp:\t%d\n", **pp);
    printf("==== Updating ====\n");
    pp++;
    printf("**pp:\t%d\n", **pp);
    (*pp)++;
    printf("**pp:\t%d\n", **pp);

    printf("==== After updates ====\n");
    printf("a[i]:\t"); for(int i=0; i<5; i++) printf("%d ", a[i]); printf("\n");
    printf("p[i]:\t"); for(int i=0; i<5; i++) printf("%p ", p[i]); printf("\n");
    printf("*p[i]:\t"); for(int i=0; i<5; i++) printf("%d ", *p[i]); printf("\n");
    printf("&p[i]:\t"); for(int i=0; i<5; i++) printf("%p ", &p[i]); printf("\n");

    (**pp)++;

    printf("==== After (**pp)++ ====\n");
    printf("a[i]:\t"); for(int i=0; i<5; i++) printf("%d ", a[i]); printf("\n");
    printf("p[i]:\t"); for(int i=0; i<5; i++) printf("%p ", p[i]); printf("\n");
    printf("*p[i]:\t"); for(int i=0; i<5; i++) printf("%d ", *p[i]); printf("\n");
    printf("&p[i]:\t"); for(int i=0; i<5; i++) printf("%p ", &p[i]); printf("\n");

    return 0;
}