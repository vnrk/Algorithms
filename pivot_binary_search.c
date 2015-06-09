//a sorted array rotated over a pivot
//binary search need to be used hence O(logn) for all the functions should be taken care of

/*
* first task is to search for the pivot 
* then task is to search in the lower half and uper half of the pivot using binary search
*/

int findpivot(int *arr, int low, int high) 
{
	//no pivot all sorted 
	if(low > high)
		return -1;
	//the pivot is in the middle 
	if(low == high)
		return low;

	//using the mid to make things half
	int mid = low + (high - low)/2;
	//mid < high makes sure that high can be mid+1 at minimum
	if(mid < high  && arr[mid] > arr[mid+1])
		return mid;
	//mid > low makes sure that low is mid-1 at minimum
	if(mid > low && arr[mid] < arr[mid-1])
		return mid-1;
	
	//either this or arr[mid] <= arr[high]
	//the pivot is between low and mid-1
	if(arr[low] >= arr[mid])
		findpivot(arr, low, mid-1);
	//the pivot is between mid+1 and high
	else
		findpivot(arr, mid+1, high);
}

/*
* simple binary search
*/

int binary_search(int *arr, int low, int high, int key)
{
	//not found
	if(low > high)
		return -1;
	int mid = low +(high-low)/2;
	if(arr[mid] == key)
		return mid;
	if(key < arr[mid])
		return binary_search(arr, low, mid-1, key);
	else
		return binary_search(arr, mid+1, high, key);
}

/*
* the function that makes use of the above 2 O(logn) functions
*/

int pivoted_bs(int *arr, int size, int key)
{
	int pivot = findpivot(arr, 0, size-1);
	// If we didn't find a pivot, then array is not rotated at all
   	if(pivot == -1)
    	return binarySearch(arr, 0, arr_size-1, key);

 	if(arr[pivot] == key)
 		return pivot;
 	if(arr[0] <= key)
 		return binary_search(arr, 0, pivot-1, key);
 	else
 		return binary_search(arr, pivot+1, size-1, key);
}