#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: parameter pointer
 */
void free_listint2(listint_t **head)
{
listint_t *i;

if (head == NULL)
return;

while (*head)
{
i = (*head)->next;
free(*head);
*head = i;
}

*head = NULL;
}
