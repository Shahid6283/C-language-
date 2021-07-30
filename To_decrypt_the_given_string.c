#include<stdio.h>

// Program to decrypt the Given Entered String 

void decrypt(char *c){
    char *ptr = c;
    while (*ptr!='\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
    
}
int main()
{
    char c[100];

    printf("Enter the String : ");
    gets(c);

    decrypt(c);

    printf("The Enter Decrypted String is : %s",c);

    return 0;
}