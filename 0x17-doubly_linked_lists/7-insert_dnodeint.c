#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that insertse
 *		a newNode node at a given position of a dlistint_t list.
 * @h: A double pointer to the head of a doubly linked list.
 * @idx: The index at which the new node is to be inserted.
 * @n: Value of the new node to be inserted.
 * Return: On success, address of the new node
 *		else, NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;

	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (*h == NULL)
	{
		(*h) = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = temp;
		new->prev = NULL;
		temp->prev = new;
		(*h) = new;
		return (new);
	}
	for (i = 1; temp; i++)
	{
		if (i == idx)
		{
			new->next = temp->next;
			new->prev = temp;
			temp->next = new;
			return (new);
		}

		temp = temp->next;
	}

	return (NULL);
}
