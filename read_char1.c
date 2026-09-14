#include <stdio.h>

int main() {
    char grade, tmp;
    printf("Enter the letter grade (Q or q to leave the loop): ");
    //scanf("%c", &grade);
    while ((tmp = getchar()) != '\n')
        grade = tmp;

    // (!(grade == 'Q' || grade == 'q'))
    while (grade != 'Q' && grade != 'q') {
        switch(grade) {
            case 'A': 
            case 'a': printf("Excellent\n");
                    break;
            case 'B': 
            case 'b': printf("Good\n");
                    break;
            default: printf("Invalid Input\n");
        }
        printf("Enter the grade (1-4, negative will leave the loop): ");
        //scanf(" %c", &grade);
        while ((tmp = getchar()) != '\n')
            grade = tmp;
    }
    return 0;
}