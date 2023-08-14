#include <stdio.h>


int main()
{
	/*
	c program to calclate sum of natural numbers 
	*/
	
	 unsigned long int Num , sum=0;
	
	  printf ("Enter an integer : ");
	  scanf("%u",&Num);
	
	 for (Num ; Num > 0  ; -- Num)
	 { 
		sum +=Num; 
	 }
	
		  printf ("\nSum = %d ",sum);

	return 0;
}