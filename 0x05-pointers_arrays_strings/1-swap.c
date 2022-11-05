#include "main.h"
#include <stdio.h>

/**
 * swap_int - functions that swap the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
