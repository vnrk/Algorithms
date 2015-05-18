/*
 * 		NextGreaterNumber.c
 * 		TODO
 * 		Created on: 3:43:33 PM Feb 20, 2015
 * 		Author: Venkata 
 */

void swap(char *a, char* b) {
	char ch = *a;
	*a = *b;
	*b = ch;
}

void nextGreaterNumber(char* n, int size) {
	int i, j, smallest;
	for(i=size-1; i>0; i--) {
		if(n[i-1] < n[i])
			break;
	}
	if(i == 0) {
		printf("Not possible");
		return;
	}
	for(j=i-1; j>0;i--)

	//need to swap with the smallest
	swap(&n[smallest], &n[i-1]);


	//return num;
}

void _nextGreaterNumber() {
	char n[] = "923178";
	int size = strlen(n);
	nextGreaterNumber(n, size);
}


