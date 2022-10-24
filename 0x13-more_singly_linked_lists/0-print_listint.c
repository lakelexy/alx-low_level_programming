#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_listint - A function that prints singly linked list.
 * @h: pointer to the head of the list
 *
 * Return: the length of the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}
