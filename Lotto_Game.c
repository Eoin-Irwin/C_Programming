/*This is a lotto game that 
will let the user enter 6 
numbers and tell the user
what prize they win if they
match the numbers.
Author: Eoin Irwin
30th March 2014*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define SIZE 6
#define FREQ 42

//Declare prototypes
//

void read_in_numbers(int *, int *frequency); // User inputs numbers
void users_numbers(int *);                   // Numbers are displayed
void bubble_sort_1D(int *);                  // Numbers are sorted in ascending order
void compare_numbers(int *);                 // Comparisons are made to tell the user what prize they recieve
void frequency_of_numbers(int *frequency);   // The amount of numbers that were entered are displayed
void exit_program(void);

/*The main has a menu that will be 
displayed constantly while the program 
runs. It has a switch case which in each
one, a function is called*/

main() 
{
    int array1[SIZE];
    int frequency[FREQ] = {0};
    int choice = 0;
    
    do //This do while loop keeps the menu constant
    {
        printf("\n\n\n[1].Enter numbers\n") ; 
        printf("[2].Display numbers entered\n") ;
        printf("[3].Sort array in ascending order\n") ;
        printf("[4].Compare chosen numbers with winning numbers\n") ;
        printf("[5].Display frequency of numbers entered\n") ;
        printf("[6].Exit\n") ;
        printf("\nSelect an option (1-6): ");
        
        scanf("%d", &choice) ;
        clrscr();
        flushall();

        switch(choice)
        {
            case 1: 
            {
                 //Call read_in_numbers(array1, frequency);
                 //
            
                read_in_numbers(array1, frequency);
                break;
                
            } // end case 1:
            
            case 2:
            {
                //Call users_numbers(array1);
                //
                
                users_numbers(array1);
                break;
                
            } // end case 2:
            
            case 3:
            {
                //Call bubble_sort_1D(array1);
                //
                
                bubble_sort_1D(array1);
                break;
                
            } // end case 3:
            
            case 4:
            {
                //Call compare_numbers(array1);
                //
                
                compare_numbers(array1);
                break;
                
            } // end case 4:
            
            case 5:
            {
                //frequency_of_numbers(array1);
                //
                
                frequency_of_numbers(array1);
                break;
                
            } // end case 5:
            
            case 6:
            {
                //Call exit_program();
                //
                
                exit_program();
                break;
                
            } // end case 6:
            
             //default to check the user's input is a valid option i.e between 1 and 6
             //
            
            default:
            {
                printf("Please enter a number between 1-6"); 
                break;
                
            } // end default:
            

        } // end switch
        
        
    }while(choice!= 6); //End do while
    
    //The menu is displayed unless you enter number 6
    //
    
} // end main()

/* This function prompts the user to enter
in 6 numbers for the lotto game which are 
stored in array1. The frequency parameter
will let the user only enter an option that is
between the specified numbers 1-42*/

//Implement function read_in_numbers
//

void read_in_numbers(int *array1, int *frequency)
{

    printf("\nPlease enter 6 numbers in the range 1-42:\n");
    
    //For loop to enter in 6 numbers
    //
    
    for(int i = 0 ; i < SIZE ; i++)
    {
        
    scanf("%d", & ( * ( array1 + i ) ) );
        
    flushall();
        
        /*Nested if that ensures the numbers is between
                1-42, otherwise an error message will occur telling
                the user to enter a valid one. It also decrements by
                1 so the user can enter the 6 numbers*/
        
        if( ( * ( array1 + i ) > 42 || ( * ( array1 + i ) < 1 ) ) ) /* If the numbers is greater than 42 or less 
                                                                                                                                        than 1 an error message is displayed  */
        {
            ( * ( frequency + ( * ( array1 + 1 ) + i ) ) ) ++;
            i--;
            printf("Number has to be between 1-42\n");
            flushall();
            
        }//end if()
        
    } // end for()
    

}// end void read_in_numbers(int *array1)

/*The user_numbers function will 
display the numbers from the array
that the user had entered. 
1 Parameter is specified*/

//Implement function user_numbers
//

void users_numbers(int *array1)
{
    int i;
    
    printf("The numbers you entered:\n\n");
    flushall();
    
    //For loop to display the array
    //
    
    for( i = 0 ; i < SIZE ; i++)
    {
        printf(" %d \t ",( * ( array1 + i ) ) );
        
    } // end for()
    
    
} // end void users_numbers(int array1[])


