#include <stdlib.h>
#include "lists.h"

/**
 * list_len - computes the length of the liked list..
 * @h: a pointer to the list to iterato to.
 * Return: the number of nodes
 */
size_t list_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t i = 0;

	tmp = h;
	if (tmp)
		tmp = h;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

/**
 * _chunk_ispal - Tests if a part of a list is palindrome.
 * @l: The list
 * @start: The start
 * @end: The end
 * Return: 1 if the substring s[start..end] is palindrome.
 *	   0 otherwise.
 */
int _chunk_ispal(listint_t **l, int start, int end)
{
	if (start == end)
		return (1);
	if (l[start]->n != l[end]->n)
		return (0);
	if (start < end + 1)
		return (_chunk_ispal(l, start + 1, end - 1));
	return (1);
}

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: The head of the list
 * Return: 1 if the list is a palindrome. 0 otherwise.
 */
int is_palindrome(listint_t **head)
{
	int res = 1, i = 0, n;
	listint_t **array_of_list;
	listint_t *tmp;

	if (head && *head)
	{
		n = list_len(*head);
		array_of_list = malloc(n * sizeof(listint_t *));
		tmp = *head;
		while (tmp)
		{
			array_of_list[i++] = tmp;
			tmp = tmp->next;
		}
		res = _chunk_ispal(array_of_list, 0, n - 1);
		free(array_of_list);
	}
		return (res);
}
