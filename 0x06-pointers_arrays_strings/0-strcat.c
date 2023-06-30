#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function that concatenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int length_of_string, z;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	z = 0;
	while (src[z] != '\0')
	{
		dest[length_of_string] = src[z];
		length_of_string++;
		z++;
	}
	dest[length_of_string] = '\0';
	return (dest);
}
