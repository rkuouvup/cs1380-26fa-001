#include <stdio.h>
struct student_t {
    unsigned int id;
    char name[8];
    float score;
};

int main() {
    struct student_t s1 = {10982341, "Bob", 95.58};
    //struct student_t s1 = {109, "Bob", 95.58};
    int written_f;
    size_t written_b;

    // ==== Stream I/O ====
    FILE *file = fopen("file_io_ex1.txt", "w");
    if (file == NULL) {
        perror("Error opening file\n");
        return 1;
    }
    written_f = fprintf(file, "%d %s %f\n", s1.id, s1.name, s1.score);
    //printf("written_f: %d\n", written_f);
    if (written_f >= 0)
        printf("Struct sucessfully writeen to the plain text file\n");
    fclose(file);

    // ==== Binary Output ====
    file = fopen("file_io_ex1_binary.txt", "wb");
    if (file == NULL) {
        perror("Error opening file\n");
        return 1;
    }
    written_b = fwrite(&s1, sizeof(struct student_t), 1, file);
    //printf("written_b: %zu\n", written_b);
    printf("sizeof(s1): %zu\n", sizeof(s1));
    if (written_b == 1)
        printf("Struct successfully written to a binary file\n");

    fclose(file);

    // ==== Binary Input ====
    struct student_t s2;
    size_t read_b;

    file = fopen("file_io_ex1_binary.txt", "rb");
    if (file == NULL) {
        perror("Error opening file\n");
        return 1;
    }
    read_b = fread(&s2, sizeof(struct student_t), 1, file);
    //printf("read_b: %zu\n", read_b);
    if (read_b == 1) {
        printf("Read Binary Data: \n");
        printf("ID: %d\nName: %s\nScore: %f\n", s2.id, s2.name, s2.score);
    }

    fclose(file);

    return 0;
}