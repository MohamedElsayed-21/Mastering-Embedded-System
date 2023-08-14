#include <stdio.h>

int main()
{
	
	 int Num_student, degree,sum=0;
	float average;
	printf ("please enter number of students ");
	//fflush (stdin); fflush(stdout);
	scanf ("%d",&Num_student);
	
	 int a;
	for (a=1;a<=Num_student;a++)
	{
		printf("Enter student (%d) degree : ",a);
			//fflush (stdin); fflush(stdout);
		scanf ("%d",&degree);
		sum +=degree;
	}
	
	average=(float)sum/Num_student;
	printf("the average is equal to \'%f\'",average);
	
	return 0;
}