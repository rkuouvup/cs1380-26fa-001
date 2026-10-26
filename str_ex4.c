#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "This is a sentence with 7 tokens";
    printf("The size of s is %zu\n", sizeof(s)/sizeof(char));

    /*char *token_p = strtok(s, " ");
    printf("%p: %s\n", token_p, token_p);
    token_p = strtok(NULL, " ");
    printf("%p: %s\n", token_p, token_p);*/

    char *token_p = strtok(s, " ");
    while(token_p != NULL) {
        printf("%p: %s\n", token_p, token_p);
        token_p = strtok(NULL, " ");
    }
    printf("s: %s\n", s);
    printf("The size of s is %zu\n", sizeof(s)/sizeof(char));

    for (int i = 0; i < sizeof(s)/sizeof(char); i++)
        printf("s[%d]:\t%c\t%d\n", i, s[i], s[i]);
    printf("\n");

    return 0;
}