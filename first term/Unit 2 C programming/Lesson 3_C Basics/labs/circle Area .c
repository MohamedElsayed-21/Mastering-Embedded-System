#include <stdio.h>

int main()
{
		char demand;
		float diameter,Circcle_Area,Circumference;
		
		
		
		printf("which operation do u want to get \n");
		label:
	    printf("\t\tpress \'a\' for Area  of Circle  \n");
	    printf("\t\tpress \'b\' for Circumference of Circle \n");
	// fflush (stdout); fflush (stdin); 
      	scanf("%c",&demand);
	switch (demand)
	{
	case 'a' :
	printf ("enter the diameter if circle ");
	// fflush (stdout); fflush (stdin); 
	scanf("%f",&diameter);
		
	Circcle_Area= 3.14*diameter*diameter/4 ;
	printf ("The Area  of Circcle is equals to %f\n",Circcle_Area);
	break;
	
	
	case 'b' :
	printf ("enter the diameter if circle ");
			// fflush (stdout); fflush (stdin); 
	scanf("%f",&diameter);

    Circumference= 3.14*diameter ;
	printf ("The Circumference of Circcle is equals to %f\n",Circumference);
	break;
	
	default :
	printf("wrong option \n");
	goto label;
	
	}
	
	return 0;
}