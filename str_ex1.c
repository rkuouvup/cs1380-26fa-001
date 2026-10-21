#include <stdio.h>
#include <string.h>     // c++: #include <cstring>

int main() {
    char s1[16] = "Hello World";
    char s2[16];// = "Hello World";
    char s3[8];
    //s2 = s1;

    /*for (int i = 0; i < 16; i++)
        s2[i] = s1[i];*/
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("s3: %s\n", s3);

    strcpy(s2, s1);     // strcpy(target, source)
    //strcpy(s3, s1);
    strncpy(s3, s1, 8-1);
    s3[7] = '\0';

    /*if (s1 == s2)
        printf("Same Strings\n");
    else
        printf("Different Strings\n");*/

    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("s3: %s\n", s3);


    return 0;
}