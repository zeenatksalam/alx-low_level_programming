#include "3-calc.h"

/**
 * op_add - calculates the sum of 2 integers
 * @a: first integer.
 * @b: second integer.
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of 2 integers
 * @a: first integer.
 * @b: second integer.
 * Return: differnce of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of 2 integers
 * @a: first integer.
 * @b: second integer.
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of 2 integers
 * @a: first integer.
 * @b: second integer.
 * Return: division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the 2 integers when divided.
 * @a: first integer.
 * @b: second integer.
 * Return: remainder of a divided by  b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
