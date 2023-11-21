#include "lists.h"
/**
 * insert_nodeint_at_index - inserting a node at a position
 * @head: pointer to pointer of head
 * @idx: position to delete
 * @n: number of value
 * Return: struct
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	size_t no = 0;

	temp = *head;
	if (temp == NULL)
		return (0);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = temp;
		*head = newNode;
		return (newNode);
	}
	while (no < (idx - 1))
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
		no++;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
