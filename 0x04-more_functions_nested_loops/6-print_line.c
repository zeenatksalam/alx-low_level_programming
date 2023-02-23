#include "main.h"

/**
 * _isupper - draws a straight line according to a parameter
 * @n: The number of lines  be drawn
 * Return: empty
 */

void  print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
