#include<stdio.h>
#include<ctype.h>

// Check Whether a Character is a Vowel or Consonant

int main()

{
    char c;

    printf("Enter an Alphabet : ");
    scanf("%c",&c);

    // Here isalpha is used to show that the entered character is not a alphabet 
    if(!isalpha(c)){
        printf("\nEntered Character is not a Alphabet!");
    }

    else if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
        printf("\n%c is Vowel",c);
    }
    else{
        printf("\n%c is Consonant",c);
    }

    return 0;
}