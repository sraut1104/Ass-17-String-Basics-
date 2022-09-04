/* 7. Write a program in C to count the total number of alphabets, digits and special characters in a string. */

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a steing: ");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';

    int i,j,count_digit=0,count_alphabet=0,count_specialChar=0;
    for ( j = 0; str[j]; j++)
        for ( i = 48; i<=57; i++)
            if(str[j]==i)
            {
                count_digit++;
                break;
            }

    for ( j = 0; str[j]; j++)
        for ( i = 65; i<=122; i++)
            if((i>=65 && i<=90)||(i>=97 && i<=122))
                if(str[j]==i)
                {
                    count_alphabet++;
                    break;
                }
    
    for ( j = 0; str[j]; j++)
        for ( i = 0; i<=255; i++)
            if((i>=0 && i<48)||(i>122 && i<=255))
                if(str[j]==i)
                {
                    count_specialChar++;
                    break;
                } 
    
    printf("Total no of apahbets = %d\nTotal no of digits = %d\nTotal no of specail characters = %d",count_alphabet,count_digit,count_specialChar);

    return 0;
}