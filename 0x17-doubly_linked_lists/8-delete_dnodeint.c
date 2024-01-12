#include "lists.h"
/**
 * delete_dnodeint_at_index -  delete node at a point
 * @head:pointer to pointer of head
 * @index: index to delete
 * Return: return nodes or null
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp, *next_node;

	temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		next_node = temp->next;
		if (next_node != NULL)
			next_node->prev = NULL;
		free(temp);
		*head = next_node;
		return (1);
	}

	for (i = 0; i < index && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
		return (-1);

	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	temp->prev->next = temp->next;

	free(temp);

	return (1);
}
