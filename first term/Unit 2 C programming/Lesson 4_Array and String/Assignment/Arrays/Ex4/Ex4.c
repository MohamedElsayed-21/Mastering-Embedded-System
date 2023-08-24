#include <stdio.h>

#define MAX_SIZE 100
int main()
{
		/*
			C program to insert an element in an Array 	
			
			Enter no of element :5 
			1 2 3 4 5 
			Enter the element to be inserted : 6 
			Enter the location : 2 
			1 6 2 3 4 5 
	    */
	
	int size , element , location , iteration ;
    int array[MAX_SIZE];
	
	
label:
	printf ("Enter no of element (maximum %d): ", MAX_SIZE);
	scanf(" %d",&size);
	if (size >= MAX_SIZE ) goto label;
	
		printf ("\n Enter the Array : ");
		
		for (iteration = 0 ; iteration < size ; iteration ++ )
		{
				scanf(" %d",&array[iteration]);
		}
	
	
	printf ("\n Enter the element to be inserted : ");
	scanf(" %d",&element);

label1 :
	printf ("\n Enter the Index of element  : ");
	scanf(" %d",&location);
	
	// to make sure that the location can valid
	if (location < 0 || location > size)
		{
        printf("Invalid position!\n"); 
		goto label1;
		}

	for ( iteration = size-1  ; iteration >=  location ; iteration --  )
	{
	 * ( array + iteration + 1 ) = * ( array + iteration  ) ;
	}
	array[location]= element ;
	

		for (iteration = 0 ; iteration < size+1 ; iteration ++ )
		{
				printf(" %d\t",array[iteration]);
		}
	return 0 ;
	
}
