#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts at position specified
 *
 * @head: start of list
 *
 * @idx: position
 *
 * @n: int value
 *
 * Return: Pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *new;

	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		tmp = *head;
		for (; i < idx - 1 && tmp != NULL; i++)
			tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	new->n = n;
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	new->next = tmp->next;
	tmp->next = new;
	free(tmp);
	return (new);

}

