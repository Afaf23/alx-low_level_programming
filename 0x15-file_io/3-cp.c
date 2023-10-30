#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	
	file_from = open(argv[1], O_RDONLY);
	
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
