/*******************************
 * malloc_ex3.c
 * Create pointers to pointers
 *************************** */
#include <stdio.h>
#include <stdlib.h>

int* create_int_array(int size);
int sum_int_arr(int *a, int size);
int **create_int_ptr_arr(int size);
void record_expn(int **expn, int days);
int total_expn(int **expn, int days);

int main() {
    int days;

    printf("Please enter how many days of costs you would like to enter: ");
    scanf("%d", &days);

    // Dynamic memory allocation
    int **expn = create_int_ptr_arr(days);

    // If the memory allocation is failed, take appropriate action
    if (expn == NULL) {
        // The error code should be ENOMEM (12): Cannot allocate memory
        fprintf(stderr, "Error allocating memory dynamically\n");
        return 1;
    }

    record_expn(expn, days);
    printf("Total expense: %d\n", total_expn(expn, days));

    return 0;
}

int* create_int_array(int size) {
    int *ptr = malloc(sizeof(int) * size);
    if (ptr == NULL) {
        return NULL;
    }
    return ptr;
}

int sum_int_arr(int *a, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *a;
        a++;
    }
    return sum;
}

int **create_int_ptr_arr(int size) {
    int **ptr = malloc(sizeof(int*) * size);
    if (ptr == NULL) {
        return NULL;
    }
    return ptr;
}

void record_expn(int **expn, int days) {
    int i, j;
    for (i = 0; i < days; i++) {
        int n;
        printf("Please enter the number of record for day %d: ", i+1);
        scanf("%d", &n);
        expn[i] = create_int_array(n+1);

        for (j = 0; j < n; j++) {
            printf("Please enter the cost record #%d for day %d: ", j+1, i+1);
            //scanf("%d", &expn[i][j]);
            scanf("%d", (*(expn + i) + j));
        }
        expn[i][j] = -1;
    }
}

int total_expn(int **expn, int days) {
    int sum = 0;
    for (int i = 0; i < days; i++) {
        int j = 0;
        /*while(expn[i][j] != -1) {
            sum += expn[i][j];
            j++;
        }*/
        while(*(*(expn + i) + j) != -1) {
            sum += *(*(expn + i) + j);
            j++;
        }
    }
    return sum;
}
