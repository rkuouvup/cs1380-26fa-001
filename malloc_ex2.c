#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int* create_int_array(int size) {
    int *p = malloc(size * sizeof(int));
    if (p == NULL) {
        fprintf(stderr, "Error %d: %s\n", errno, strerror(errno));
        return NULL;
    }
    return p;
}


int main() {
    int n;

    printf("Please enter how many numbers you would like to enter: ");
    scanf("%d", &n);

    int *p = create_int_array(n);

    if (p == NULL) {
        fprintf(stderr, "error");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter #%d: ", i+1);
        //scanf("%d", &p[i]);
        scanf("%d", p+i);
    }
        

    for (int i = 0; i < n; i++)
        printf("%d\t", *(p + i));
    printf("\n");

    free(p);

    return 0;
}