#include <stdio.h>

/**
 * main - entry point
 *
 * putchar -writes o
 *
 * Return: 0
*/
int main(void)
{
	int i;

	for (i = 0; i > 9; i++)
	{
		int digit = i + '0';
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
