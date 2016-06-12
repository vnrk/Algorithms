/*
 * 		fibonacci.c
 * 		TODO
 * 		Created on: 3:31:59 PM Jun 12, 2016
 * 		Author: Venkata 
 */
#include <stdio.h>
//the time complexity is exponential
//space complexity is O(n)
int fib(int n)
{
	if(n <= 1)
		return n; //f0 = 0, f1 = 1
	return
			fib(n-1) + fib(n-2);
}

//the time complexity is O(n)
//space complexity is O(n)
int fib_dp(int n)
{
	int f[n+1];

	int i;

	f[0] = 0;
	f[1] = 1;

	for(i=2; i<=n; i++) {
		f[i] = f[i-1] + f[i-2];
	}
	return f[n];
}

//the time complexity is O(n)
//space complexity is O(1)
int fib_dp_o(int n)
{
	int a=0, b=1, c;
	int i;

	for(i=2; i<=n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}

int main(int argc, char **argv) {
	int n=9;
	printf("%d\n", fib(n));
	printf("%d\n", fib_dp(n));
	printf("%d\n", fib_dp_o(n));
	return 0;
}



