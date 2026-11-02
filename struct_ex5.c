#include <stdio.h>

struct student {
    int id1;
    int id2;
    char a;
    char b;
    float percentage;
};

int main() {
    struct student record1 = {1, 2, 'A', 'B', 90.5};
    printf("sizeof id1:\t%zu\n", sizeof(record1.id1));
    printf("sizeof id2:\t%zu\n", sizeof(record1.id2));
    printf("sizeof a:\t%zu\n", sizeof(record1.a));
    printf("sizeof b:\t%zu\n", sizeof(record1.b));
    printf("sizeof perc:\t%zu\n", sizeof(record1.percentage));
    printf("sizeof record1:\t%zu\n", sizeof(record1));

    printf("address of id1:\t\t%p\n", &record1.id1);
    printf("address of id2:\t\t%p\n", &record1.id2);
    printf("address of a:\t\t%p\n", &record1.a);
    printf("address of b:\t\t%p\n", &record1.b);
    printf("address of perc:\t%p\n", &record1.percentage);



    return 0;
}