#include "lists.h"

/**
 *add_dnodeint_end - A function that adds a node at the end
 *	of dlistint_t list.
 * @head: Double pointer to the list
 * @n: Value of the new node to be added.
 * Return: The address of the new element
 *	NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
	return (NULL);
	}

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if ((*head) == NULL)
	{
	(*head) = new;
	}

	else
	{
	tmp = (*head);
	while (tmp->next != NULL)
	{
	tmp = tmp->next;
	}
	new->prev = tmp;
	tmp->next = new;
	}

	return (new);
}
