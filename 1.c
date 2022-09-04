/* 1. Write a program to calculate the length of the string. (without using built-in method) */

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';

    int i;
    for (i = 0; str[i]; i++);
    printf("Length = %d",i); 

    return 0;
}