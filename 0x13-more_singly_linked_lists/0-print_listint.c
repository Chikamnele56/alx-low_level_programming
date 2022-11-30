#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 * Return: the number of nodes of the linked list
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", cursor->n);
			count += 1;
			cursor = cursor->next;
		}
	}
	return (count);
}
