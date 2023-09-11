#include <stdio.h>

/**
 * main - entry point
 *
 * for loop - print all possible different combos of 2 digits
 *
 * Return: 0
*/
int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 48; digit1 < 58; digit1++)
	{
	for (digit2 = 49; digit2 < 58; digit2++)
	{
		if (digit1 != digit2 && digit1 < digit2)
		{
		putchar(digit1);
		putchar(digit2);
		if (digit1 + digit2 != 113)
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
	}
	putchar('\n');
	return (0);
}
