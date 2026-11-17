#include <stdio.h>
#include <unistd.h>

int main() {
    long count = sysconf(_SC_NPROCESSORS_ONLN);
    if (count < 1) {
        fprintf(stderr, "Could not determine processor count\n");
        return 1;
    }
    printf("Online logical processors: %ld\n", count);
    return 0;
}