#include <stdio.h>

int main()
{
    FILE *fp;
    char name[100];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be created.");
        return 1;
    }

    fprintf(fp, "Name: %s", name);
    fprintf(fp, "Age: %d", age);

    fclose(fp);

    printf("Data successfully saved.");

    return 0;
}

