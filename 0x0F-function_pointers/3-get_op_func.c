#include "calc.h"

/**
 * get_op_func - select calculator operation
 * @s: operation name
 * @a: number
 * @b: number
 *
 * Return: Pointer to function
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i]->op, s) == 0)
			break;
		i++;
	}
		return (ops[i]->f(a, b));
}