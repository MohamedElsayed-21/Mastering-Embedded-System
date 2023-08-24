#include <stdio.h>

int Get_string_lenth ( char string [] );
 # define MAX_SIZE 100
int main()
{
	/*
	C program to Reverse string without using library function
	output : 
	Enter the string : Pritesh 
	
	Reverse string is : hsetirp
	*/
	
	char string [MAX_SIZE] , Reverse_string [MAX_SIZE];
	char   iteration   ;
	

	
	printf ("Enter a string : ");
	scanf ("%[^\n]s",&string);
	
		int length = Get_string_lenth(string);
	
	for ( iteration =0 ; string [MAX_SIZE] != '\0'  && length > iteration ;  iteration ++)	
	{
		 if (string [iteration] == '\0' ) break;// to make sure that 0 wont be in the index 0 in the reverse array 
	  Reverse_string [length - iteration -1 ]	= string [iteration ];
	}
	Reverse_string [length] = 0;
	
	printf(" Reverse String is :  %s",Reverse_string);
	
	
	return 0 ;
	
}


 int Get_string_lenth ( char string [] )
 {
	 	char   iteration ,counter=0 ;
	 for ( iteration =0 ; MAX_SIZE > iteration  && string [iteration] != '\0'  ; iteration ++)
	{
	counter ++ ;
	}
	 return counter ;
 }
 
