#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main() {
    int n;
    int a[] = {1, 2, 3, 4, 5};

    printf("Please enter how many numbers you would like to enter: ");
    scanf("%d", &n);
    //int a[n]; a valid statement from C11
    //int *p = malloc(n * sizeof(int));
    int *p = malloc(100000 * 10000);

    if (p == NULL) {
        fprintf(stderr, "Error %d: %s\n", errno, strerror(errno));
        return errno;
    }

    printf("&n:\t%p\n", &n);
    printf("a:\t%p\n", a);
    printf("&p:\t%p\n", &p);
    printf("p:\t%p\n", p);

    for (int i = 0; i < n; i++)
        //*(p + i) = i;
        p[i] = i + 1;

    for (int i = 0; i < n; i++)
        printf("%d\t", *(p + i));
    printf("\n");

    return 0;
}