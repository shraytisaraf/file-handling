//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main()
{
    FILE *fptr;
    int num, sum = 0, count = 0;
    float average;

    fptr = fopen("numbers.txt", "r");

    if (fptr == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    while (fscanf(fptr, "%d", &num) != EOF)
    {
        sum = sum + num;
        count++;
    }

    if (count > 0)
    {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }
    else
    {
        printf("File is empty.");
    }

    fclose(fptr);

    return 0;
}