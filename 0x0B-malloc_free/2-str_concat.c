#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strof any size
 * @s1: 1st str
 * @s2: 2nd str
 * Return: 2 concat str
 */
char *str_concat(char *s1, char *s2)
{
	int d = 0, e = 0, f = 0, g = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[d])
		d++;

	while (s2[e])
		e++;

	g = d + e;
	s = malloc((sizeof(char) * g) + 1);

	if (s == NULL)
		return (NULL);

	e = 0;

	while (f < g)
	{
		if (f <= d)
			s[f] = s1[f];

		if (f >= d)
		{
			s[f] = s2[d];
			d++;
		}
		f++;
	}
	s[f] = '\0';
	return (s);
}
