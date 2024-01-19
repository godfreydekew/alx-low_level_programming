#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint_t list.
 * @head: Double pointer to the list
 * Return: (void)
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *next = current->next;

		free(current);
		current = next;
	}
}
