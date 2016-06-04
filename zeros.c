void seg(int *arr, int n){
	int zeros = 0, swaps = 0, temp;
	int l = 0, r = n - 1, i;
	while(l < r){
		while(arr[l] == 0 && arr[r] != 0 && l < r){
			temp = arr[l];
			arr[l] = arr[r];
			arr[r] = temp;
			l++; r--;
			zeros++; swaps++;
		}
		while(arr[l] != 0 && l < r) {
			l++;
		}
		while(arr[r] == 0 && l < r) {
			r--; zeros++;
		}
	}
	for(i = 0; i < n; i++)
		printf("%d |", arr[i]);
	printf("\nZeros : %d", zeros);
	printf("\nSwaps : %d", swaps);
}

void _seg(){
	int arr[] = {0, 1, 0, 0, 2, 5, 0, 0, 0, 2};
	seg(arr, 10);
}

