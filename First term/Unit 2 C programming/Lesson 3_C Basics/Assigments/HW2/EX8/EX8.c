#include <stdio.h>


int main()
{
	/*
c program to make a simple calculator to add , substract multiplt and divide using switch case 
	*/
	
	char operation;
	double  num_1 , num_2 ;
	
		printf ("enter operator   \n");
label:
	    printf("\t\tpress \'+\'   for add .\n");
	    printf("\t\tpress \'-\'   for substruct .\n");
	    printf("\t\tpress \'*\'  for multiply . \n");
	    printf("\t\tpress \'/\'  for division . \n");
	
	scanf(" %c",&operation);
	
	printf ("\nEnter two operands : ");
	scanf(" %lf %lf",&num_1 ,&num_2);
switch (operation)
	{
	case '+' :
	 printf("%.3lf + %.3lf = %.1lf", num_1, num_2, (num_1 + num_2));
	break;
	
	case '-' :
 printf("%.3lf - %.3lf = %.1lf", num_1, num_2, (num_1 - num_2));
	break;
	
	case '*' :
 printf("%.3lf  * %.3lf  = %.1lf", num_1, num_2, (num_1 * num_2));
	break;
	
	case '/' :
 printf("%.3lf  / %.3lf  = %.1lf", num_1, num_2, (num_1 / num_2));
	break;
	
	default :
	printf ("\n you didnot enter the operator correctly .\n  try again ... \n");
	goto label ;
	
	}

	return 0;
}
