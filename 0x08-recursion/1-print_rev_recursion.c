#include "main.h"

/**
 * _print_rev_recursion - function to reverse a string
 * @s: string to reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
