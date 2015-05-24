/*
 * 		RunLengthEncoding.c
 * 		TODO
 * 		Created on: 12:52:47 AM May 25, 2015
 * 		Author: Venkata 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_RLEN 50

char *encode(char *src)
{
	int rlen;
	char count[MAX_RLEN];
	int len = strlen(src);
	//in case of abcd -> a1b1c1d1 and +1 for /0
	char *dest = (char *)malloc(sizeof(char) * (len*2+1));

	int i, j=0, k;
	for(i=0; i<len; i++) {
		dest[j++] = src[i];
		rlen = 1;
		//make sure that you are not exceeding the strlen(src)
		while(i+1 < len && src[i] == src[i+1]) {
			rlen++;
			i++;
		}
		//int sprintf ( char * str, const char * format, ... );
		sprintf(count, "%d", rlen);
		for(k=0; *(count+k); k++, j++)
			dest[j] = count[k];
	}
	//terminate the string
	dest[j] = '\0';
	return dest;
}

int main()
{
	char str[] = "aabbcaabbadddddqzz";
	char *res = encode(str);
	printf("%s", res);
	return 0;
}
