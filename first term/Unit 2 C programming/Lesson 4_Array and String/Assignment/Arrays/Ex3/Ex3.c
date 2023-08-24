#include <stdio.h>

#define MAX_SIZE 5

int main()
{
	/*
	C program to find the transpose of a matrix 
	*/
	
	int Matrix [MAX_SIZE][MAX_SIZE];
	int Transpose [MAX_SIZE][MAX_SIZE];
	int Row ,Col,W_Row,W_Col;
	
	  printf("Enter the number of rows (maximum %d): ", MAX_SIZE);
    scanf("%d", &W_Row);

    printf("Enter the number of columns (maximum %d): ", MAX_SIZE);
    scanf("%d", &W_Col);
	
		
			 printf ("\n \t \t Enter elements of matrix");
	for (Row =0 ; Row < W_Row  ; Row ++)
	{
			for (Col =0 ; Col < W_Col  ; Col ++)
			{
				printf ("\n Enter  element Matrix[%d][%d]:  ",Row,Col);
				scanf ("%d",&Matrix[Row][Col]);
			}
	}
	
	 printf ("\n Entered matrix\n");
	for (Row =0 ; Row < W_Row  ; Row ++)
	{
			for (Col =0 ; Col < W_Col  ; Col ++)
			{		
				printf ("%d \t",Matrix[Row][Col]);
			}
			printf ("\n");
	}
		 
		
	printf ("\n Transpose of matrix\n");
	for (Row =0 ; Row <W_Col   ; Row ++)
	{
			for (Col =0 ; Col <W_Row  ; Col ++)
			{
				Transpose [Row][Col] = Matrix[Col][Row] ;
				printf ("%d\t",Transpose[Row][Col]);
			}
				printf ("\n");
	}
	
	return 0 ;
}
