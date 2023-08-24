#include <stdio.h>


int main()
{
	float Arr_1 [2][2];
	float Arr_2 [2][2];
	float Sum_Arr [2][2];
	
	char Row ,Col;
	printf (" Enter the elements of 1st matrix");
	
	
	
	for (Row =0 ; Row < 2  ; Row ++)
	{
 		for (Col =0 ; Col < 2  ; Col ++)
        {
           	printf ("\n Enter Arr_1[%d][%d] :",Row,Col);
			scanf ("%f",&Arr_1[Row][Col]);
 		}
	}

	
	printf ("\n Enter the elements of 2nd matrix");
	
	
	for (Row =0 ; Row < 2  ; Row ++)
	{
 		for (Col =0 ; Col < 2  ; Col ++)
        {
           	printf ("\n Enter Arr_2[%d][%d] :",Row,Col);
			scanf ("%f",&Arr_2[Row][Col]);
 		}
	} 
	
	
	
	printf("Sum of Matrix \n");
	for (Row =0 ; Row < 2  ; Row ++)
	{
		for (Col =0 ; Col < 2  ; Col ++)
		{
			Sum_Arr[Row][Col] = Arr_1[Row][Col] + Arr_2[Row][Col];
			printf ("%.1f\t",Sum_Arr[Row][Col]);
		}
		printf ("\n");
	} 
	
	return 0 ;
	
}