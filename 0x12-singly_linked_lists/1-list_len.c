#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/

size_t list_len(const list_t *h)
{
	size_t cont = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		cont++;
		h = h->next;
	}
	return (cont);
}
