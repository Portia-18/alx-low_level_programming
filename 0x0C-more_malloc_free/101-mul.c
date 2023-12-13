#include <stdlib.h>

/**
 * _realloc - reallocate a memory block using malloc and free
 *
 * @ptr: ptr to previous mem
 * @old_size: old mem arr size
 * @new_size: new mem arr size
 *
 * Return: ptr to new memory
 *         NULL if it fails
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *temp_ptr;
	unsigned int u;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		free(ptr);
		return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	temp_ptr = ptr;

	for (u = 0; u < old_size; u++)
		new_ptr[u] = temp_ptr[u];

	free(ptr);
	return (new_ptr);
}
