#include "main.h"
/**
 * rev_string = reverse string
 * @s: parameter input
 * Return: none
 */
void rev_string(char *s)
{
	int l, i;
	char ch;

	for (l = 0; s[l] != '\0'; l++)
		;
	for (i = 0; i < 1 / 2; i++)
	{
		ch = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = ch;
	}
}
