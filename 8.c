//8. Write a program in C to copy one string to another string.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],str2nd[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';

    printf("My string is %s",str);

    for ( int i = 0; str[i] ; i++)
        str2nd[i]=str[i];
    str2nd[strlen(str)]='\0';

    printf("\nCopied string is %s",str2nd);
    
    return 0;
}