/*This function will display the users numbers in
the order they were entered and then the bubble
sort will display the numbers in ascending order
1 Parameter is specified*/

//Implement function bubble_sort_1D
//

void bubble_sort_1D(int *array1)
{
    int n = SIZE;
    int c , d , swap;

    printf("The numbers you entered: ");
    
    
    /*For loop to display the numbers entered by
        the user*/
    
    for(int i = 0 ; i < SIZE ; i++)
    {
        printf(" %d ", ( * ( array1 + i ) ) );
        
    } // end for
    
    printf("\n\n");
    
    /*Nested for loop that will use a bubble 
        sort algorithm which compares the 6 
        elements entered and will swap the
        order of the numbers if necessary*/
 
    for (c = 0 ; c < ( n - 1 ) ; c++)
    {
        for (d = 0 ; d < n - c - 1 ; d++)
        {
            if (array1[d] > array1[d+1])
            {
                swap        = array1[d];
                array1[d]   = array1[d+1];
                array1[d+1] = swap;
                
            } // Bubble sort to swap numbers
            
        } // end inner for
        
    } // end outer for
 
    printf("Numbers in ascending order:");
    
    for (c = 0; c < n; c++)
    {
        printf(" %d ", ( * ( array1 + c ) ) ); //Prints out the array in order
        
    } // end for
    
} // end bubble_sort_1D


/* This function will compare the numbers
entered by the user to the winning numbers
and determine if the user gets a prize or not.
An appropriate message will be displayed if they 
can match the numbers,  1 Parameter is specified.*/


//Implement function compare_numbers
//

void compare_numbers(int * array1)
{

    int i, j;
    int bonus = 0;
    int right = 0;
    int array[SIZE] = {1,3,5,7,9,11};
    
    for( i = 0 ; i < SIZE ; i++ )
    {
        for( j = 0 ; j < SIZE ; j++ )
        {
            if( * ( array1 + i ) == ( * ( array + j ) ) ) //Comparing the Winning array and the users entered numbers
            {
                right++; // Counter that is incremeneted if the user matches numbers
                
            } // end if
            
        } // end for
        
            if( * ( array1 + i ) == 42 )
            {
                bonus++;
                
            } // end if 
            
    } // end outer for
    

    printf("Prize: ");
    
    if(right == 3 && bonus == 1)
    {
        printf("You won a Cinema ticket!"); /*This prize will be shown if the user matches the
                                                                                         bonus number (42) and 3 other correct numbers*/
    } // end if
    
    else if(right == 4 && bonus == 1)
    {
        printf("You won a Weekend away");
        
    } // end else if
    
    else if(right == 5 && bonus == 1)
    {
        printf("You won a new car");
        
    } // end else if
    
    else if(right == 4 && bonus == 0)
    {
        printf("You won a night out"); /* This prize will be shown if the 
                                                                               user matches 4 correct numbers */
        
    }// end else if 
    
    else if(right == 5 && bonus == 0)
    {
        printf("You won a Holiday");
        
    } // end else if 
    
    else if(right == 6 && bonus == 0)
    {
        printf("Congragulations, you won the Jackpot!!");
        
    } // end else if 
    
    else 
    {
        printf("Unfortunatly, no prizes this time.\n\nPlease try again"); /*If the user gets no prize the following is displayed*/
        
    } // end else
    
} // end compare_numbers

/*The frequency function displays the
numbers the user entered and how many 
times it was entered 1 Parameter is specified*/


//Implement function frequency_of_numbers
//

void frequency_of_numbers(int *frequency)
{
    printf("Frequency:\n");
    
    for(int i = 0 ; i < FREQ ; i++)
    {
        if ( * ( frequency + i ) > 0 ) //This will tell the user how many times each number has been entered
        {
            printf("%d was entered %d times \n\n",i, * ( frequency + i ) );
            
        } // end if
        
    } // end for
    
} //void frequency_of_numbers(int *)


/*The exit function asks the user if 
they want to quit, if they select yes it
 will terminate gracefully and display 
a message. Otherwise it  will return to 
the main menu. Void is specified*/

//Implement function exit_program
//

void exit_program(void)
{
    char yesno;

    printf("Are you sure you want to exit the lotto? Y/N: ") ;
    scanf("%1s", &yesno);

    if(yesno== 'Y' || yesno == 'y') // User can enter an upper or lower case option 
    {
        printf("\nGoodbye, thank you for playing");
        Sleep(1500);
        exit(1000);

    } // end if

} // end function void exit_program(void)