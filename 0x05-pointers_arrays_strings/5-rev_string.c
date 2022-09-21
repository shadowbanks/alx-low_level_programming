#include "main.h"

/**
  * rev_string - reverse a string
  * @s: string address to be reversed
  *
  * Return: nothing
  */

void rev_string(char *s)
{
	int len = 0;
	int i;
	char *begin, *end, ch;

	begin = s;
	end = s;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	for (i = 0; i < len - 1; i++)
		end++;

	for (i = 0; i < len / 2; i++)
	{
		ch = *end;
		*end = *begin;
		*begin = ch;

		end--;
		begin++;
	}
}
