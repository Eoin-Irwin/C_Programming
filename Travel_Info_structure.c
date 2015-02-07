/*This program contains a 
structure which has an airline
companies, customer information
Author:Eoin Irwin*/

#include<stdio.h>
#include<windows.h>
#include<string.h>
#define SIZE 2

struct flight
{
    int day;
    int month;
    int year;
};

struct data
{
    int flightnumber;
    struct date;
    char surname[21];
    char firstname[21];
    int seatnumber;
    
};

struct flight date;
struct data people[SIZE];

//Declare prototypes

void enter();
void display();

main()
{
    int choice = 0;
    
    while(choice!=3)
    {
        printf("\n\n1 - Enter travel information");
        printf("\n2 - Display data");
        printf("\n3 - Exit");
        printf("\nOption(1-3): ");
        scanf("%d",&choice);
    
        switch(choice)
        {
            case 1:
            {
                
                enter(); //Goto the function "enter();" when option 1 is selected
                break;
        
            }
            
            case 2:
            {
                
                display();
                break;
                
            }
            
            case 3:
            {
                system("cls");
                printf("\n\nSafe flight, goodbye!");
                Sleep(1500);
                break;
                
            }
            
            default:
            {
                printf("Please enter a valid number to continue");
                
            } // end default
            
        } // end switch
    
    } // end while
        
} // end main()

void enter()
{

    for(int i = 0 ; i < SIZE ; i++ ) //For loop to enter two different passengers information into an array
    {
    
        printf("\nflightnumber: ");
        scanf("%d",&people[i].flightnumber);
        flushall();
        
        printf("\nPlease enter day, month and year seperatley\n");
        
        printf("\nflightdate date: ");
        scanf("%d",&date.day);
        flushall();

        scanf("%d",&date.month);
        flushall();

        scanf("%d",&date.year);
        flushall();

        
        printf("\npassengersurname: ");
        scanf("%s",people[i].surname);
        
        printf("\npassengerfirstname: ");
        scanf("%s",people[i].firstname);
        
        printf("\nseatnumber: ");
        scanf("%d",&people[i].seatnumber);
        flushall();

    }
    
}

void display()
{
    for( int i = 0 ; i < SIZE ; i++ ) //For loop to display the information from the "enter();" function
    {
    
        printf("\nflightnumber: %d ",people[i].flightnumber);

        printf("\nflightdate date: %d / %d / %d ",date.day,date.month,date.year);
        
        printf("\npassengersurname: %s ",people[i].surname);
        
        printf("\npassengerfirstname: %s ",people[i].firstname);
        
        printf("\nseatnumber: %d \n",people[i].seatnumber );
        
    }
    
}