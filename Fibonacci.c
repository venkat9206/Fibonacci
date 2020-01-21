#define ULLONG_MAX 18446744073709551615ULL
#define ITERATIVE 1
#define RECURSIVE 0
#include <stdio.h>

#if ITERATIVE
unsigned long long fibonacci(int n) 
{
        if (n <= 1) 
            return n;

        unsigned long long c = 0;        // current fibonacci no.
        unsigned long long p1 = 0;       // second previous fibonacci no. 
        unsigned long long p2 = 1;		  // previous fibonacci no.

        for (int i = 1; i <= n; i++) {
        	if (ULLONG_MAX - p2 < p1)
        	{
        		printf("\nU LONG LONG MAX LIMIT REACHED!!! Fibonacci computed until the %d th term\n", i);
        		return c;
        	}
        	else
        	{
 				c = p1 + p2;
            	p2 = p1;
            	p1 = c;
        	}
        }
      	return c;
}
#endif

#if RECURSIVE
unsigned long long fibonacci(unsigned long long n)
{
   if (n <= 1)
    	return n;    
   else
      	return ( fibonacci(n-1) + fibonacci(n-2) );
} 
#endif

int main() 
{   
	unsigned long long n;
	scanf("%d",&n);
    printf("%llu ", fibonacci(n)); 
    return 0; 
} 
