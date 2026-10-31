#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    int num, sum = 0, count = 0;
    float average;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if(fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    while(fscanf(fp, "%d", &num) == 1)
    {
        sum = sum + num;
        count++;
    }

    fclose(fp);

    if(count > 0)
    {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f", average);
    }
    else
    {
        printf("File contains no integers.");
    }

    return 0;
}
