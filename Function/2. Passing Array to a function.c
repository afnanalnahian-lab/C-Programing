//Passing Array to a function in C

#include<stdio.h>

//Function Declaration
void printArrayint(int arr[], int size);

int main()
{
    int myArray[]={10,20,30,40,50};

    //Function Call
    printArrayint(myArray, 5);

    printf("\n\n");
    
    return 0;

}
