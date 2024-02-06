#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: parameter
 * Return: the head node’s data (n) otherwise 0
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int numbers;

if (!head || !*head)
return (0);

numbers = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (numbers);
}
