#include "main.h"

/**
 * _pow_recursion - return the power of x raised to power y
 * @x: power to be raised
 * @y: the number to be raised by
 *
 * Return: the value of  x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return(x * _pow_recursion(x, y - 1));
}
