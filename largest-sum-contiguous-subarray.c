/*
 * 		largest-sum-contiguous-subarray.c
 * 		TODO
 * 		Created on: 11:14:27 AM Oct 6, 2015
 * 		Author: Venkata 
 */

#include <stdio.h>

int lscs(int *arr, int size) {
	int max_local=0, max_main=0, i;
	for(i=0; i<size; i++) {
		max_local = max_local + arr[i];
		if(max_local < 0)
			max_local = 0;
		else if(max_main < max_local)
			max_main = max_local;
	}
	return max_main;
}

int main(int argc, char **argv) {
	int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	printf("%d", lscs(arr, sizeof(arr)/sizeof(int)));
	return 0;
}



