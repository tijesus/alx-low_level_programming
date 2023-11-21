#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at a position
 * @head: pointer to pointer of head
 * @index: position
 * Return: 0 success
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	size_t no;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	prev = *head;
	curr = (*head)->next;
	for (no = 1; curr && no < index; no++)
	{
		prev = curr;
		curr = curr->next;
	}

	if (curr == NULL)
		return (-1);

	prev->next = curr->next;
	free(curr);
	return (1);
}
