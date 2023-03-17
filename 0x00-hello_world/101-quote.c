#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: StdErr (1)
 */

int main(void)
{
	char s[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, s, sizeof(s));

	return (1);
}
