#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
	
	
	/* C progran to find the frequencey of charaters in a string 
	Output 
	Enter a string : This website is awesome.
	Enter a character to find frequency : e
	Frequency of ' e ' = 4  
	*/
	
	 char string [MAX_SIZE];
	char character , iteration ,counter=0 ;
	char lowercase , uppercase ;
	printf ("Enter a string : ");
	scanf ("%[^\n]s",string );
	
	printf ("\nEnter a character to find frequency :  ");
	scanf(" %c", &character);	
	// to make sure that both uppercase and lowercase included in counter
	if (character >96 && character < 123)
	{
		 lowercase = character ;
		uppercase = lowercase - 32 ;
	}
	
	if (character >64 && character < 91)
	{
		 uppercase = character ;
		lowercase =  uppercase + 32 ;
	}
	
	
	for ( iteration =0 ; MAX_SIZE > iteration  && string [iteration] != 0  ; iteration ++)
	{
		if (string [iteration] == lowercase || string [iteration] ==  uppercase)
		{ 
			counter ++;
		}
	}
	
	printf ("\nFrequency of \'%c\' =  %d ",character ,counter );
	
	
	return 0 ;
	
}