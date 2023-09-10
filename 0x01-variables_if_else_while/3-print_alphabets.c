#include <stdio.h>

/**
 *  main - executes the program
 *
 *  putchar - writes to standard output
 *
 *  Return: always 0
*/
int main(void)
{
	char ch;
	char cap;

	for (ch = 97; ch > 96 && ch < 123; ch++)
	putchar(ch);
	for (cap = 65; cap > 64 && cap < 91; cap++)
	putchar(cap);
	putchar('\n');
	return (0);
}
