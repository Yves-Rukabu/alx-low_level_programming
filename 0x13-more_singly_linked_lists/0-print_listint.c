#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *yp;
	unsigned int cntr = 0;

	yp = h;
	while (yp)
	{
		printf("%d\n", yp->n);
		cntr++;
		yp = yp->next;
	}
	return (cntr);
}
