#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add node at beginning of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodeA;

	if (head == NULL)
		return (NULL);
	nodeA = malloc(sizeof(listint_t));
	if (nodeA == NULL)
		return (NULL);
	nodeA->n = n;
	nodeA->next = *head;
	*head = nodeA;
	return (nodeA);
}
