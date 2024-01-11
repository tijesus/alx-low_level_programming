#include "lists.h"
/**
 * print_dlistint - print out the value of a linked list
 * @h: pointer to head
 * Return: the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	for (; h; h = h->next)
		n_nodes++;

	return (n_nodes);
}
