** README **

Fibonacci series

*** PART - I ***

The file main.c should contain the function that computes the fibonacci series upto the given term except for terms 95 to 100 as this will overflow the max variable buffer.


*** PART - II ***

The iteration method is much faster and uses very less memory compared to the recursive method. The iterative method keeps track of only three variales i.e. the two previous fibonacci numbers and the current fibonacci number. Each and every recursive function call will be performing a heavy stack operation pushing and popping the different values and the stack segment will not be teared down until the final term of the fibonacci series is computed.

In terms of time complexity, the iterative operation gives us a complexity of O(n). The recursive operation gives about O(2^n). 

Hence, the iterative method is what we would use in production. The reason to use a recursive method is by using memoization which allows to avoid repeated calls and improve time complexity.


 *** PART - III ***
 
memoized recursion is a way to optimize the time complexity.
