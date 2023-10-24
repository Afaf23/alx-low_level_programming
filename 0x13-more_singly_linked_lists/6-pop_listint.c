#include "lists.h"

/**
 *pop_listint - deletes the head node of a linked list
 *@head: head of the list
 *Return: the deleted node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int v;

	if (*head == NULL)
		return (0);

	temp = *head;
	v = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (v);
}
