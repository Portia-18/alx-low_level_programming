#include <stdio.h>

/**
 * main - entry point
 *
 * putchar - writes stdo
 *
 * for loop - use to repeat a program
 *
 * if - gives condition to be checked
 *
 * Return: 0
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
