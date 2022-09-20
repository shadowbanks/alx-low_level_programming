#include "main.h"

/**
  * puts_half - prints other half of a string to stdout
  * @str: string to print
  *
  * Return: nothing
  */

void puts_half(char *str)
{
	int i;
	int count = 0;
	int count2 = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	if (count % 2 != 0)
	{
		count2 = (count - 1) / 2;
		count2 += 1;
	}
	else
		count2  = count / 2;

	for (i = count2; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
