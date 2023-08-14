#include <stdio.h>


int main()
{
/*	c program to find the largest Number among three Numbers */
	
	float num_1,num_2,num_3,largest=0 ;

	printf ("Enter value of num_1: ");
	scanf (" %f",&num_1);
	 
	printf ("\nEnter value of num_2: ");
	scanf (" %f",&num_2);
	
	printf ("Enter value of num_3: ");
	scanf (" %f",&num_3);


				if ((num_1 > num_2 ))
				{
					if(num_1 > num_3) 
					{
						largest = num_1;
					}
					else 
					{
						largest = num_3;
					}				
				}
				else if ((num_2 > num_1 ))
				{
					if(num_2 > num_3) 
					{
						largest = num_2;
					}
					else 
					{
						largest = num_3;
					}
					
				}
				else if ((num_1 == num_2))
				{
					printf ("\n warning num_1 = num_2 ");
					
					if(num_1 > num_3) 
					{
						largest = num_1;
					}
					else 
					{
						largest = num_3;
					}
				}
				else if ((num_3 == num_2))
				{
					printf ("\n warning num_3 = num_2 ");
					
					if(num_3 > num_1) 
					{
						largest = num_3;
					}
					else 
					{
						largest = num_1;
					}
				}
				else 
				{
					printf ("\n warning num_1 = num_2 = num_3 ");
				}

		if (largest != 0)
		{
		printf ("\n largest number is : %.2f ",largest);
		}
		else 
		{
				//  if the largest numbers is zero
			printf ("\n largest number is : zero ");
		}
			return 0;
}