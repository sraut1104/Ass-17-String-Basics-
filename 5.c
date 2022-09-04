// 5. Write a program to convert a given string into lowercase

#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);

    int i,j;
    for ( i = 0; i < str[i]; i++)
        for ( j = 65; j<=90 ; j++)
            if(str[i]==j)
            {
                str[i]=str[i]+32;
                break;
            }

    printf("\n%s",str);
    
    return 0;
}