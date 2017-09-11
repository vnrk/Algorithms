#include <iostream>
using namespace std;

bool isPalindrome(string::iterator low, string::iterator high)
{
	while (low < high)
	{
		if (*low != *high)
			return false;
		low++;
		high--;
	}
	return true;
}

int possiblePalinByRemovingOneChar(string str)
{
	int low = 0, high = str.length() - 1;

	while (low < high)
	{
		if (str[low] == str[high])
		{
			low++;
			high--;
		}
		else
		{
			if (isPalindrome(str.begin() + low + 1, str.begin() + high))
				return low;

			if (isPalindrome(str.begin() + low, str.begin() + high - 1))
				return high;

			return -1;
		}
	}
	return -2;
}

int main()
{
	string str = "abecebaa";
	int idx = possiblePalinByRemovingOneChar(str);
	if (idx == -1)
		cout << "Not Possible \n";
	else if (idx == -2)
		cout << "Possible without removing any character";
	else
		cout << "Possible by removing character"
		<< " at index " << idx << "\n";
	return 0;
}