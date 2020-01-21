// using memoized Recursion 

#include <stdio.h>
unsigned long long fib[100]; 
unsigned long long fibonacci(int n) 
{ 
    if (n <= 1) 
        return n; 

    if (fib[n] != 0)        // check for already computed fibonacci terms to avoid repeated calculation
        return fib[n];      
  
    else
	 { 
  

        fib[n] = fibonacci(n - 1) + fibonacci(n - 2); // store the calculated term
  
        return fib[n]; 
    } 
} 
  
int main() 
{ 
    int n;
    scanf("%d", &n);
    printf("%llu", fibonacci(n)); 
    return 0; 
}
