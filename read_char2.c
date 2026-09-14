#include <stdio.h>
#include <string.h>

int main() {
    char name[50];

    printf("Please enter your name: ");
    //scanf("%s", name);  // no & before an array variable

    // solution 1: scanset
    //scanf("%[A-Z]s", name);
    //scanf("%[^\n]s", name);

    // solution 2: fgets
    fgets(name, 49, stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Hello, %s\n", name);

    return 0;
}