#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiply two numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 else 1 as error
 */
int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	k = i * j;
	printf("%d\n", k);
	return (0);
}
