#include "main.h"
/**
 * _isupper - prints only in uppercase
 *
 * @c:
 *
 * Return: 1 is true 0 false
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
