//kadane algorithm

#include <iostream>

int max(int a, int b) {
	if(a < b)
		return b;
	else 
		return a;
}

int main() {
	int main_max = 0, temp_max = 0;
	int a[] = {-2, -3, 4, -1, -2, 1, 5};
	int n = 7;
	for(int i=0; i<n; i++) {
		temp_max = max(a[i], temp_max+a[i]);
		main_max = max(main_max, temp_max);
	}
	std::cout << main_max;
	return 0;
}