/*
 * 		lis.c
 * 		to find the longest increasing subsequence
 * 		this is brute force approach taking O(n2)
 * 		Created on: 12:06:04 AM Dec 16, 2014
 * 		Author: Venkata 
 */

//int lis( int arr[], int n )
//{
//   int *lis, i, j, k, max = 0;
//   lis = (int*) malloc ( sizeof( int ) * n );
//
//   /* Initialize LIS values for all indexes */
//   for ( i = 0; i < n; i++ )
//      lis[i] = 1;
//
//   /* Compute optimized LIS values in bottom up manner */
//   for ( i = 1; i < n; i++ ) {
//	   printf("j starting from 0 to %d\n", i);
//      for ( j = 0; j < i; j++ ){
//         if ( arr[i] > arr[j] && lis[i] < lis[j] + 1) {
//            lis[i] = lis[j] + 1;
//            printf("lis[%d] is now %d\n", i, lis[i]);
//         }
//      }
//      for ( k = 0; k < n; k++ )
//      	printf("%d|", lis[k]);
//      printf("\n");
//   }
//   /* Pick maximum of all LIS values */
//   for ( i = 0; i < n; i++ )
//      if ( max < lis[i] )
//         max = lis[i];
//
//   /* Free memory to avoid memory leak */
//   free( lis );
//
//   return max;
//}


/* Driver program to test above function */
//void _lis()
//{
//  int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
//  int k, n = sizeof(arr)/sizeof(arr[0]);
//  for ( k = 0; k < n; k++ )
//	  printf("%d|", arr[k]);
//  printf("\n");
//  printf("Length of LIS is %d\n", lis( arr, n ) );
//}


