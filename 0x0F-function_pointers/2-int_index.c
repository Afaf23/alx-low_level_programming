#include "function_pointers.h"
/**
 * int_index - this functions find the index of a int
 *@array: the array to find the index
 *@size: the size of the array
 *@cmp: this a function pointer.
 * Return: no return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i], 0) != 0)
	{
			return (i);
	}
	}
	return (-1);
}
