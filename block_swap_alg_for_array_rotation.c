/*
 * 		block_reversal.c
 * 		TODO
 * 		Created on: 5:34:04 PM Jun 7, 2016
 * 		Author: Venkata 
 */
#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void reverse(int *arr, int n)
{
    int i, j;
    for (i = 0, j = n - 1; i < j; i++, j--) {
        swap(&arr[i], &arr[j]);
    }
}

void reversal(int *arr, int n, int shifts)
{
    if (n <= shifts)
        return;

    reverse(arr, shifts);
    reverse(&arr[shifts], n - shifts);
    reverse(arr, n);
}

int main()
{
    int n;
    int a[100];
    int i;
    int shifts;

    printf("\nEnter n:");
    scanf("%d", &n);

    printf("\nEnter elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nEnter number of shifts to make the rotation:");
    scanf("%d", &shifts);

    reversal(a, n, shifts);

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}



