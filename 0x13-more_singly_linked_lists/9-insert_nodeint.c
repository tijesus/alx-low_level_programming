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
	unsigned int no = 0;

	if (head == NULL)
	return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	temp = *head;
	while (temp != NULL)
	{
		if (no == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		no++;
		temp = temp->next;
	}
	free(newNode);
	return (NULL);
}
