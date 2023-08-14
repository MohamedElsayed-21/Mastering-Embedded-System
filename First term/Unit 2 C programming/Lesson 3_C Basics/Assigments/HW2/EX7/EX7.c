#include <stdio.h>


int main()
{
	
		
	  int Num ;  
	 long long  Factorial=1;
	
	  printf ("Enter an integer : ");
	  scanf("%d",&Num);
	
	  if ( 0 > Num || 32U == Num   )// to make sure that number isnot negative 
	  {
              printf ("Error!!!! Factorial of negative number doesn\'t exist .");
              return 0;		 
	  }	  
	  if ( 0 == Num )
	  {
		  Factorial = 1;
		  printf("\nFactorial = %lld",Factorial);
		   return 0;		
	  }
	  
	  
		  do 
		  { 
		  Factorial *= Num ;
	
			Num --;
		  }while ( (Num >0) );
	  
	  	printf("\nFactorial = %lld",Factorial);
	
	
	return 0;
}