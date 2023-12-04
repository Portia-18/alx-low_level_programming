#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name using pointer
 * @name: str to add
 * @f: ptr to fn
 * Return: null
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
