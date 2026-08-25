/*
    hello2.c
    Introduce the basic structure of a C program
    Author: 
    Date:
*/

// directives
#include <stdio.h>  


// return_type func_name (arguments) {}
int main() {
    // static type programming languages
    int ver;
    ver = 23; 
    int height, length, width = 8;
    printf("Hello, C%f\n", ver);
    printf("h: %d, l: %d, w: %d\n", height, length, width);
    return 0;
}