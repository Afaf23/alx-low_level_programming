#include "main.h"
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
	{
		int i;

		for (i = 0; *s != '\0'; i++)
		{
			i++;
		}
		return (i);
	}
