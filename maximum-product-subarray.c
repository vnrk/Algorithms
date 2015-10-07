#include <stdio.h>

int min (int x, int y) {return x < y? x : y; }
int max (int x, int y) {return x > y? x : y; }

int maxSubarrayProduct(int arr[], int n)
{
    int max_local = 1, min_local = 1, max_main = 1, i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            max_local = max_local*arr[i];
            min_local = min (min_local * arr[i], 1);
        }
        else if (arr[i] == 0)
        {
            max_local = 1;
            min_local = 1;
        }
        else
        {
            int temp = max_local;
            max_local = max (min_local * arr[i], 1);
            min_local = temp * arr[i];
        }

        if (max_main <  max_local)
        {
        	if(arr[i] != 0)
        		max_main  =  max_local;
            else
            	max_main = 0;
        }
    }

    return max_main;
}

int main()
{
    int arr[] = {1, -2, -3, 0, 7, -8, -2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum product : %d", maxSubarrayProduct(arr, n));
    return 0;
}
