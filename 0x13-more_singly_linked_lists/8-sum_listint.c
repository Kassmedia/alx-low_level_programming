#include "lists.h"

/**
 * sum_listint - function with one argument
 * @head: pointer to first node of linked list
 *
 * Description: returns the sum of all the data(n)
 * Return: sum or 0 if empty
 */

int sum_listint(listint_t *head)
{
int n = 0;

while (head != NULL)
{
n = n + head->n;
head = head->next;
}
return (n);
}
