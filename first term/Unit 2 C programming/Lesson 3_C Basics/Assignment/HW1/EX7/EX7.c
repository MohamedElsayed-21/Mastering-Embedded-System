#include <stdio.h>

void FuncSwap (int* , int*);


int main()
{

/*
EX7:
it is an interview trick

Write Source Code to Swap Two Numbers without temp variable.
*/
/* 
bitwise operator cannot work in float number but 
 arthimitic operator can  so we will assume that the number is integer in the first time 
 */
 
int num_1,num_2;
	

	printf ("\nEnter integer value of num_1: ");
	scanf ("%d",&num_1);
	 
	printf ("\nEnter integer value of num_2: ");
	scanf ("%d",&num_2);
	
   num_1 = num_1 ^ num_2  ;
   num_2 = num_1 ^ num_2  ;
   num_1 = num_1 ^ num_2  ;
   


		printf ("\t\tusing bitwise operator ");
printf ("\nAfter swapping using bitwise operator , value of num_1 = %d",num_1);
printf ("\nAfter swapping using bitwise operator , value of num_2 = %d",num_2);
	   
	   FuncSwap(&num_1,&num_2);
	   	
printf ("\nAfter swapping using arthimitic operator  , value of num_1 = %d",num_1);
printf ("\nAfter swapping using arthimitic operator  , value of num_2 = %d",num_2);


return 0;
}


void FuncSwap (int* a , int* b)
{
		
	printf ("\n\t\t using arthimitic operator  ");
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
			  
}