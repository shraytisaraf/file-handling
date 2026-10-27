//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
int main() {
    FILE *fptr;
    fptr=fopen("data.txt","w");
    if(fptr==NULL) {
        printf("file cannot be opened ");
        return 1;

    }
    fprintf(fptr,"hello world");
    fclose(fptr);
    printf("File created successfully");
    return 0;
}