#include <stdio.h>


int main()
{
		/*
		EX4:

Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
##########Console-output###

###########################
Enter two numbers: 2.4
1.1
Product: 2.640000
		*/
	float num_1,num_2;
	printf ("Enter two numbers: \n");
	scanf ("%f%f",&num_1,&num_2);
	
	printf ("\nProduct: \"%f\"",(num_1*num_2));
	
			// float Product= num_1*num_2;
		//printf ("\nProduct: \"%f\"",Product);
	
	return 0;
}