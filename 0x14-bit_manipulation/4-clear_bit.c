#include "main.h"

void binary(char *, unsigned int);
unsigned long int btoi(char *);

/**
 * clear_bit - Get bit at a certain index
 * @n: number
 * @index: index
 *
 * Return: index value or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	char *bits;

	bits = malloc(25);
	if (bits == NULL)
		return (-1);

	binary(bits, *n);

	if (strlen(bits) >= index)
	{
		bits[index] = '0';
		*n = btoi(bits);
		return (1);
	}

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

/**
 * btoi - convert binary to integer
 * @b: pointer to binary number
 *
 * Return: decimal equivalent
 */
unsigned long int btoi(char *b)
{
	unsigned long int i = 0, sum = 0;

	while (b[i] != '\0')
	{
		if (b[i] == '1' || b[i] == '0')
		{
			sum += (b[i] - '0') << i;
			i++;
		}
	}
	return (sum);
}
