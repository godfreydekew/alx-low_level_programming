#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *traverse = *head;
	int len = 0;

	if (*head == NULL)
		return (-1);

	while (traverse)
	{
		len++;
		traverse = traverse->next;
	}
	if (index >= len)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;

		free(traverse);
		return (1);
	}
	if (index == len - 1)
	{
		traverse = *head;
		while (traverse->next)
			traverse = traverse->next;
		traverse->prev->next = NULL;
		free(traverse);
		return (1);
	}
	else
	{
		traverse = *head;
		while (index--)
			traverse = traverse->next;
		traverse->prev->next = traverse->next;
		traverse->next->prev = traverse->prev;

		free(traverse);
		return (1);
	}
}
