#include "lists.h"

/**
 * listint_len -counts  all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t new = 0;

	while (h != NULL)
	{
	h = h->next;
	new++;
	}
	return (new);
}
