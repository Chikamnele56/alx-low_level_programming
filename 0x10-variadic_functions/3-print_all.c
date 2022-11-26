#include "variadic_functions.h"

/**
 * * print_char - print a char
 * * @arg: A list of argument pointing to the character to be printed
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);

	printf("%c", letter);
}

/**
 * * print_string - prints a string
 * * @arg: A list of arguments pointing to the string to be printed
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * * print_int - prints an int
 * * @arg: A list of argument to the integer to be printed
 */
void print_int(va_list arg)
{
	int num;
	
	num = va_arg(arg, int);
	
	printf("%d", num);
}
/**
 * * print_float - prints a float
 * * @arg: A list of argument to the float to be printed
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);

	printf("%f", num);
}
/**
 * print_all - prints anything
 * @format: format of input
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	
	int i = 0, j = 0;
	
	char *separator = "";
	
	printer_t funcs[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"f", print_float}
	};
	
	va_start(args, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(func[j].symbols)))
		j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].f(valist);
			separator = ", ";
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
