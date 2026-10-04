#include <stdio.h>

struct Student
{
    int rollNo;
    float marks;
};

void displayStudent(void *data)
{
    struct Student *student = (struct Student *)data;

    printf("Roll Number: %d\n", student->rollNo);
    printf("Marks: %.2f\n", student->marks);
}

int main()
{
    struct Student student = {101, 92.5};

    displayStudent(&student);

    return 0;
}
