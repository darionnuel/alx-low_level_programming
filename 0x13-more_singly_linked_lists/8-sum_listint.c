#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * sum_listint - returns sum of ints
 *
 * @head: head of list
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	ptr = head;

	if (head == NULL)
		return (0);

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	free(ptr);
	return (sum);
}
