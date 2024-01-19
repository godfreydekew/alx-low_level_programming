#include "lists.h"

/**
 *add_dnodeint - A function that adds a node at beginning
 *	of dlistint_t list.
 * @head: Double pointer to the list
 * @n: Value of the new node to be added.
 * Return: The address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
	return (NULL);
	}

	new->n = n;
	if ((*head) != NULL)
	{
	(*head)->prev = new;
	}

	new->next = *head;
	new->prev = NULL;
	(*head) = new;

	return (new);
}
