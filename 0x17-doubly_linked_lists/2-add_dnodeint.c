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

	temp = *head;
	while (*head != NULL)
		*head = *head->prev;

	while ()
}
