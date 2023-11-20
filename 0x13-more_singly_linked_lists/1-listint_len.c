#include "lists.h"
/**
 * listint_len - list integers in the listed link
 * @h: pointer to the head
 * Return: sizeof listS
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
