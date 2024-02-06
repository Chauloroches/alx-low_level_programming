#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: double pounter
 * @n: add list
 * Return: pointer to the new node, otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *pointer;

pointer = malloc(sizeof(listint_t));
if (!pointer)
return (NULL);

pointer->n = n;
pointer->next = *head;
*head = pointer;

return (pointer);
}
