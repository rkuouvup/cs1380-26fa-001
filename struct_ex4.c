/******************************
 * struct_ex4.c
 * ************************* */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person_name {
  char first[20];
  char middle_initial;
  char last[20];
};

struct student {
  struct person_name *name;
  int id, age;
  char gender;
};

struct student* new_student(char *f_name, char m_init, char *l_name, int id, int age, char gender) {
    struct person_name *name = malloc(sizeof(struct person_name));
    if (name == NULL)
        return NULL;
    strcpy(name->first, f_name);
    name->middle_initial = m_init;
    strcpy(name->last, l_name);

    struct student* std;
    std = malloc(sizeof(struct student));
    if (std == NULL)
        return NULL;

    std->name = name;
    std->id = id;
    std->age = age;
    std->gender = gender;

    return std;
}


int main() {
    struct student *new_std = NULL;

    new_std = new_student("Amy", 'K', "Amber", 12345, 23, 'F');
    if (new_std == NULL)
        return -1;
    printf("Student #%d information:\n", new_std->id);
    printf("Name: %s %c %s\n", new_std->name->first, new_std->name->middle_initial, new_std->name->last);
    printf("Age: %d\tGender: %s\n", new_std->age, (new_std->gender == 'M') ? "Male" : "Female");

    return 0;
}
