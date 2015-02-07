/*Binary Seach algortithm which
searches through two halfs of the array
which contains 100 numbers
Author:Eoin Irwin*/

#include <stdio.h>
//Search for key in array[] of size n

int BinarySearch(int array[], int min_index, int max_index, int key)
{
	int position = -1;                  // indicates key not found (default)
	int mid;
    int counter=0;
   
	while (min_index <= max_index)
	{
        //for loop used to go through elements with which the key is compared with
        
        mid = (min_index + max_index)/2; // find the middle index in the array.
        
        printf("%d compared with key: %d \n",array[mid],key);
        
        counter++;
        
        if( key == array[mid])             // COMPARE KEY with A[k] here
        {
            position = mid;
            
            printf("\n\nThe key was compared %d times, until it was found",counter);
            
            return position;	            // return position of key in array[]
        }
        else 
            if (key < array[mid])             // search first half
            {
                
                max_index = mid-1;                 // COMPUTE max_index HERE, first half
            }
            else                                   // search second half
            {
                
                min_index = mid+1;                 // COMPUTE min_index HERE, second half
            }//end if else ()
            
        }//end else if 
        
    }//end while()

	return position;                    // indicates key is not found
}                                      // after 'while' loop is finished


void main()                             // main program to test the algorithm
{
	//declare and initialise a simple array of size 100
   
	int myarray[100];
	int position, key;
	int low, high;

	printf("\nArray is :\n");
    
	for(int i = 0; i < 100; ++i)
    {
        myarray[i] = 2*i + 1;
		printf("%d \n", myarray[i]);
    }//end for ()

	printf("\n\nInput value to search for: ");
	scanf("%d", &key);
    
	low = 0;               // Initial min index
	high = 99;              // Initial max index

	// Call the Binary Search algorithm

	position = BinarySearch(myarray, low, high, key);

	if( position == -1)
    {
		printf("\nValue %d not found\n\n", key);      // key not found
    }
	else
    {
		printf("\n\n\nValue %d found at array position: %d\n\n", key , position);
    }//end else()
    
	getchar();
}//end main()