#include "main.h"
#include <string.h>
/**
 * _strcat - combines two strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: concatenanted string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
