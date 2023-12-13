#include "main.h"
/**
 *malloc_checked - arr that prints a string
 *@b: no of memory
 *Return: void
 */

void *malloc_checked(unsigned int b)
{
void *u;

u = malloc(b);
if (u == NULL)
{
exit(98);
}

return (u);
}
