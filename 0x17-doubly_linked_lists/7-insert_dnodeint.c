#include "lists.h"
/**
 * insert_dnodeint_at_index:nadd new node at a particular index
 * @h: pointer to the head pointer
 * @idx: position to add node
 * @n:value of new node
 * return new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *temp;
    dlistint_t *new;
    unsigned int i;

    temp = *h;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);
    new->n = n;

    for (i = 1; i < idx; i++)
        temp = temp->next;

    new->prev = temp;
    new->next = temp->next;
    temp->next = new;
    new->next->prev = new;

    return (new);
}
