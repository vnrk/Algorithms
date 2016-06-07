/*
 * 		matrix_search_row_col_sorted.c
 * 		TODO
 * 		Created on: 10:24:43 AM Jun 7, 2016
 * 		Author: Venkata 
 */
#include <stdio.h>

void search(int mat[4][4], int n, int key)
{
	int i=0, j=n-1;
	while(i<n && j >=0){
		if(mat[i][j] == key){
			printf("found\n");
			return;
		}
		if(mat[i][j] < key){
			i++;
		}
		else
			j--;
	}
	printf("not found");
}


int main()
{
  int mat[4][4] = { {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50},
                  };
  search(mat, 4, 31);
  return 0;
}

