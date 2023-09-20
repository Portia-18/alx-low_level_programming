#include <stdio.h>
/**
 * print_array - prints array
 * @a: parameter of array
 * @n: number of elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;
	if (n <= 0)
	{
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i < (n -1))
			{
				printf("%d", a[i]);
				printf(" ");
			}
			else
			{
				printf("%d", a[i]);
			}
		}
	}
}
