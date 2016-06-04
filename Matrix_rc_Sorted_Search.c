/*

 * 		Matrix_rc_Sorted_Search.c
 * 		Search in a row and column wise sorted matrix
 * 		the trick is to start from the top right corner
 * 		Created on: 4:14:42 PM May 5, 2014
 * 		Author: Venkata 
*/


void matrix_rc_sorted_search(int matrix[4][4], int r, int c, int key)
{
	int i=0, j=c-1;
	while(i<r && j>=0) {
		if(key == matrix[i][j]) {
			printf("Found at %d, %d\n", i, j);
			return;
		}
		//no while loop so checking the latter condition not required
		if(key < matrix[i][j] && i<r && j>0) {
			printf("Checking with %d\n", matrix[i][j]);
			j--;
		//similar as above + a simple else would do
		} else if(key > matrix[i][j] && i<r && j>0){
			printf("Checking with %d\n", matrix[i][j]);
			i++;
		}
	}
	printf("Not Found\n");
}

void _matrix_rc_sorted_search()
{
	int mat[4][4] = { {10, 20, 30, 40},
	                  {15, 25, 35, 45},
	                  {27, 29, 37, 48},
	                  {32, 33, 39, 50},
	                };

	int key = 32;
	matrix_rc_sorted_search(mat, 4, 4, key);
}

