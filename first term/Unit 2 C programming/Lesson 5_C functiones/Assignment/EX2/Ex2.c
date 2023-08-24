#include <stdio.h>

 long long  Get_Factorial (  unsigned int Num );
 
int main ()
{
/*
C program to caculate Factorial of a number using Recursion 
output : 
Enter an postive integer  : 6
Factorial of 6 = 720 
*/	
	
	  unsigned int  Num ;  
	  long long  Factorial;
	  
	  printf ("Enter an postive integer  : ");
	  scanf(" %u",&Num);
	  
		Factorial = Get_Factorial (Num);
	  printf("\nFactorial of %u = %lld",Num,Factorial);
	
	return 0 ; 
}

 long long  Get_Factorial ( unsigned int Num )
 {
	static long long  Factorial = 1 ; 
	  
	  
	   if ( 0 == Num )
	  {
		  Factorial = 1;
		  return Factorial ;		
	  }
	  
	  
	 if (Num >0)
	 {
			Factorial *= Num ;
			Num --;
			
			if (Num >0)
			{
			Factorial = Get_Factorial(Num);
			} 
			
			return Factorial;
	 }
 }
 
 
	