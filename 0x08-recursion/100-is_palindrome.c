#include "main.h"

/**
 * _str_rec - length
 * @s; pointer to params
 * Return: recursion
 */
int _str_rec(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _str_rec(++s));
}

/**
 * pali - palindrome
 * @s: pointer
 * @i: position
 * Return: 1 true 0 false
 */

int pali(char *s, int i)
{
	if (i < 1)
	{
		return (1);
	}
	if (*s == *(s + i))
	{
		return (pali(s + 1,i - 2));
	}
	return (0);
}
/**
 * is_palindrome - pali
 * @s: pointer
 * Return: recurse
 */
int is_palindrome(char *s)
{
	int l = _str_rec(s);
	return (pali(s , l - 1));
}
