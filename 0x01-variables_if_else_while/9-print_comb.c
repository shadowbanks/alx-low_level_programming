#include <stdio.h>

/**
 * main - Print single digit numbers separated by a comma(,)
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
