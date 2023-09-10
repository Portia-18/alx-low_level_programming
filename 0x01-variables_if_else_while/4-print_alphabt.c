#include <stdio.h>

/**
 * main - executes prog
 *
 * putchar - writes to std output
 *
 * Return: always 0
*/
int main(void)
{
	char ch;

	for (ch = 97; ch > 96 && ch < 123; ch++)
	{
		if (ch != 101 && ch != 113)
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
