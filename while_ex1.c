#include <stdio.h>

int main() {
    // while (condition) {}
    int count = 0;
    while (count < 5) {
        printf("Hello World\n");
        count = count + 1;
    }


    int grade;
    printf("Enter the grade (1-4, negative will leave the loop): ");
    scanf("%d", &grade);

    while (grade >= 0) {
        switch(grade) {
            case 4: printf("Excellent\n");
                    break;
            case 3: printf("Good\n");
                    break;
            default: printf("Invalid Input\n");
        }
        printf("Enter the grade (1-4, negative will leave the loop): ");
        scanf("%d", &grade);
    }
    return 0;
}