/*
 * 		kmp.c
 * 		TODO
 * 		Created on: 10:28:44 PM May 21, 2015
 * 		Author: Venkata 
 */
//the fialFunc is a table which indicates the longest proper 
//prefix which is also a suffix
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void display(int *arr, int size)
{
	int i;
	for(i=0; i<size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void computeFunc(char *pat, int patSize, int *failFunc)
{
	int i, len;
	failFunc[0] = 0;
	i=1;
	len=0;
	while(i<patSize) {
		if(pat[i] == pat[len]) {
			len++;
			failFunc[i]=len;
			i++;
		}
		else {
			if(len != 0) {
				len = failFunc[len-1];
			}
			else {
				failFunc[i] = 0;
				i++;
			}
		}
	}
}

void kmp(char *text, char *pat)
{
	int textSize = strlen(text);
	int patSize = strlen(pat);
	int *failFunc = (int *)malloc(sizeof(int) * patSize);
	computeFunc(pat, patSize, failFunc);
	display(failFunc, patSize);
	int i=0,j=0;
	while(i < textSize) {
		if(pat[j] == text[i]) {
			j++;
			i++;
		}
		else {
			if(j != 0) {
				j=failFunc[j-1];
			}
			else {
				i++;
			}
		}
		if(j == patSize) {
			printf("Found at %d\n", i-j);
			j = failFunc[j-1];
		}
	}
	free(failFunc);
}


int main()
{
	char *txt = "iagdsaaaaabaabbjasbaaabaabjsjbabaaabaabbbsab";
	char *pat = "aaabaab";
	kmp(txt, pat);
	return 0;
}
