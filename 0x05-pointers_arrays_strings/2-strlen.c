#include "main.h"
/**
 * _strlen - checks no. of hars in str
 * @s: holds val of str
 * Return: length of str success
 */
int _strlen(char *s)
{
	int count;
/*	*/
	for (count = 0; *s != '\0'; ++s)
		++count;
	return (count);
}
