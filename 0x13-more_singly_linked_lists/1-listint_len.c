#include "lists.h"
/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t node_num = 0;

while (h != NULL)
{
h = h->next;
node_num++;
}
return (node_num);
}
