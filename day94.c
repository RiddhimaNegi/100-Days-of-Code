#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

void display(struct Student s)
{
    printf("Name: %s | Roll: %d | Marks: %d",
           s.name, s.roll, s.marks);
}

int main()
{
    struct Student s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%d", &s.marks);

    display(s);

    return 0;
}
