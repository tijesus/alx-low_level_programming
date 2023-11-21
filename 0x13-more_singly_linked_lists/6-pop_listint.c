#include "lists.h"
/**
 * pop_listint - delete and return head node data
 * @head: pointer to head
 * Return: 0 success
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int no;

	if (*head == NULL)
		return (0);
	temp = *head;

	*head = temp->next;
	no = temp->n;
	free(temp);
	return (no);
}
