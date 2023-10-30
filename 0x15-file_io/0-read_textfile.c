#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: variable pointer
 * @letters: number of letters
 * Return: actual number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, rea, wri;
	char *lett;

	lett = malloc(letters);
	if (lett == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(lett);
		return (0);
	}

	rea = read(file, lett, letters);

	wri = write(STDOUT_FILENO, lett, rea);

	close(file);

	return (wri);
}
