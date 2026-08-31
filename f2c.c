#include <stdio.h>

int main() {
    //int f = 100;

    // casting: explicit conversion
    // float(5)
    //int c = ((float)5 / 9) * (f - 32);
    //printf("%d degrees Fahrenheit is %d degress Celsius\n", f, c);
    float f = 100;
    float c;
    printf("current f degree is %f\n", f);
    printf("Enter a new f degree: ");
    scanf("%f", &f);    // reference operator: retrieve the address
                        // of a variable
    c = ((float)5 / 9) * (f - 32);
    printf("%f degrees Fahrenheit is %f degress Celsius\n", f, c);

    int num;
    int denom;
    int error_check = scanf("%d/%d", &num, &denom);
    printf("error_check: %d, num: %d, denom: %d\n", 
           error_check, num, denom);


    return 0;
}