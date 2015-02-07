/*Lab 18
Structure to store
personal information
27/03/2014
Author: Eoin Irwin*/

#include<stdio.h>
#include<string.h>
#define SIZE 2

struct data
{
    char firstname[11];
    char surname[21];
    int DOB[12];
    int height[7];
    int weight[7];
    char eye[7];
    char country[11];
    
};

main()
{
    struct data bio;
    int i;
        
    for ( i = 0 ; i < SIZE ; i++ )
    {
        
        printf("Firstname: ");
        scanf("%s",bio.firstname);
        printf("Surname: ");
        scanf("%s",bio.surname);
        printf("Date of birth: ");
        scanf("%s",bio.DOB);
        printf("Height: ");
        scanf("%s",bio.height);
        printf("Weight Kg: ");
        scanf("%s",bio.weight);
        printf("Eye colour: ");
        scanf("%s",bio.eye);  
        printf("Country of Citizenship: ");
        scanf("%s",bio.country);
    
        printf("\n%s\n",bio.firstname);
        printf("%s\n",bio.surname);
        printf("%s\n",bio.DOB);
        printf("%sft'\n",bio.height);
        printf("%s Kg\n",bio.weight);
        printf("%s\n",bio.eye);
        printf("%s\n",bio.country);
        
    } // end for
    
        getchar();
        getchar();
    
} // end main()