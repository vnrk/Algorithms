/*
 * 		largest-sum-contiguous-subarray1.c
 * 		TODO
 * 		Created on: 12:14:38 AM Oct 6, 2015
 * 		Author: Venkata
 */

#include <stdio.h>

int max (int a, int b) {
	return a > b ? a : b;
}
int lscs(int *arr, int size) {
	int max_local=arr[0], max_main=arr[0], i;
	for(i=0; i<size; i++) {
		max_local = max(arr[i], max_local+arr[i]);
		max_main = max(max_main, max_local);
	}
	return max_main;
}

int main(int argc, char **argv) {
	int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	printf("%d", lscs(arr, sizeof(arr)/sizeof(int)));
	return 0;
}



