#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *yp;
	unsigned int cnr = 0;

	yp = h;
	while (yp)
	{
		cnr++;
		yp = yp->next;
	}
	return (cnr);
}
