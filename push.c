#include "monty.h"

/**
 * _push - add node stack
 * @head: head
 * @counter: counter line no'
 * Return: nothing
*/

void _push(stack_t **head, unsigned int counter)
{
	int i, c = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			c++;
		for (; bus.arg[c] != '\0'; c++)
		{
			if (bus.arg[c] > 57 || bus.arg[c] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	i = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, i);
	else
		addqueue(head, i);
}
