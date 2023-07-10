#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int f, r = 0;

	if (str == NULL)
		return (NULL);
	f = 0;
	while (str[f] != '\0')
		f++;
	aaa = malloc(sizeof(char) * (f + 1));
	if (aaa == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		aaa[r] = str[r];
	return (aaa);
}

