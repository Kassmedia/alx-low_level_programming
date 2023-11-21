#include "lists.h"

/**
 * add_nodeint_end - function with two arguments
 * @head: double pointer to head of first linked list
 * @n: integer value of data in node
 *
 * Description: add a new node at the end of linked list
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head != NULL)
{
	last = *head;
	while (last->next != NULL)
	last = last->next;
	last->next = new;
}
	else
	*head = new;
	return (new);
}
