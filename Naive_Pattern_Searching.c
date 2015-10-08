#include <stdio.h>
#include <string.h>
//Simple pattern matching approach - linear search
void search(char *pattern, char *txt) {
	int n = strlen(txt);
	int m = strlen(pattern);
	int i,j;
	for(i=0; i<=n-m; i++) {
		for(j=0; j<m; j++) {
			if(txt[i+j] != pattern[j])
				break;
		}
		if(j==m){
			printf("String Matches at %d\n", i);
		}
	}
}

/* Driver program to test above function */
int main()
{
   char *txt = "AABAACAADAABAAABAA";
   char *pat = "AABA";
   search(pat, txt);
   return 0;
}
