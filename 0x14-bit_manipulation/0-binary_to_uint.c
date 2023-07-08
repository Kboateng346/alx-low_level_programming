#include "main.h"

/**
 * binary_to_unsignedint - converts a binary number to an unsigned int
 * @b: input string
 * Return: unsigned decimal conversion, 0 if input is NULL
 */
unsigned int binary_to_unsignedint(const char *b)
{
	int power;
	int num = 0;

	if (!b)
		return (0);
	power = _len(b) - 1;
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		if (*b == '1')
			num += powX(2, power);
		b++;
		power--;
	}
	return (num);
}

