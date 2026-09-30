#include <stdio.h>

int main() {
    int a = 10;
    /***********
     * Wild pointer example
     * ************* */
    //int *p;     // wild pointer
    //printf("*p: %d\n", *p);

    /************
     * Use null pointer instead of wild pointer
     * *********** */
    int *p = NULL;  // null pointer
    if (p == NULL) {
        printf("p is a null pointer\n");
    } else {
        printf("*p: %d\n", *p);
    }

    return 0;
}