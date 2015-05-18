///*
// * 		SortingWithFP.c
// * 		TODO
// * 		Created on: 2:14:57 PM Nov 19, 2014
// * 		Author: Venkata
// */
//
//
//int compare(int a, int b) {
//	return (a>b);
//}
//
//void swap(int *a, int *b) {
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void bubblesort(int *arr, int size, int (*cmp)(int,int)) {
//	int i,j;
//	for(i=0; i<size; i++){
//		for(j=0; j<size-i-1; j++){
//			if(compare(arr[j], arr[j+1]))
//				swap(&arr[j], &arr[j+1]);
//		}
//	}
//}
//
//void _sortingWithFP() {
//	int arr[] = {12,3,4,2,8,0,1};
//	int i=0 , n=7;
//	bubblesort(arr, n, compare);
//	//qsort(arr, 7, sizeof(int), compare);
//	for(i=0; i<n; i++)
//		printf("%d\t",arr[i]);
//}
