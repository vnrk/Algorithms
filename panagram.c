/*
 * 		panagram.c
 * 		TODO
 * 		Created on: 7:19:00 PM Aug 30, 2014
 * 		Author: Venkata 
 */

#include<stdlib.h>
#include<stdio.h>
#define NO_OF_CHARS 256

int *getCharCountArray(char *str)
{
   int *count = (int *)calloc(sizeof(int), NO_OF_CHARS);
   int i;
   for (i = 0; *(str+i);  i++) {
      count[*(str+i)]++;
   }
   return count;
}


void changetolower(char* str)
{
	int i;
	for(i = 0; str[i]; i++){
	  str[i] = tolower(str[i]);
	}
}

void firstNonRepeating(char *str)
{
  changetolower(str);
  int *count = getCharCountArray(str);
  int i;
  for (i=0; i<NO_OF_CHARS; i++)
	  printf("%d - %d\n",i, count[i]);
  for (i = 97; i <= 122;  i++)
  {
    if (count[i] == 0)
    {
      printf("not panagram");
      return;
    }
  }
  printf("panagram");
  return;
}

/* Driver program to test above function */
int _panagram()
{
  char str[] = "We promptly judged antique ivory buckles for the next prize";
  firstNonRepeating(str);
  return 0;
}
