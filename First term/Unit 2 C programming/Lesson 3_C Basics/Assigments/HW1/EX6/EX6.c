#include <stdio.h>


int main()
{
/*	
EX6:

Write Source Code to Swap Two Numbers

#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
	
	*/
	
		
	float num_1,num_2,Temp;
	printf ("Enter value of num_1: ");
	scanf ("%f",&num_1);
	 
	printf ("\nEnter value of num_2: ");
	scanf ("%f",&num_2);
	 
	 Temp  = num_1;
	 num_1 = num_2;
	 num_2 = Temp ;
	 
	
printf ("\nAfter swapping, value of num_1 = %f",num_1);
printf ("\nAfter swapping, value of num_2 = %f",num_2);
	
	return 0;
}