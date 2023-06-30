#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest: input value
 * @n: input value
 * @src: input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int z;

	z = 0;
	while (z < n && src[z] != '\0')
	{
		dest[z] = src[z];
		z++;
	}
	return (dest);
}
