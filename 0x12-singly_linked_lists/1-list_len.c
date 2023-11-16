#include "lists.h"
/**
 * list_len - return the number of element
 * @h: pointer to head
 * Return: 0 success
*/
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
