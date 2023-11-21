#include "lists.h"
/**
 * get_nodeint_at_index - get the node at a point
 * @head: pointer to an address
 * @index: position to get
 * Return: struct
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = NULL;
	size_t no = 0;

	temp = head;
	if (head == NULL)
		return (0);

	for (no = 0; temp != NULL && no < index; no++)
		temp = temp->next;
	if (no == index)
		return (temp);
	else
		return (NULL);
}
