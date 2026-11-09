#include <stdio.h>

int sumArray(int arr[], int size) {
    //return one of the element in the arr + sumArray(rest of the element)
    if (size <= 0)
        return 0;
    else
        return arr[size-1] + sumArray(arr, size-1);
}

int prodArray(int arr[], int size) {
    //return one of the element in the arr + sumArray(rest of the element)
    if (size <= 0)
        return 1;
    else
        return arr[size-1] * prodArray(arr, size-1);
}

// higher-order function --> reduce

int main() {
    int data[] = {2, 5, 8, 3, 1};
    int size = sizeof(data) / sizeof(data[0]);
    int sum = sumArray(data, size);
    int prod = prodArray(data, size);
    /*int sum = 0;
    for (int i = 0; i < size; i++)
        sum = sum + data[i];*/

    printf("sum of data is %d\n", sum);
    printf("product of data is %d\n", prod);

    return 0;
}