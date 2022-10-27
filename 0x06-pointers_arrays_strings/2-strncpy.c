#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Writes a function that copies a string
 * @dest: The buffer storing the string copy
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 * Return: Always 0 (Success)
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
		while (i < n)
			dest[i++] = '\0';

	return (dest);
}
