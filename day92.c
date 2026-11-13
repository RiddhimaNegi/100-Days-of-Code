#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    struct Student s[5];
    int i;

    printf("Enter details of 5 students:\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\nName\tRoll\tMarks\n");

    for(i = 0; i < 5; i++)
    {
        printf("%s\t%d\t%d\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
