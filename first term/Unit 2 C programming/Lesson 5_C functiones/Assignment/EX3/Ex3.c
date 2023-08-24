#include <stdio.h>

#define MAX_SIZE 100


	int length ;
	int Get_string_lenth(char string []);
	void  Get_Reverse_string ( char string []  ,char  Reverse_string [] );

int main()
{
	
	/*
 C program to Reverse a sentence Using Recursion  
Output 

Enter a sentence :margorp emosewa
 awesome program  
	*/
	
	char string [MAX_SIZE] , Reverse_string [MAX_SIZE];
	
	printf ("Enter a sentence : ");
	scanf ("%[^\n]s",&string);
	
		 length = Get_string_lenth(string  );
		 
		Get_Reverse_string ( string , Reverse_string );
	
		printf("Reverse String is :  %s",Reverse_string);
		
	return 0;
}


	void  Get_Reverse_string ( char string []  ,char  Reverse_string [] )
	{
	
		static 	int iteration =0 ;
		
	
		if ( string [MAX_SIZE] != '\0'  && length > iteration )
		{	
			Reverse_string [length - iteration -1 ]	= string [iteration ];
			iteration ++;
			Get_Reverse_string ( string , Reverse_string );
		}
			Reverse_string [length] = 0;
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
	