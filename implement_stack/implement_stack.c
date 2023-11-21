#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct
{
	int	top;
	int	*items;

} my_stack;

my_stack *my_stack_create()
{
	my_stack *obj = (my_stack *)malloc(sizeof(my_stack));
	if (obj == NULL)
	{
		printf("L'allocation de memoire pour la structure  a echoue.\n");
		return NULL;
	}
	obj->top = -1;
	obj->items = (int *)malloc(MAX_SIZE * sizeof(int));

	if (obj->items == NULL)
	{
		printf("L'allocationd de memoire pour les elements de la pile a echoue.\n");
		free(obj);

		return NULL;
	}
	return obj;
}

int	is_full(my_stack *obj)
{
	return (obj->top == MAX_SIZE - 1);
}

void	my_stack_push(my_stack *obj, int x)
{
	if (is_full(obj))
	{
		printf("Erreur: La pile est pleine.\n");
		return;
	}
	obj->items[++obj->top] = x;
}

int	my_stack_pop(my_stack *obj)
{
	return (obj->items[obj->top--]);
}

int	my_stack_top(my_stack *obj)
{
	return (obj->items[obj->top]);
}

bool	my_stack_empty(my_stack *obj)
{
	if (obj->top == -1)
		return true;
	else
		return false;
}

void	my_stack_free(my_stack *obj)
{
	free(obj->items);
	free(obj);
}

int	main()
{
	
	my_stack *obj = my_stack_create(MAX_SIZE);
	if (obj == NULL)
		return 1;
	my_stack_push(obj, 5);
	int	param_2 = my_stack_pop(obj);
	int	param_3 = my_stack_top(obj);
	bool	param_4 = my_stack_empty(obj);
	printf("%d\n", param_2);
	printf("%d\n", param_3);
	printf("%d\n", param_4);
	my_stack_free(obj);
	return 0;
}
