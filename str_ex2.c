#include <stdio.h>
#include <string.h>
#define DEST_SIZE 16

int main() {
    char x[DEST_SIZE] = "Hello ";
    char *s1 = "Hello ";
    char s2[] = "Hello ";
    printf("sizeof x: %zu\n", sizeof(x)/ sizeof(char));
    printf("strlen(x): %zu\n", strlen(x));
    printf("sizeof s1: %zu\n", sizeof(s1)/ sizeof(char));
    printf("sizeof s2: %zu\n", sizeof(s2)/ sizeof(char));

    char y[] = "World!";

    strcat(x, y);
    printf("x: %s\n", x);
    printf("s2: %s\n", s2);

    strncat(x, y, 3);
    x[DEST_SIZE-1] = '\0';

    printf("x: %s\n", x);
    printf("s2: %s\n", s2);

    return 0;
}