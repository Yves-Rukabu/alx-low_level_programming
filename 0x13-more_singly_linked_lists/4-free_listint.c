#include "lists.h"

/**
 * free_listint - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *tp2;

	while (hehead != NULL)
	{
		tp2 = head->next;
		free(head);
		head = tp2;
	}
}
