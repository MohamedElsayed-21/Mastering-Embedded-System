#include <stdio.h>

#define MAX_SIZE 100

int main()
{
	/*  C program to search an element in Array 
	Output : 
	Enter no of Elements : 5 
	11 22 33 44 55 
	Enter the elements to be searched : 44 
	Number  fount at the location = 4 
	*/
	
	int size , iteration , Num_2_Search ,flag ; 
	 int array[MAX_SIZE];
	
	
		
label:
	printf ("Enter no of element (maximum %d): ", MAX_SIZE);
	scanf(" %d",&size);
	if (size >= MAX_SIZE ) goto label;
	
	printf ("\n \t \t Enter the Array : ");
		
		for (iteration = 0 ; iteration < size ; iteration ++ )
		{
				scanf(" %d",&array[iteration]);
		}
	
	printf ("\nEnter the elements to be searched : ");
	scanf ("%d",&Num_2_Search);
	
	
	for ( iteration = 0 ;  iteration < size ; iteration ++)
	{
		if (Num_2_Search == array[iteration])
		{
			flag =1;
				printf ("\nNumber  found at the location =  %d",iteration +1 );
				break ;
		}
		flag =0;
	}
	
	
	if (0 == flag ) 	printf ("\nthe Number is not exisit ");
	
	return 0 ;
	
}