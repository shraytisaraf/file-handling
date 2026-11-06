//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>

int main()
{
    FILE *fptr;
    char ch;
    int vowels = 0, consonants = 0;

    fptr = fopen("data.txt", "r");

    if (fptr == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u' || ch == 'A' ||
                ch == 'E' || ch == 'I' || ch == 'O' ||
                ch == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    fclose(fptr);

    return 0;
}