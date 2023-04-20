#include "function_pointers.h"

/**
 * print_name - Display name
 * @name: name to display
 * @f: fuction pointer
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
