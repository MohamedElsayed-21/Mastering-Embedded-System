#include <stdio.h>
#include <stdbool.h>

 bool Is_It_Prime ( unsigned long int num  );
int main ()
{
	/*
	prime Numbers Between two Intervals by making User defined function 
	output :
	Enter two numbers ( intervals):10 
	30 
	 prime numbers between 10 and 30 are : 11 13 17 19 23 29
	*/
	
	 unsigned  long int _1st_edge , _2nd_edge , iteration  ;
	 
	 bool check ; 
	 printf ("Enter two numbers ( intervals):  ");
	 
	 scanf (" %lu %lu",&_1st_edge,&_2nd_edge);
	 
 if (_1st_edge > _2nd_edge )
 { // swap to make the first edge smaller than the last end 
	_1st_edge = _2nd_edge ^_1st_edge ;
	_2nd_edge = _2nd_edge ^_1st_edge ;
	_1st_edge = _2nd_edge ^_1st_edge ;
 }
  printf("Prime numbers between %lu and %lu are: ", _1st_edge, _2nd_edge); 
  
for ( iteration = _1st_edge  ; iteration <=  _2nd_edge  ; iteration ++ )
{
	 check = Is_It_Prime (iteration);
	 
	if(check== true )
	{
		printf("%lu  ", iteration );
	}
	
}
	
	return 0;
}


bool Is_It_Prime(unsigned long int num) {
    unsigned long int i, count = 0;
    
    if (num < 2) {
        // A prime number should be positive and not equal to 1.
        return false;
    }
    
    if (num == 2) {
        // 2 is the smallest prime number
        return true;
    }
    
    for (i = 2; i * i <= num; i++)
	{
        if (num % i == 0) 
		{
            count++;
            break;
        }
    }
    
    if (count == 0) {
        return true;
    } else {
        return false;
    }
} 

 