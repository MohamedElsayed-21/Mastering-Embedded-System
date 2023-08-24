#include <stdio.h>



int Get_power (int  , unsigned int  );

int main ()
{
	
	/*
	C program to Calculate the Power of a Number Using Recursion .
	
	Output : 
	Enter base number : 3 
	Enter Power number (postive integer) : 3 
	3^3= 27
	*/
	
	int base  , Result ;
	unsigned int Power ;
	
	printf ("Enter base number :  ");
	scanf (" %d",&base);
	
	printf ("Enter Power number (postive integer) :  ");
	scanf (" %d",&Power);

	 Result = Get_power ( base , Power );
	
	printf ("\n %d^%d = %d ",base ,Power ,Result );
	
	return 0 ;
}



int Get_power ( int base ,  unsigned int Power )
{

	static int Result =1  ;

		if ( Power >= 1 )
		{
			Result *= base ; 
			Power -- ;
			
			return Get_power ( base , Power );
		}
		else 
		{
			return Result;
		}
		
}