#include <stdio.h>
#include <string.h>

int main() {
    char *s1 = "Hello World!";
    char *s2 = "Hello World!";

    if (s1 == s2)
        printf("s1 and s2 are the same\n");
    else
        printf("s1 and s2 are not the same\n");

    char s3[] = "Hello World!";
    char s4[] = "Hello World!";
    char s5[] = "Hello UVU!";

    if (strcmp(s3, s4) == 0)
        printf("s3 and s4 are the same\n");
    else
        printf("s3 and s4 are not the same\n");

    printf("Compare s3 and s4: %d\n", strcmp(s3, s4));
    printf("Compare s3 and s5: %d\n", strcmp(s3, s5));
    printf("Compare s5 and s3: %d\n", strcmp(s5, s3));


    return 0;
}