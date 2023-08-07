#include "lists.h"

/**
 * sum_listint - works out the sum of all the data in a listint_t list
 * @head: Pointer to the head of the linked list.
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}
