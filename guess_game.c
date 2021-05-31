#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//  Game----Guess the Number-------

int main()
{
     
    // This will Generate the Random Number 
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand()%100 + 1;    // ( %100 + 1 ) ---> It will Generate the Number between 1 to 100

    // You can you this printf to display the generate number on the display 
    //printf("The Number is : %d",number);   


    do{
        printf("\nGuess the Number between 1 to 100 : ");
        scanf("%d",&guess);

        if(number>guess){
            printf("\nHigher Number Please!");
        }
        else if(number<guess){
            printf("\nLower Number Please!");
        }
        else{
            printf("\nCongratulation You Guessed The Number in %d Attempts \n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
     
     return 0;
     
}