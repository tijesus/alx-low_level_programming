#include "lists.h"
/**
 * sum_dlistint - sum all nodes
 * @head: Pointer to head of node
 * Return: sum of nodes
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
