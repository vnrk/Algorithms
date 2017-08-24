#include <iostream>
using namespace std;

// A utility for creating palindrome
int createPalindrome(int input, bool isOdd)
{
	int n = input;
	int palin = input;
	// checks if number of digits is odd or even
	// if odd then neglect the last digit of input in
	// finding reverse as in case of odd number of
	// digits middle element occur once
	if (isOdd)
		n /= 10;

	// Creates palindrome by just appending reverse
	// of number to itself
	while (n > 0)
	{
		palin = palin * 10 + (n % 10);
		n /= 10;
	}
	return palin;
}

void generatePaldindromes(int n)
{
	int number;

	// Run two times for odd and even length palindromes
	for (int j = 0; j < 2; j++)
	{
		// Creates palindrome numbers with first half as i. 
		// Value of j decided whether we need an odd length
		// of even length palindrome.
		int i = 1;
		while ((number = createPalindrome(i, j % 2)) < n)
		//while (number = createPalindrome(i, j % 2))
		{
			cout << number << " ";
			i++;
		}
	}
}

int main()
{
	int n = 104;
	generatePaldindromes(n);
	return 0;
}