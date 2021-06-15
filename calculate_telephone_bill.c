#include<stdio.h>

// Find the Telephone Bill is to be computed as follows:
// Minimum Rs. 200 for upto 100 Calls 
// Plus Rs. 0.60 per call for next 50 Calls 
// Plus Rs. 0.50 per call for next 50 Calls 
// Plus Rs. 0.40 per call for any call beyond 200 Calls

int main()
{
    int calls;
    float bill;

    printf("Enter the Total Numbers of Calls : ");
    scanf("%d",&calls);

    if(calls>0 && calls<=100){
        bill = 200;
    }
    else if(calls>100 && calls<=150){
        bill = 200 + (calls-100)*0.60;
    }
    else if(calls>150 && calls<=200){
        bill = 200 + 50*0.60 + (calls-150)*0.50;
    }
    else if(calls>200){
        bill = 200 + 50*0.60 + 50*0.50 + (calls-200)*0.40;
    }

    printf("\nTotal Amount is : %.2f Rs.",bill);

    return 0;
}