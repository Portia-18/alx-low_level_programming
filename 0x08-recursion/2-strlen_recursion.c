#include "main.h"
/**
 * _strlen_recursion - outputs length of string
 * @s: string to be measured
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
