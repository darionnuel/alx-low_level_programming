#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 *
 * @head: linked list head
 *
 * Return: freed list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}

}
