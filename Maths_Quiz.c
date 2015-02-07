/*This is a maths quiz
that will ask questions
and tell you at the end
how many questions you
got correct and 
incorrect
Author: Eoin Irwin
14-11-13*/

#include <stdio.h>
#include<conio.h>
#include<windows.h>
main() 
{
    int one;
    int answer1 = 2;
    int answer2 = 9;
    int answer3 = 0;
    int answer4 = 5;
    int correct=0,incorrect=0;
    int num1 = 0;
    int option = 0 ;
    char yesno; 
    int i = 0, j = 0; // counters that increment (add 1) to its total
    
    while(true)
    {// start of while loop which lasts until line 307 in the code to keep the menu constant
        
        printf("1.Enter Questions\n\n") ; 
        printf("2.Start quiz\n\n") ;
        printf("3.Display the numbers of correct and incorrect questions\n\n") ;
        printf("4.Exit Program\n\n") ;
        scanf("%d", &option);//allows an input for 1, 2, 3 or 4
        clrscr(); // clear screen function wipes text off of the screen
        
        
        //loop to check the user's input is a valid option i.e between 1 and 4
        if(option != 1&&option!=2&&option!=4&&option!=3) 
        {
            printf("You must choose between options 1-4\n");
        }    
 
        switch(option) //the switch option allows the user to choose number of questions they want .
        {
            case 1: //Case 1  of switch 1
            {
                 /*these are both counters 
                                    for the score of the user */
                
                i=0; // correct counter
                j=0; // incorrect counter
                
                printf("1. One question\n") ; // selecting this will select one question for their quiz
           
                printf("2. Two questions\n") ; 
             
                printf("3. Three questions\n") ;
            
                printf("4. Four questions\n") ; 
             
                scanf("%d", &num1) ; //Reads in the option for the number of questions to be answered
                clrscr();
        
                if(num1 != 1 && num1 != 2&& num1 != 3 && num1 != 4)//loop to check if the number of questions is between 1,2,3 and 4
                {
                    printf("You must choose questions within the range of 1-4\n") ;
                } // end of if
                
            } // end of case 1 
            
            break; /*The case stops after all of the
                                    code inside it has been executed   */
             
            case 2: 
            { // case 2 start
                 if(i>0)
                 {
                     printf("You must select options 1, 3 or 4 in order to proceed with this round\n");
                     Sleep(1200); // This means the program will freeze for 1.2 seconds, 1000 = 1 second
                     clrscr();
                     j++;
                 }
                switch(num1)//start of option 2 using num1 as a variable of numbers of questions to be asked 
                {
                    case 1:
                    {
                        printf("Q1. 1+1=: ");
                        scanf("%d", &one); //the answer is stored in a variable one, two, three, four, and matched with answer1-5. if it matches..then result is displayed
                        if(one == 2)
            
                            /* If means that the answer must be equal to in this case 2
                                                        then you will be shown the message "2 is correct!" 
                                                        The else then means otherwise print the message 
                                                        " n is incorrect!, Answer is 2" n in this case is
                                                        the number the user entered*/ 
                        {
                            printf("\n%d is Correct!\n\n",one) ;
                            correct++;
                        }
                        else
                        {
                            printf("\n%d is incorrect!Answer is %d \n\n",one, answer1);
                            incorrect++;
                        } 
                        /*j++ counter will increment by 1 for either
                                                correct or incorrect depending if the user
                                                enters a correct or incorrect answer*/
                        j++;
                        Sleep(2000);
                        clrscr();
                        break;
                    }//end of case 1 of question 1 
                     
                    case 2:
                    {   
                        //Q1
                        printf("1. 1+1=: ");
                        scanf("%d", &one);
                        if(one == 2) 
                        {
                            printf("\n%d is Correct!\n\n", one);
                            correct++; // Increments total score by 1 if correct
                        }
                        else
                        {
                            printf("\n%d is incorrect! Answer is %d \n\n",one,answer1) ;
                            incorrect++; // Increments total score by 1 if incorrect
                        }
                        
                        //Q2
                        printf("2. 3*3=: ") ;
                        scanf("%d", &one) ;
                        if(one == 9)
                        {
                            printf("\n%d is correct!\n\n", one) ;
                            correct++;
                        }
                        else
                        {
                            printf("\n%d is incorrect! Answer is %d \n\n",one,answer2);
                            incorrect++;
                        }
                        j++;
                        Sleep(2000);
                        clrscr();
                        break;
                    }//end of case 2 question 2
                   
                    case 3: // start of case 2 question 3
                    { 
                        //Q1
                        printf("1. 1+1=: ") ;
                        scanf("%d", &one) ;
                        if(one == 2)
                        {
                            
                            printf("%d is correct!\n\n",one);
                            correct++;
                        }
                        else
                        {
                            printf("%d is incorrect! Answer is %d \n\n",one,answer1);
                            incorrect++;
                        }
                 
                        //Q2
                        printf("2. 3*3= :");
                        scanf("%d", &one);
                    
                        if(one == 9)
                        {
                            printf("%d is correct!\n\n", one);
                            correct++;
                        }
                        else
                        {
                            printf("%d is incorrect! Answer is %d \n\n",one,answer2);
                            incorrect++;
                        }
                    
                        //Q3
                        printf("3. 2-2: ") ;
                        scanf("%d", &one) ;
                         
                        if(one == 0)
                        {
                            printf("%d is correct!\n\n", one);
                            correct++;
                        }
                        else
                        {
                            printf("%d is incorrect! Answer is %d \n\n",one,answer3);
                            incorrect++;
                        }
                        j++;
                        Sleep(2000);
                        clrscr();
                        break ;
                    } // end of case 2 question 3 
                    
                    
                    case 4:
                    { // start of case 2 question 4
                        //Q1
                        printf("1. 1+1=:");
                        scanf("%d", &one);
                        if(one == 2)
                        {
                            printf("%d is correct!\n\n",one);
                            correct++;
                        }
                        else
                        {
                            printf("%d is incorrect! Answer is %d \n\n",one,answer1);
                            incorrect++;
                        }
                        
                        //Q2
                        printf("2. 3*3=: ") ;
                        scanf("%d", &one) ;
                        if(one == 9)
                        {
                            printf("%d is correct!\n\n", one) ;
                            correct++;
                        }
                        else
                        {
                            printf("%d is incorrect! Answer is %d \n\n",one,answer2) ;
                            incorrect++;
                        }
                        
                        //Q3
                        printf("3. 2-2=: ") ;
                        scanf("%d", &one) ;
                        if(one == 0)
                        {
                            printf("%d is correct!\n\n", one) ;
                            correct++;
                        }
                        else
                        {
                            printf("%d is incorrect! Answer is %d \n\n",one,answer3);
                            incorrect++;
                        }
                        
                        //Q4
                        printf("4. 10/2=: ") ;
                        scanf("%d", &one) ;
                     
                        if(one == 5)
                        {
                            printf("\n%d is correct!\n\n", one) ;
                            correct++;
                        }
                        else
                        {
                           printf("\%d is incorrect! Answer is %d \n\n",one,answer4) ;
                            incorrect++;
                        }
                        j++;
                        Sleep(2000);
                        clrscr();
                        break ; 
                    }
                     
                }
                if(j==0)
                {
                printf("You must select options 1, 3 or 4 in order to proceed with this round");
                Sleep(1200);
                clrscr();
                }
                i++;
                num1=0;
               break;
            }//end of case 2 of switch(option)
             
           
            case 3: //Case 3 shows how many questions the user answer correctly
            {
                i=0;
                printf("You got %d correct answers\n\n",correct); // Shows the answers you got correct
                printf("You got %d incorrect answers\n",incorrect); // Shows the answers you got incorrect
                Sleep(1500);
                clrscr();
                correct=0; // This resets the correct counter to zero
                incorrect=0; // This resets the incorrect counter to zero
            }//end of switch(num1)
            break;
             
            case 4:
            { 
                printf("Are you sure you want to exit quiz?\n") ;
                printf("Y/N") ;
                printf("\n") ;
                scanf("%1s", &yesno);
                if(yesno== 'Y' || yesno == 'y')
                {
                    printf("\nGoodbye, thank you for playing");
                    Sleep(1000);
                    return 0;
                }
                clrscr() ;
                break; /*user must input y to quit*/
            }
        }
    }// while loop ends here
} // end main