/*
 * 		Selection_sort.c
 * 		TODO
 * 		Created on: 4:20:29 PM Aug 12, 2014
 * 		Author: Venkata
 */

void selection_sort(int *a, int n)
{
	int i, j, min, temp;
	for(i = 0; i < n; i++) {
		min = i;
		for(j = i; j < n; j++) {
			if(a[j] < a[min])
				min = j;
		}
		//swap
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	for(i = 0; i < n; i++)
		printf("%d |", a[i]);
}

void _selection_sort()
{
	int arr[] = {1, -2, 4, 18, 9, 5, -3, 0};
	selection_sort(arr, 8);
}
