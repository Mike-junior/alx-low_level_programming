#include "lists.h"


/**
 * listint_len - returns  the number of elements of a linked list.
 *
 * @h: head of linklist node
 *
 * Return: the number of nodes
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t node1 = 0;

	while (h != NULL)
	{
		h = h->next;
		node1++;
	}
	return (node1);
}
