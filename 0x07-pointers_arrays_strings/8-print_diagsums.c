#include "main.h"
#include <stdio.h>
/**
*print_diagsums -  a function that prints the sum of
* the two diagonals of a square matrix of integers.
*@a:matrix to be summed
*@size:size of the matrix
*/
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = a[i] + sum1;
		a = a + size;
	}

	a = a - size;

	for (i = 0; i < size; i++)
	{
		sum2 = a[i] + sum2;
		a = a - size;
	}

	printf("%d, %d\n", sum1, sum2);
}
