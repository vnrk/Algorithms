/*
 * 		icecream.c
 * 		TODO
 * 		Created on: 8:30:13 AM Jun 4, 2016
 * 		Author: Venkata 
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

struct map {
    int index;
    int flag;
};

void printPairs(int arr[], int arr_size, int sum)
{
  int i, temp;
  struct map binMap[MAX];
  for (i = 0; i < arr_size; i++)
  {
      temp = sum - arr[i];
      if (temp >= 0 && binMap[temp].flag == 1) {
         if (i+1 <= binMap[temp].index+1)
             printf("%d %d\n", i+1, binMap[temp].index+1);
         else
             printf("%d %d\n", binMap[temp].index+1, i+1);
      }
      binMap[arr[i]].flag = 1;
  }
}

int main()
{
    int *A;
    int M,N,T,i;
    scanf("%d", &T);
    while(T--){
        scanf("%d%d", &M, &N);
        A = (int *)malloc(sizeof(int) * N);
        for(i=0; i<N; i++)
            scanf("%d", &A[i]);
        printPairs(A, N, M);
    }
    return 0;
}




