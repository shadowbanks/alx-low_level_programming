#include "main.h"

/**
  * _isdigit - checks for a digit
  * @c: holds the digit
  *
  * Return: 1 if a digit, 0 if not
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
