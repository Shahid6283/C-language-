#include<stdio.h>

// Program to encrypt the Given Entered String 

void encrypt(char *c){
    char *ptr = c;
    while (*ptr!='\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
    
}
int main()
{
    char c[100];

    printf("Enter the String : ");
    gets(c);

    encrypt(c);

    printf("The Enter Encrypted String is : %s",c);

    return 0;
}