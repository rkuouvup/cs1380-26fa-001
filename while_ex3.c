#include <stdio.h>

int main() {
    //int count1;

    //printf("Enter the number of time to print Hello World: ");
    //scanf("%d", &count1);

    //while(count1 > 0) {
    //    printf("Hello World\n");
    //    count1--;
    //}

    int count2;
    printf("Enter the number of time to print Hello World: ");
    scanf("%d", &count2);

    do {
        printf("Hello World\n");
        count2--;
    } while (count2 > 0);


    return 0;
}