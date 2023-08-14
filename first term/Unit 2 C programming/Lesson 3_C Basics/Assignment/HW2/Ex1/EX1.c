#include <stdio.h>


int main()
{
	/*
	Write c program to check whether a Number is EVEn or Odd 
	*/
	
	int num;
	printf (" Enter an integer you want to check ");
	scanf("%d",&num);
	
	
		 printf ("\t\t using reminder operator \n");
	
	if ( 0==(num%2)  )
	{
		printf (" %d is even \n",num);
	}
	else 
	{
		printf (" %d is odd \n",num);
	}
	
	
	 printf ("\t\t using Bit wise operator \n");
	if ( 1UL ==((num&1UL))  )
	{
		printf (" %d is odd \n",num);
	}
	else 
	{
		printf (" %d is even \n",num);
	}
	
	return 0;
}