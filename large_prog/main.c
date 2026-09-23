#include <stdio.h>
#include "lib1.h"
#include "lib2.h"

int main() {
    int a = 5;
    printf("square of 5 is %d\n", square(5));
    
    if (foo(a) == MSA1)
        printf("pos\n");
    else 
        printf("neg\n");

    return 0;
}