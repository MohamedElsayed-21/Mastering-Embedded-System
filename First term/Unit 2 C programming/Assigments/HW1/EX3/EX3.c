#include <stdio.h>


int main()
{
	
	/*
EX3:

Write C Program to Add Two Integers

i should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23

	*/
	
	int num_1,num_2;
	printf ("Enter two integers: ");
	scanf ("%d%d",&num_1,&num_2);
	
	printf ("\nSum: \"%d\"",(num_1+num_2));
		
	// 				int sum= num_1+num_2;
	//				printf ("\nSum: \"%d\"",sum);	
	return 0;
}