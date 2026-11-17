#include <stdio.h>
#include <unistd.h> // for sleep()

void* child(void* data) {
    char *str = (char*) data;
    for (int i = 0; i < 3; i++) {
        printf("%s\n", str);
        sleep(1);
    }
}

int main() {
    child("Child1");
    child("Child2");
    for(int i = 0; i < 3; i++) {
        printf("Master\n");
        sleep(1);
    }
    return 0;
}