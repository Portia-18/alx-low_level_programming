#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new mem
 * @str: char
 * Return: aaa
 */
char *_strdup(char *str)
{
	char *arr;
	int x, r = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	arr = malloc(sizeof(char) * (x + 1));

	if (arr == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		arr[r] = str[r];
	return (arr);
}
