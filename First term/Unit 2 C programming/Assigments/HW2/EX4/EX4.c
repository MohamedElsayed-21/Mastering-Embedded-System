#include <stdio.h>


int main()
{
	
	/*
	c program to check whether a number is postive or negative 
	*/
	float num_1;
	printf ("Enter numbers: \n");
	scanf (" %f",&num_1);
	
	
	 if (num_1 > 0) 
        printf("%.2f is positive.", num_1); 
    else if (num_1 < 0) 
        printf("%.2f is negative.", num_1); 
    else if (num_1 == 0) 
        printf("You entered zero.", num_1); 

	return 0;
}