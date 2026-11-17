#include <stdio.h>
#include <pthread.h>
#include <unistd.h> // for sleep()

void* child(void* data) {
    char *str = (char*) data;
    for (int i = 0; i < 3; i++) {
        printf("%s\n", str);
        sleep(1);
    }
}

int main() {
    //child("Child1");
    //child("Child2");
    pthread_t t1;
    pthread_t t2;
    pthread_create(&t1, NULL, child, "Child1");
    pthread_create(&t2, NULL, child, "Child2");
    for(int i = 0; i < 3; i++) {
        printf("Master\n");
        //sleep(1);
    }
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    printf("End of the program\n");
    return 0;
}