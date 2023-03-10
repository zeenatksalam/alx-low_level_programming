#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes 2 character c to stdout
 * @c: the character to print
 * Return: on uccess 1
 * on error, -1 is returned and error is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
