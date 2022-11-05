#include <unistd.h>
/**
 * _putchar - print a character
 *
 * @n: character input to print
 *
 * Return: on success 1.
 */
int _putchar(char n)
{
	return (write(1, &n, 1));
}
