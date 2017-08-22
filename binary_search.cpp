#include <stdio.h>
//you dont have to include mid again if its not equal so eliminate in both the conditions
//Also mid = low + (high - low) / 2 is important else this will be wrong in the subsequent calls
int binarySearch(int arr[], int low, int high, int x)
{
	if (high >= low) {
		int mid = low + (high - low) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr, low, mid - 1, x);
		if (arr[mid] < x)
			return binarySearch(arr, mid + 1, high, x);
	}
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}