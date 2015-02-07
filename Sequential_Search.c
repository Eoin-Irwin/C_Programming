#include <stdio.h>

//search for key in array array[] of size n

int sequentialSearch( int array[], int key, int n)
{
	int position = -1; 
    int i = 0;    // indicates key not found (default)

	while((i<=n-1) && (position=-1))        // possibly search whole array for key
	{
		if( key == array[i])
      {
            position = i;
			return position;	            // return position of key in array[]
      }
      
    i = i + 1;
      
	}
    
	return position;                    // indicates key is not found
}                                      // after 'for' loop is finished

void main()                            // main program to test the algorithm
{
	//declare and initialise a simple array of size 20
   
	int myarray[20] = {2, 4, 7, 8, 31, 22, 17, 6, 5, 11, 12, 30, 35, 38 ,40 ,42 ,46 ,48 ,50 ,52 };
	int position, key;
    int i;

	printf("Array is ");
	for(i = 0; i < 20; ++i)
		printf("%2d ", myarray[i]);

	printf("\n\nInput value to search for: ");
	scanf("%d", &key);

	//call the sequential search algorithm

	position = sequentialSearch(myarray, key, 20);

	if( position == -1)
    {
		printf("\nValue not found\n\n");
    }
	else
    {
		printf("\nValue found at array position: %d\n\n", position);
        getchar();
    }// end else

   getchar();
}