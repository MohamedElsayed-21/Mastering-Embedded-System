#include <stdio.h>


int main()
{
	
	/*
	C program to calculate Average Using arrays 
	*/
	float Arr_1 [100];
	char num ,iteration;
	double sum =0 ,average ;
	
	label :
	
  	printf ("\n Enter the numbers of data  (less than 100) :");
	scanf ("%i",&num);
	
	if (num >100)	goto label ;


		 for (iteration =1 ; iteration <= num  ;  iteration ++ )
		 {
			 printf ("Enter Number : ");
			 scanf ("%f",& Arr_1 [iteration] );
			 sum += Arr_1 [iteration];
		 }
	
	average = sum /num;
	printf ("Average = %0.2lf ",average);
	return 0 ;
	
}