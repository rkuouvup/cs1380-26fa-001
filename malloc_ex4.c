#include <stdio.h>
#include <stdlib.h>

int main() {
    int *pm = malloc(4 * sizeof(int));
    if (pm == NULL)
        return 1;
    printf("data pm is pointing to:\n");
    for (int i = 0; i < 4; i++)
        printf("%d\t", pm[i]);
    printf("\n");

    int *pc = calloc(4, sizeof(int));

    if (pc == NULL)
        return 1;
    printf("data pc is pointing to:\n");
    for (int i = 0; i < 4; i++)
        printf("%d\t", pc[i]);
    printf("\n");


    return 0;
}