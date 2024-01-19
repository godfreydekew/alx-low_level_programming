/**
 *get_dnodeint_at_index - A  function that returns the nth node
 *	of a dlistint_t linked list.
 * @head: pointer to the list
 * @index: the index of the node, starting from
 * Return: The node at the index
 *	NULL if failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	if (head == NULL)
	{
	return (NULL);
	}

	for (unsigned int x = 0; x < index ; x++)
	{
	if (head == NULL)
	break;
	head = head->next;
	}

	return (head);
}
