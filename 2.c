// 2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main()
{
    char ch,str[100];
    int i,count=0;
    printf("Enter a character: ");
    scanf("%c",&ch);
    printf("\nEnter a string: ");
    fflush(stdin);
    fgets(str,100,stdin);

    for ( i = 0; str[i]; i++)
        if(str[i]==ch)
            count++;
    printf("\nNo of %c in that string = %d",ch,count);
    
    return 0;
}