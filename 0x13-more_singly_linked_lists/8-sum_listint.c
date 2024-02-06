#include "lists.h"

/**
 * sum_listint - he sum of all the data (n) of a listint_t linked list
 * @head: parameter
 * Return: 0
 */
int sum_listint(listint_t *head)
{
int i = 0;
listint_t *temp = head;

while (temp)
{
i += temp->n;
temp = temp->next;
}

return (i);
}
