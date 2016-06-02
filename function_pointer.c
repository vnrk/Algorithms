/*
 * 		funciton_pointer.c
 * 		TODO
 * 		Created on: 10:48:15 AM Jun 2, 2016
 * 		Author: Venkata 
 */
#include <stdio.h>

void add(int a, int b) {
	printf("%d", a+b);
}

void subtract(int a, int b) {
	printf("%d", a-b);
}

void multiply(int a, int b) {
	printf("%d", a*b);
}

int main(int argc, char **argv) {
	void (*func_ptr[])(int, int) = {add, subtract, multiply};
	(*func_ptr[2])(10,2);
	//same as calling the below
	//(func_ptr[2])(10,2);
	return 0;
}



