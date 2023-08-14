#include <stdio.h>


int main()
{
/*
c program to check if alphabets vowel or consonants
vowels charcters in alphabets 	a e i o u 
consonants is other charcters

*/
	
	char Character;

	printf ("Enter an alphabet:  ");
	scanf (" %c",&Character);
	
	printf("\n \t\t usnig switch case ");
	switch (Character)
	{
		case 'a' :
		case 'A' :
		case 'e' :
		case 'E' :
		case 'i' :
		case 'I' :
		case 'o' :
		case 'O' :
		case 'u' :
		case 'U' :
		
			printf ("\n%c is a vowel. \n",Character);
       break;
		default:
			printf ("\n%c is a consonants. \n",Character);
	}
// other method 

	printf("\n \t\t usnig if condition  ");
    if ( ('a'==Character) || ('A'==Character) || ('e'==Character) || ('E'==Character) || ('i'==Character) || ('I'==Character) || ('o'==Character) || ('O'==Character) || ('u'==Character) || ('U'==Character) )
    {
    	printf ("\n%c is a vowel. \n",Character);
    }
    else 
	{
		printf ("\n%c is a consonants. \n",Character);
	}
	
	
	
	return 0;

																																					
}