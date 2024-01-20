#include "lists.h"

/**
 *sum_dlistint - A  function that returns the sum of
 *	all the data (n) of a dlistint_t list.
 * @head: Pointer to the head of the list
 * Return: The sum of all data in the list ,
 *	0 if the list is empy.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
	sum = sum + head->n;
	head = head->next;
	}
	return (sum);
}
