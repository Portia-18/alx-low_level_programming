#include <stdio.h>

/**
 * main - entry point
 *
 * putchar -writes o
 *
 *u can use i=0 and putchar(i + '0') to convert to ASCII value
 *
 * Return: 0
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	putchar(i);
	putchar('\n');
	return (0);
}
