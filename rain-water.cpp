#include <iostream>
#include <algorithm>
using namespace std;

int getMaxRain(int *towerHeight, int n) {
	int *maxSeenRight = (int *)malloc(sizeof(int)*n);
	int maxSeenLeft = 0, maxSeenSoFar = 0, rainwater = 0;
	for (int i = n; i >= 0; i--) {
		if (towerHeight[i] > maxSeenSoFar) {
			maxSeenSoFar = towerHeight[i];
			maxSeenRight[i] = maxSeenSoFar;
		}
		else
			maxSeenRight[i] = maxSeenSoFar;
	}
	for (int i = 0; i < n; i++) {
		rainwater = rainwater + max(min(maxSeenLeft, maxSeenRight[i]) - towerHeight[i], 0);
		if (towerHeight[i] > maxSeenLeft)
			maxSeenLeft = towerHeight[i];
	}
	return rainwater;
}

int main()
{
	int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Maximum water that can be accumulated is "
		<< getMaxRain(arr, n);
	return 0;
}