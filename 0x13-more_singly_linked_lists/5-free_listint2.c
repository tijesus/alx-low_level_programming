#include "lists.h"
/**
 * free_listint2 - freeing memory of a struct
 * @head: pointer to a pointer of head
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;
	
	if (head == NULL)
		return;
	while(*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	head = NULL;
}