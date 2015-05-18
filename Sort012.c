/*

 * 		Sort012.c
 * 		sort an array of 0's , 1's and 2's
 * 		Created on: May 4, 2014
 * 		Author: Venkata


void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void sort012(int *arr, int n)
{
	int low=0, mid=0, high=n-1;
	while(mid <= high) {
		switch(arr[mid]) {
		case 0: swap(&arr[low++], &arr[mid++]);
				break;
		case 1:	mid++;
				break;
		case 2: swap(&arr[mid], &arr[high--]);
				break;
		}
	}
}

void _sort012()
{
	int arr[14] = {0, 2, 0, 2, 0, 1, 2, 1, 0, 1, 2, 1, 0, 1}, i;
	sort012(arr, sizeof(arr)/sizeof(int));
	for(i=0; i<sizeof(arr)/sizeof(int); i++)
		printf("%d|", arr[i]);
}
*/
