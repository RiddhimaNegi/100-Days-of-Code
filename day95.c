#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

struct Student findTopper(struct Student s[], int n)
{
    struct Student top = s[0];
    int i;

    for(i = 1; i < n; i++)
    {
        if(s[i].marks > top.marks)
        {
            top = s[i];
        }
    }

    return top;
}

int main()
{
    struct Student s[100], topper;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    topper = findTopper(s, n);

    printf("\nTop Student: %s | Roll: %d | Marks: %d",
           topper.name, topper.roll, topper.marks);

   return 0;
}

