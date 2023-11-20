#include "lists.h"
/**
 * add_nodeint - adding nodde at the beginning of a list
 * @head: pointer to the address of head
 * @n: valueto be added to the list
 * Return: new node value
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = ((listint_t *)malloc(sizeof(listint_t)));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
