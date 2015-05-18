/*This program wll ask the user to
enter a country and it will then 
output that countries capital
Author:Eoin Irwin
11/03/2014*/

#include<stdio.h>
#include<string.h>
#define SIZE 20
main()
{
    char *countries[SIZE] = {"Abkhazia","Sukhumi","Afghanistan","Kabul""Australia","Canberra","Belgium","Brussels","China","Beijing",
                            "Denmark","Copenhagen","England","London","France","Paris","Greece", //Countries and capitals declared in the one array
                            "Athens","Ireland","Dublin","Scotland","Edinburgh","Wales","Cardiff"};
    char input[20];
    int test = 0;
    
    printf("Input a country: ");
    gets(input);  // Used to input the option
    
    for(int i=0;i<SIZE;i++)
    {
        if(strstr(*(countries+i),input) != NULL) // Used to give the capital of the country
        {
            printf("\nCapital of %s: %s",input,countries[i+1]); 
            test = 1;
            break;
        }//end if
    }
    
    if(test != 1) // If a country entered that is not in the array the following statement will be dispalyed
    {
        printf("\nCountry not found.");
    }
    getchar();
}//endmain