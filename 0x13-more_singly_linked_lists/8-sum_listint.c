#include "lists.h"
/**
 * sum_listint - sum of list
 * @head: pointer to head
 * Return: 0 success
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	if (head == NULL)
		return (0);

	while(temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
