#include "lists.h"
/**
 * free_dlistint - freeing memory allocated
 * @head: pointer to the address to free
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
