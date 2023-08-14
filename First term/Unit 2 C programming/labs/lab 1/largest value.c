#include <stdio.h>

int main()
{
	
	int _1stnum ,_2ndnum , largest;
	printf ("enter two numbers ");
			// fflush (stdout); fflush (stdin); 
	scanf("%d%d",&_1stnum,&_2ndnum);

/*
	if (_1stnum > _2ndnum)
	{
		largest = _1stnum;
			printf ("the largest value is equal to  %d ",largest);
	}
	else if (_1stnum < _2ndnum)
	{
		largest = _2ndnum;
		printf ("the largest value is equal to  %d ",largest);
	}
	else 
	{
	printf ("\nthe two numbers are equal");
	}
	*/
	largest=(_1stnum > _2ndnum)?_1stnum:_2ndnum;
	printf ("the largest value is equal to  %d ",largest);
	return 0 ;
}