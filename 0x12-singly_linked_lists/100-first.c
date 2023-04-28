#include <stdio.h>

void my_init(void) __attribute__((constructor));
/**
 * my_init - Program that executes before main
 *
 * Return: Nothing
 */
void my_init(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
