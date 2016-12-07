#include <iostream>
using namespace std;

int inversionCount(int *a, int n) {
	int i, j, ic=0;
	for(i=0; i<n-1; i++) {
		for(j=i+1; j<n; j++){
			if(a[i] > a[j])
				ic++;
		}
	}
	return ic;
}

int main() {
	int arr[] = {2, 4, 1, 3, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << inversionCount(arr, n) << "\n";
	return 0;
}