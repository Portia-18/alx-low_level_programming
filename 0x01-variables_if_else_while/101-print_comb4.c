#include <stdio.h>

/**
 * main - entry point
 *
 * print all possible combos of 3 nos.
 *
 * Return: 0
*/
int main(void)
{
	int digit1;
	int digit2;
	int digit3;

	for (digit1 = 48; digit1 < 58; digit1++)
	{
	for (digit2 = 48; digit2 < 58; digit2++)
	{
	for (digit3 = 48; digit3 < 58; digit3++)
	{
		if (digit1 != digit2 && digit1 < digit2)
		{
		if (digit2 != digit3 && digit2 < digit3)
		{
			putchar(digit1);
			putchar(digit2);
			putchar(digit3);
		if (digit1 + digit2 + digit3 != 168)
		{
			putchar(',');
			putchar(' ');
		}
		}
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
