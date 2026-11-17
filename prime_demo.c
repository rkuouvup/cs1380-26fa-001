// Classroom example: independent prime searches using pthreads.
#define _POSIX_C_SOURCE 200809L
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

constexpr int WORKERS = 4;

typedef struct {
    int first;
    int limit; // Stop before this number.
    int count; // This job's answer.
} Job;

static bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int divisor = 2; divisor <= n / divisor; divisor++) {
        if (n % divisor == 0) {
            return false;
        }
    }
    return true;
}

static void *find_primes(void *arg) {
    Job *job = arg;
    int count = 0;
    for (int n = job->first; n < job->limit; n++) {
        count += is_prime(n);
    }
    job->count = count;
    return nullptr;
}

static double seconds(void) {
    struct timespec now;
    if (clock_gettime(CLOCK_MONOTONIC, &now) != 0) {
        perror("Read timer");
        exit(EXIT_FAILURE);
    }
    return (double)now.tv_sec + (double)now.tv_nsec / 1e9;
}

int main(void) {
    Job jobs[WORKERS];
    int expected[WORKERS];
    for (int i = 0; i < WORKERS; i++) {
        jobs[i] = (Job){10000000 + i * 2000000 / WORKERS,
                        10000000 + (i + 1) * 2000000 / WORKERS, 0};
    }
    double start = seconds();
    for (int i = 0; i < WORKERS; i++) {
        find_primes(&jobs[i]);
        expected[i] = jobs[i].count;
    }
    double sequential = seconds() - start;

    pthread_t threads[WORKERS];
    start = seconds();
    for (int i = 0; i < WORKERS; i++) {
        int rc = pthread_create(&threads[i], nullptr, find_primes, &jobs[i]);
        if (rc != 0) {
            fprintf(stderr, "Thread creation failed: %d\n", rc);
            exit(EXIT_FAILURE);
        }
    }
    for (int i = 0; i < WORKERS; i++) {
        int rc = pthread_join(threads[i], nullptr);
        if (rc != 0) {
            fprintf(stderr, "Thread join failed: %d\n", rc);
            exit(EXIT_FAILURE);
        }
    }
    double parallel = seconds() - start;

    for (int i = 0; i < WORKERS; i++) {
        if (jobs[i].count != expected[i]) {
            fprintf(stderr, "Result mismatch in job %d\n", i);
            return EXIT_FAILURE;
        }
        printf("[%d, %d): %d primes\n", jobs[i].first, jobs[i].limit,
               jobs[i].count);
    }
    printf("Sequential: %.3f s\n", sequential);
    printf("%d workers:  %.3f s\n", WORKERS, parallel);
    if (parallel > 0.0) {
        printf("Speedup: %.2fx\n", sequential / parallel);
    }
    return EXIT_SUCCESS;
}
