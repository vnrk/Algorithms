/*
 * 		SecondHighest.c
 * 		TODO
 * 		Created on: 9:49:38 PM Nov 24, 2014
 * 		Author: Venkata 
 */


void second(int *arr, int n) {
	int i, first, sec;
	if (n < 2){
		printf("not possible"); return; }
	else
		first = sec = arr[0];
	for(i=1; i<n; i++) {
		if(arr[i] > first){
			sec = first ;
			first = arr[i];
		}
		else if(arr[i] > sec)
			sec = arr[i];
	}
	printf("|%d|%d|", sec,first);
}

void _secondHighest() {
	int arr[10] = {1,2,3,10,9,8,7,4,5,6};
	second(arr, sizeof(arr)/sizeof(int));
}
