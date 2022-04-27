#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - get the nth node
 *
 * @head: start of linked list
 *
 * @index: index of list whos value to be retrieved
 *
 * Return: index value
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	temp = head;

	if (head == NULL)
		return (NULL);

	while (index)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		index--;
	}

	return (temp);
}
