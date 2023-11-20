#include "lists.h"
/**
 * add_nodeint_end - adding nodde at the beginning of a list
 * @head: pointer to the address of head
 * @n: valueto be added to the list
 * Return: new node value
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = ((listint_t *)malloc(sizeof(listint_t)));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newNode;
	return (newNode);
}
