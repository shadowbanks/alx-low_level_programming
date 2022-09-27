#include "main.h"

/**
  * _memset - fills memory with a contant byte
  * @s: destination pointer
  * @b: constant byte
  * @n: fisrt n bytes to be copied to
  *
  * Return: pointer to memory s
  */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*s = b;
		s++;
	}
	return (s);
}
