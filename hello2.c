/*
    hello2.c
    Introduce the basic structure of a C program
    Author: 
    Date:
*/

// directives
#include <stdio.h>  

int global = 100;

// return_type func_name (arguments) {}
int main() {
    // static type programming languages
    int ver;
    ver = 23; 
    int height, length, width = 8;
    //printf("Hello, C%f\n", ver);
    printf("h: %d, l: %d, w: %d\n", height, length, width);

    {
        int block = 100;
        printf("global: %d, ver: %d, block: %d\n", 
               global, ver, block);
    }

    //printf("global: %d, ver: %d, block: %d\n", 
    //        global, ver, block);

    int i_var = 5;
    short s_var = 5;
    long l_var = 5;

    //sizeof(i_var)
    printf("Size of i_var: %zu\n", sizeof(i_var));
    printf("Size of i_var: %zu\n", sizeof(s_var));
    printf("Size of i_var: %zu\n", sizeof(l_var));
    printf("Size of 5: %zu\n", sizeof(5));
    printf("Size of int: %zu\n", sizeof(int));

    unsigned int u_var = 5;
    u_var -= 10;
    printf("u_var: %d\n", u_var);
    printf("u_var: %u\n", u_var);

    int big_num = 1000;
    printf("big_num ^ 1: %d\n", big_num);
    big_num = big_num * 1000;
    printf("big_num ^ 2: %d\n", big_num);
    big_num = big_num * 1000;
    printf("big_num ^ 3: %d\n", big_num);
    big_num = big_num * 1000;
    printf("big_num ^ 4: %d\n", big_num);


    return 0;
}