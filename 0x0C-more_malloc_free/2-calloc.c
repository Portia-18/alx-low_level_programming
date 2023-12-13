#include "main.h"

/**
 * _memset - copy character
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc
 * @nmem: n elements
 * @size: bytes
 * Return: ptr
 */
void *_calloc(unsigned int nmem, unsigned int size)
{
	void *u;

	if (nmem == 0 || size == 0)
		return (NULL);
	u = malloc(nmem * size);

	if (u == NULL)
		return (NULL);
	_memset(u, 0, (nmem * size));
	return (u);
}
