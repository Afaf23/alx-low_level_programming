#include "lists.h"
#include <stdlib.h>
#include <sdtio.h>
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of list.
 * @head: pointer to singly linked list.
 * @str: pointer to signly linked list.
 * Return: The address of the new element or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t lngt = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[lngt])
		lngt++;
	new->len = lngt;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}


