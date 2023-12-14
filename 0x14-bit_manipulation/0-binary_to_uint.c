#include "main.h"

/**
 * binary_to_uint - converts bin no to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int ln, bse_two;

	if (!b)
		return (0);

	i = 0;

	for (ln = 0; b[ln] != '\0'; ln++)
		;

	for (ln--, bse_two = 1; ln >= 0; ln--, bse_two *= 2)
	{
		if (b[ln] != '0' && b[ln] != '1')
		{
			return (0);
		}

		if (b[ln] & 1)
		{
			i += bse_two;
		}
	}

	return (i);
}
