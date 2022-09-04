// 3. Write a program to count vowels in a given string

#include<stdio.h>
int main()
{
    char str[100];
    
    printf("Enter a string: ");
    fgets(str,100,stdin);

    int i,j,count=0;
    char array[11]="AEIOUaeiou";
    for ( i = 0; str[i]; i++)
        for ( j = 0; array[j]; j++)
            if(str[i]==array[j])
            {
                count++;
                break;
            }
    printf("Total no of vowels = %d",count);

    return 0;
}