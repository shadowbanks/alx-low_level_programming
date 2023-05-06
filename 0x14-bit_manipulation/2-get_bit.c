#include "main.h"

void binary(char *, unsigned int);

/**
 * get_bit - Get bit at a certain index
 * @n: number
 * @index: index
 *
 * Return: index value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char *bits;

	if (n == 0 && index == 0)
		return (0);

	bits = malloc(25);
	if (bits == NULL)
		return (-1);

	binary(bits, n);

	if (strlen(bits) >= index)
		return ((bits[index]) - '0');

	return (-1);
}

/**
 * binary - Convert decimal to integer
 * @bits: pointer to a buffer to store the binary conversion
 * @n: decimal number
 *
 * Return: Nothing
 */
void binary(char *bits, unsigned int n)
{
	int bit, count = 0;

	while (n != 0)
	{
		count++;
		bit = n & 01;
		n = n >> 1;
		*bits++ = bit + '0';
	}

	while (count++ < 24)
		*bits++ = '0';
	*bits = '\0';
}
