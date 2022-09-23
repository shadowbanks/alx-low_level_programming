#include "main.h"

/**
  *
  *
  *
  *
  */

void reverse_array(int *a, int n)
{
	int *start, *end, rev, i;

	start = a;
	end = a;

	for (i = 0; i < (n - 1); i++)
		end++;

	for (i = 0; i < (n / 2); i++)
	{
		rev = *end;
		*end = *start;
		*start = rev;

		end--;
		start++;
	}
}
