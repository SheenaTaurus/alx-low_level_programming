#include "main.h"
/**
 * binary_to_uint converts a binary number to an unsigned int
 * @b points to a string of binary numbers
 * Return: 0 or converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	int i;

	if (b == NULL)
	{
		return (0);
	}
	
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			num <<= 1;
			num += b[i] - '0';
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
