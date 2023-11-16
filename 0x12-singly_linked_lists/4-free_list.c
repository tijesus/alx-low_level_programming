#include "lists.h"
/**
 * free_list - free memory created
 * @head: pointer to head
*/
void free_list(list_t *head)
{
    list_t *t = NULL;
    
    for (t = head; head != NULL;)
    {
        t = head->next;
        free(head->str);
        free(head);
        head = t;
    }
}