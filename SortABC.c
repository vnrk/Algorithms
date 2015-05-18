/*

 * 		SortABC.c
 * 		Sort any numbers using Dutch flag algorithm
 * 		drawback : it needs the lowest and the highest elements in the array
 * 		Created on: 10:32:05 PM May 4, 2014
 * 		Author: Venkata 


void sortABC(int *arr, int l, int h, int n)
{
	int low=0, mid=0, high=n-1;
	while(mid <= high){
		if(arr[mid] == l){
			swap(&arr[low], &arr[mid]);
			low++; mid++;
		}
		else if(arr[mid] == h){
			swap(&arr[mid], &arr[high]);
			high--;
		}
		else {
			mid++;
		}

	}
}

void _sortABC()
{
	int arr[14] = {0, 2, 0, 2, 0, 1, 2, 1, 0, 1, 2, 1, 0, 1}, i;
	sortABC(arr, 0, 2, sizeof(arr)/sizeof(int));
	for(i=0; i<sizeof(arr)/sizeof(int); i++)
		printf("%d|", arr[i]);
}


*/
