/*
 * 		t9tap.c
 * 		TODO
 * 		Created on: 9:35:23 PM Sep 14, 2014
 * 		Author: Venkata 
 */

void multitap(char *str){
	int len = strlen(str);
	int i = 0;
	char *curr;
	int count = 0;
	while(i < len){
		curr = str[i++];
		count++;
		if(str[i] == curr)
			continue;
		printf("%c|", 'A' + 3 * ((int)(curr - '0') - 1) + count - 1);
		count = 0;
	}

}

void _multitap() {
	char str[] = "12255599";
	multitap(str);
}


