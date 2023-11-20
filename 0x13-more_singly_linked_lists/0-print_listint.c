#include "lists.h"
/**
 * print_listint - print out the listed links
 * @h: pointer to head
 * Return: sizeof
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
