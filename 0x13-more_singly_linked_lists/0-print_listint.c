#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @i: linked list of type listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *i)
{
size_t numbers = 0;

while (i)
{
printf("%d\n", i->n);
numbers++;
i = i->next;
}

return (numbers);
}
