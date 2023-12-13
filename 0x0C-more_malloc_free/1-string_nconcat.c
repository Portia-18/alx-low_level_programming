#include "main.h"

/**
 * string_nconcat - concats two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *u;
	unsigned int size1 = 0, size2 = 0, a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
	n = size2;
	u = malloc((size1 + n + 1) * sizeof(char));

	if (u == NULL)
		return (0);

	for (a = 0; a < size1; a++)
	{
		u[a] = s1[a];
	}

	for (; a < (size1 + n); a++)
	{
		u[a] = s2[a - size1];
	}
	u[a] = '\0';

return (u);
}
