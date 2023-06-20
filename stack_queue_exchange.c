#include "monty.h"

/**
 * stack - identify the stack type
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.type = 0;
}

/**
 * queue - identify the queue type
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.type = 1;
}