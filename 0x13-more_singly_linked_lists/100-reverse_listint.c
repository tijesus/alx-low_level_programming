#include "lists.h"
/**
 * *reverse_listint - reverse string
 * @head: pointer to pointer of head
 * Return: struct
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *curr = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		curr = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = curr;
	}
	*head = prev;
	return (*head);
}
