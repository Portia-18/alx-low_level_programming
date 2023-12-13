#include "main.h"

/**
 * _realloc -  reallocates memory block using malloc and free
 * @ptr: ptr
 * @old_size: old size
 * @new_size: new size
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clne, *relloc;
	unsigned int u;

	if (ptr != NULL)
	clne = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
	return (0); }
	relloc = malloc(new_size);
	if (relloc == NULL)
	return (0);
	for (u = 0; u < (old_size || u < new_size); u++)
	{
		*(relloc + u) = clne[u];
	}
	free(ptr);
return (relloc);
}
