#include "lists.h"
/**
 * dlistint_len - print out the value of a linked list
 * @h: pointer to head
 * Return: the number of node
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;
	while (h != NULL)
		h = h->prev;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
