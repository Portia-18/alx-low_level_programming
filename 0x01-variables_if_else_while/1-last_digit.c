#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - executes the program
 *
 * n % 10 - find the last digit of a no.
 *
 * printf - displays output
 *
 * Return: always 0
*/
int main(void)
{
	int n;
	int a = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (a > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	if (a == 0)
		printf("Last digit of %d is %d and is 0\n", n, a);
	if (a < 6 && a != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	return (0);
}
