#include "lists.h"
/**
 * add_dnodeint - adding node to the beginning of a node
 * @head: pointer to the pointer of head
 * @n: the value to br added
 * Return: adress of rlrmeny on success or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new_node;

	temp = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = temp;

	if (temp != NULL)
		temp->prev = new_node;
	*head = new_node;

	return (new_node);
}
