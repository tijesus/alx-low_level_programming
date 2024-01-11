#include "lists.h"
/**
 * get_dnodeint_at_index - return the value of a node at a point
 * @head: pointer to the head address
 * @index: index to print out
 * Return: return the index value
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t  *temp;
	unsigned int i;

	temp = head;
	for (i = 0; i < index; i++)
	{
		if (temp != NULL)
			temp = temp->next;
	}
	return (temp);
}
