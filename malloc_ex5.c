#include <stdio.h>
#include <stdlib.h>

int main() {
    int *pm = malloc(4 * sizeof(int));

    if (pm == NULL)
        return 1;

    printf("pm: %p\n", pm);
    for (int i = 0; i < 4; i++)
        pm[i] = i+1;
    printf("data at pm:\n");
    for (int i = 0; i < 4; i++)
        printf("%d\t", pm[i]);
    printf("\n");

    // realloc -- method 1
    /*pm = realloc(pm, 10 * sizeof(int));

    printf("data at pm after realloc:\n");
    for (int i = 0; i < 10; i++)
        printf("%d\t", pm[i]);
    printf("\n");*/

    // realloc -- method 2 (safer)
    int *pr = realloc(pm, 10 * sizeof(int));
    if (pr == NULL)
        return 1;

    printf("pm: %p\n", pm);
    printf("pr: %p\n", pr);

    printf("pm:\n");
    for (int i = 0; i < 10; i++)
        printf("%d\t", pm[i]);
    printf("\n");

    printf("pr:\n");
    for (int i = 0; i < 10; i++)
        printf("%d\t", pr[i]);
    printf("\n");

    pm = pr;


    return 0;
}