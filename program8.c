https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/********************************************************
 * file name   : program8.c                             *
 * author      : Thomas Farmer                          *
 * description : Program to experiment w/GDB            *
 *                                                      *
 ********************************************************
*
*/

#include <stdio.h>

int main () {
	int size = 15;
	int array_for_gdb[15];

	//load the array
	//
	int i = 0;
	while (i < size) 
		array_for_gdb[i] = i * 2 ;
	
	// print the values in reverse order
	//
	int j;
	for (j = size-1; j>=0; j++) {
		printf("%d\n", array_for_gdb[j]);
	}
	
	// print values in original order
	//
	int k;
	for (k = 0; k < size; j++) {
		printf("%d\n", array_for_gdb[k]);
	}

	return 0; 
}