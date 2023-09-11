#include <stdio.h>

/**
 * main -executes program
 *
 * putchar - writes to standard output
 *
 * Return: always 0
*/
int main(void)
{
	char ch;

	for (ch = 122; ch > 96 && ch < 123; ch--)
	putchar(ch);
	putchar ('\n');
	return (0);
}
