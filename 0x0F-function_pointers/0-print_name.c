#include <stddef.h>
#include "function_pointers.h"

/**
  * print_name - calls functionn from agrument and pass a name to said function
  * @name: name to be passed
  * @f: holds function to be called
  *
  * Return: nothing
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
