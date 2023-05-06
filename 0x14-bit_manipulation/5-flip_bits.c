#include "main.h"

void binary(char *, unsigned int);

/**
 * flip_bits - Count the amount to bits that need to be flipped
 * to change a number to a different number
 * @n: first number
 * @m: second number
 *
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	int count = 0, i = 0;
	char *bits = NULL;

	num = n ^ m;

	bits = malloc(25);
	if (bits == NULL)
		return (-1);

	binary(bits, num);

	while(bits[i] != '\0')
	{
		if (bits[i] == '1')
			count++;
		i++;
	}

	return (count);
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
