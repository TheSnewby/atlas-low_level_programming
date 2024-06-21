#include "3-calc.h"

/**
 * get_op_func - selects the correct function asked by the user
 * @s: string
 * @a: first num
 * @b: second num
 *
 * Return: 0, or 100 on exit(100)
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
    int i = 1;

	while (i++ < 6)
	{
		if (*s == ops[i].op[0])
		{
			return ops[i].f;
		}
	}

	return (NULL);
}
