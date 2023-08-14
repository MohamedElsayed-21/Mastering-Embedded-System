#include <stdio.h>


int main()
{
	
	/*
	EX5:

Write C Program to Find ASCII Value of a Character

#########Console_output######
Enter a character: G
ASCII value of G = 71
	*/
	
	char Character;
	printf ("Enter a character:  \n");
	scanf ("%c",&Character);
	
	
	printf ("\nASCII value of %c = %d \n",Character,Character);
	
	
	return 0;
}