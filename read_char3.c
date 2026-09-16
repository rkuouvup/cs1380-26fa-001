#include <stdio.h>

int main() {
    int num, denom;
    int check;
    char buf[50];

    printf("Enter a fraction: ");
    //check = scanf("%d/%d", &num, &denom);
    fgets(buf, 49, stdin);
    check = sscanf(buf, "%d/%d", &num, &denom);

    if (check == 2)
        printf("Your input is %d/%d\n", num, denom);
    else
        printf("Invalid Input\n");
    return 0;
}