#include "lists.h"

/**
 * pop_listint - function with one argument
 * @head: pointer to head pointer of list
 *
 * Description: deletes the head node of linked list
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
listint_t *tmp;

int value = 0;
if (*head == NULL)
return (0);
value = (*head)->n;
tmp = (*head);
*head = (*head)->next;
free(tmp);
return (value);
}
