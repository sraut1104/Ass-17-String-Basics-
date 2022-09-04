//  6. Write a program to reverse a string.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a sring: ");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';

    int l=strlen(str);

    for (int i = 0; i < l/2; i++)
    {
        int temp;
        temp=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=temp;
    }
    
    printf("%s",str);  

    return 0;
}