#include <stdio.h>


int main()
{
	/*
	c program to check whether a character is an alphabet or not 
	*/
	char Character;
	
	printf ("Enter a character : ");
	scanf("%c",&Character);
	
	
	switch ( Character )
	{
		case 'a' ... 'z' :
		case 'A' ... 'Z' :
		printf ("\n %c is an alphabet ",Character);
		
		break;
		
		default :
			printf ("\n %c is not an alphabet",Character);
		
	}
	

	return 0;
}