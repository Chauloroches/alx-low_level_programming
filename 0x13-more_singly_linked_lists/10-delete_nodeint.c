#include "lists.h"

/**
 * delete_nodeint_at_index - node at index index of a listint_t linked list
 * @head: parameter
 * @index: parameter
 * Return: 1  or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *current = NULL;
unsigned int a = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}

while (a < index - 1)
{
if (!temp || !(temp->next))
return (-1);
temp = temp->next;
a++;
}


current = temp->next;
temp->next = current->next;
free(current);

return (1);
}
