#include <stdio.h>

int main() {
    char c;
    
    while(1) {
        printf("enter a char (~ to say goodbye): ");
        scanf(" %c", &c);
        
        if (c >= 'a' && c <= 'z')
            printf("lowercase digit: ASCII %d %c\n", c, c);
        else if (c >= 'A' && c <= 'Z')
            printf("uppercase digit: ASCII %d %c\n", c, c);
        else if (c >= '0' && c <= '9')
            continue;
        else if (c == '~') {
            printf("Goodbye...\n");
            break;
        } else
            printf("something other than a tilde, lowercase, "
                   "uppercase, or digit entered\n");
                   
        printf("==== last line in the while loop ====\n");
    }
    
    printf("==== end of the program ====\n");
    
    return 0;
}