/*

 * 		Sort01.c
 * 		sorting an array of 0's and 1's
 * 		Created on: May 4, 2014
 * 		Author: Venkata
*/


void sort01(int *arr, int n)
{
	int left=0, right=n-1, temp;
	while(left < right) {
		//see the problem if you leave it with arr[left] below ?
		//say if there are only 0's in the arr!
		while(arr[left] == 0 && left < right)
			left++;
		while(arr[right] == 1 && left < right)
			right--;
		if(left < right)
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++; right--;
	}
}


void _sort01()
{
	int arr[14] = {0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0}, i;
	sort01(arr, sizeof(arr)/sizeof(int));
	for(i=0; i<sizeof(arr)/sizeof(int); i++)
		printf("%d|", arr[i]);
}

