#include "Lists.h"

/**
 *print_dlistint - prints all the elements of a dlistint_t list
 *@h: Pointer to a doubly linked list
 * 
 * Return: Returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
