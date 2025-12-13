#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct	s_stack{
    int	*collection;
    int	capacity;
    int	size;
} t_stack;

int	ft_atoi(const char *nptr)
{
	int	y;
	int	sign;
	int	total;

	total = 0;
	sign = 1;
	y = 0;
	while ((nptr[y] >= 9 && nptr[y] <= 13) || nptr[y] == 32)
		y++;
	if (nptr[y] == '-')
	{
		sign = -sign;
		y++;
	}
	else if (nptr[y] == '+')
		y++;
	while (nptr[y] >= '0' && nptr[y] <= '9')
	{
		total = total * 10 + nptr[y] - '0';
		y++;
	}
	return (total * sign);
}

t_stack	*create_stack(int capacity)
{
	if (capacity <= 0)
		return (NULL);
	t_stack *stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->collection = malloc(sizeof(int) * capacity);
	if (!stack->collection)
	{
		free (stack);
		return (NULL);
	}
	stack->capacity = capacity;
	stack->size = 0;

	return (stack);
}

void destroy_stack(t_stack *stack)
{
	free (stack->collection);
	free (stack);
}

bool is_full(t_stack *stack)
{
	return (stack->capacity == stack->size);
}

bool is_empty(t_stack *stack)
{
	return (stack->size == 0);
}

/*bool pop(t_stack *stack, int item)
{
	
}*/

bool push(t_stack *stack, int item)
{
	if (is_full(stack))
		return (false);

	stack->collection[stack->size] = item;
	stack->size++;
		
	return (true);
}

/*bool peek(t_stack *stack, int *item)
{
	
}*/

int	main(void)
{
	t_stack *stack = create_stack(5);

	if (!stack)
	{
		printf("error while creating stack\n");
		return (1);
	}
	push(stack, 2);
	push(stack, 7);
	push(stack, 8);
	push(stack, 9);
	push(stack, 10);

	if (is_full(stack))
		printf("stack is full\n");
	if (is_empty(stack))
	{
		printf("the stack is empty\n");
	}
	
	printf("stack size is : %d\n", stack->size);
	destroy_stack(stack);
	return (0);
}
