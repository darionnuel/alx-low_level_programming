#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - pops the head node off and returns its value
 *
 * @head: list
 *
 * Return: value
 */

int pop_listint(listint_t **head)
{
	int a;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	a = temp->n;
	free(temp);
	return (a);
}
