#include "main.h"

/**
  * _memcpy - Copies n bytes from src to dest
  * @dest: pointer to copy destination
  * @src: pointer to bytes to be copied
  * @n: number of bytes to be copied
  *
  * Return: pointer to memory dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pDest = dest;
	char *pSrc = src;

	while (n--)
	{
		*pDest = *pSrc;
		pDest++;
		pSrc++;
	}
	return (dest);
}
