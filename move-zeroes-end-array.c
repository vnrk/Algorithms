#include <stdio.h>

void move(int *arr, int size) {
	int i, count=0;
	for (i = 0; i < size; ++i) {
		if(arr[i] != 0) {
			arr[count++] = arr[i];
		}
	}
	while(count < size) {
		arr[count++] = 0;
	}
}

void print(int *arr, int size) {
	int i;
	for (i = 0; i < size; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(int argc, char **argv) {
	int arr[] = {1,4,5,0,1,2,8,9,0,11,0,0,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr, n);
	move(arr, n);
	print(arr, n);
	return 0;
}
