#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of list.
 * @head: pointer to singly linked list.
 * @str: pointer to signly linked list.
 * Return: The address of the new element or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	size_t length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[length])
		length++;
	new->len = length;
	new->str = strdup(str);
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = NULL;
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}
	return (new);
}
