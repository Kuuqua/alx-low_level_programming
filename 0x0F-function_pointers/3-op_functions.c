#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition operator
 * @a: first int
 * @b: second int
 * Return: sum of 2 numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operator
 * @a: first int
 * @b: second int
 * Return: difference of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of 2 numbers
 * @a: first int
 * @b: second int
 * Return: product of the numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of 2 nummbers
 * @a: first int
 * @b: second int
 * Return: result of the division of numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a/b);
}

/**
 * op-mod - get remainder of the division of 2 numbers
 * @a: first int
 * @b: second int
 * Return: remainder of the division of 2 numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
