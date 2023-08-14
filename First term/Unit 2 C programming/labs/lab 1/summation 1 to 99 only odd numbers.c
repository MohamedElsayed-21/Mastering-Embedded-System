#include <stdio.h>

int main()
{
	char a;
	long int sum =0;
	for (a=0;a<=99;a++)
	{
		if ((a%2)==1)
		{
		sum +=a;
		}
	}
	printf("the averagemaion is equal to %d",sum);
	
	return 0;
}