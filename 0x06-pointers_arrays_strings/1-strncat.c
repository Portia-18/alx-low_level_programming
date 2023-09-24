#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates(combines)
 *
 * @dest: destination string
 * @src: source string
 * @n: byte input
 *
 * Return: concatenated string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
