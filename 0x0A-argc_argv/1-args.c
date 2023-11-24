#include "main.h"
#include <stdio.h>

/**
 * main - prints no. of arguments
 * @argc: no of arguments
 * @argv: array of args
 * Return: 0 uccess
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
