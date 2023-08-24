#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	
	/*
	C program to find the length of a string 
	
	output : 
	Enter a string :  Programiz 
	lenth of string : 9
	*/
	
	
	
	char string [MAX_SIZE];
	char   iteration ,counter=0 ;
	
	
	
	printf ("Enter a string : ");
	scanf ("%[^\n]s",&string); // [^\n] to read string with space 
	
	for ( iteration =0 ; MAX_SIZE > iteration  && string [iteration] != '\0'  ; iteration ++)
	{
		if (string [iteration] == ' ' )
			continue;
	counter ++ ;
	}
	
	printf ("\nlength of string  (whereas the space exclude): %d ", counter);
	
	
	return 0 ;
}