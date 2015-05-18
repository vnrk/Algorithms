/*
#include <stdio.h>
#include <string.h>
#define RANGE 255

// The main function that sort the given string str in alphabatical order
void countSort(int *str, int size)
{
    // The output character array that will have sorted str
    int output[size];

    // Create a count array to store count of individual characters and
    // initialize count array as 0
    int count[RANGE + 1], i, j=0, i_c;
    for(i = 0; i < RANGE + 1; ++i)
            count[i]=0;

    // Store count of each character
    for(i = 0; i < size; ++i)
        ++count[str[i]];

    // Change count[i] so that count[i] now contains actual position of
    // this character in output array
    //for (i = 1; i <= RANGE; ++i)
    //    count[i] += count[i-1];

    // Build the output character array
    for (i = 0,j = 0; i < RANGE; ++i)
    {
      //  output[count[str[i]]-1] = str[i];
      //  --count[str[i]];
    	while(count[i] != 0) {
    		str[j++] = i;
    		--count[i];
    	}
    }

    // Copy the output array to str, so that str now
    // contains sorted characters
    for (i = 0; i < size; ++i)
        printf("%d ", str[i]);
}

// Driver program to test above function
void _counting_sort2()
{
    int str[] = {1,4,1,2,7,5,2};//"applepp";

    countSort(str, 7);

    //printf("Sorted string is %s\n", str);
}
*/
