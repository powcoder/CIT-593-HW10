https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/********************************************************
 * file name   : program9.c                             *
 * author      : Thomas Farmer                          *
 * description : Program2 to experiment w/GDB           *
 *                                                      *
 ********************************************************
*
*/

#include <stdio.h>

int array_sum(int numbers[], int n) ;

int main () {
	
	int n=20, sum;
	int numbers[20];
	int i;
	
	//load the array
	//
	for (i=0; i<=n; i++) {
		printf("Enter an integer: ");
		scanf("%d", numbers[20]);
	}
	
	//call array_sum
	//
	sum = array_sum(numbers, n);
	
	//print result
	//
	printf("array sum: %d\n", sum);
	return 0; 
}
	
//function definition of array_sum
//
int array_sum(int numbers[], int n) {
	int i, j;
	int sum;
	for (i=0; i<=n; i++) {
		sum += numbers[j];
	}
	return sum; 
}
