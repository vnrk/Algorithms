///*
// * 		DPCoinChange.c
// * 		TODO
// * 		Created on: 8:26:35 PM Dec 12, 2014
// * 		Author: Venkata
//
//
//int count( int S[], int m, int n )
//{
//    // table[i] will be storing the number of solutions for
//    // value i. We need n+1 rows as the table is constructed
//    // in bottom up manner using the base case (n = 0)
//    int table[n+1];
//    int i,j;
//    // Initialize all table values as 0
//    memset(table, 0, sizeof(table));
//
//    // Base case (If given value is 0)
//    table[0] = 1;
//
//    // Pick all coins one by one and update the table[] values
//    // after the index greater than or equal to the value of the
//    // picked coin
//    for(i=0; i<m; i++)
//        for(j=S[i]; j<=n; j++) {
//            table[j] += table[j-S[i]];
//        }
//
//    return table[n];
//}
//
//
//
//void _dpCoinChange()
//{
//    int arr[] = {1, 2, 3};
//    int m = sizeof(arr)/sizeof(arr[0]);
//    int n = 5;
//    printf("|%d|", count(arr, m, n));
//}
//*/
