/* Lab 3
Date: 13/02/2014
Author: Eoin Irwin
*/

#include<stdio.h>

//Declare prototype

int evenodd(int);
main()
{
    int num1;
    int check;
    
    printf("Enter a number: ");
    scanf("%d",&num1);
    flushall();
    
    check=evenodd(num1);
    
    if(check==0)
    {
        printf("This number is even.");
    }
    else
    {
        printf("This number is odd.");
    }
    
    getchar();
    
}//end main()

/*Implement function evenodd()*/

int evenodd(int no1)
{
    int chk;
    int ret;
    
    chk=no1%2;
    
    if(chk==0)
    {
        ret=0;
    }
    else
    {
        ret=1;
    }
    
    return(ret);
    
}//end evenodd()