#include "lists.h"
/**
 * add_dnodeint_end - Adding node at the end of a list 
 * @head: pointer to the pointer of head
 * @n: value to add
 * Return: return element or null
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new_node;

	temp = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	/**checking if the pointer is null*/
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;		
		return (new_node);
	}	
	
	while (temp->next != NULL)
		temp = temp->next;
	new_node->prev = temp;
	temp->next = new_node;

	return (new_node);
}
