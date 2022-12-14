#include "3-calc.h"

/**
 * get_op_fun - function pointer that selects the correct function to perform
 * the operation asked by the user
 * @s: the operator giving by the user
 *
 * Return: pointer to the function that corresponds to the
 * operator giving as a parameter
 */
int (*get_op_func(char *s))(int a, int a)
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

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
