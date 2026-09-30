#include <stdio.h>

//int (*) (int, int);
typedef int (*op_fn) (int, int);    // define alias of int (*) (int, int): op_fn

int add(int a, int b) {return a + b;}
int sub(int a, int b) {return a - b;}

//int apply(int a, int b, add) {
//int apply(int a, int b, sub) {
//int apply(int a, int b, ????? op) {}
//int apply(int, int, int (*) (int, int));
int apply(int, int, op_fn);

int main() {
    int result;
    int *m = &result;
    result = apply(3, 5, add);
    printf("3 + 5 is %d\n", result);
    result = apply(3, 5, sub);
    printf("3 - 5 is %d\n", result);
    return 0;
}

//int apply(int a, int b, int (*op) (int, int)) {
int apply(int a, int b, op_fn op) {
    //return add(a, b);
    //return sub(a, b);
    return op(a, b);
}