#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n element of anarray of integers
 * @a: array that will be printed
 * @n: number of elements
 * Return: 0
 */

void prints_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		else
			printf("\n");
	}
}
