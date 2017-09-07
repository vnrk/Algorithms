#include <iostream>
using namespace std;

void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void permutate(char *str, int l, int r) {
	if (l == r) {
		cout << str << endl;
		return;
	}
	else {
		for (int i = l; i <= r; i++) {
			swap((str + l), (str + i));
			permutate(str, l + 1, r);
			swap((str + l), (str + i));
		}
	}
}

int main()
{
    char str[] = "ABC";
    int n = strlen(str);
    permutate(str, 0, n-1);
    return 0;
}