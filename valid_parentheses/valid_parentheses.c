#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 10000

// structure qui represente la pile avec un tableau d'elements et un indice (top) indiquant le sommet de la pile
struct Stack 
{
	char	items[MAX_SIZE];
	int	top;
};

// Initialise la pile en mettant top a -1
void	initialize(struct Stack *stack)
{
	stack->top = -1;
}

// Ajoute un element au sommet de la pile
void	push(struct Stack *stack, char value)
{
	stack->items[++stack->top] = value;
}

// Retir l'element au sommet de la pile
char	pop(struct Stack *stack)
{
	return stack->items[stack->top--];
}

// Prend une chaine de caractere en entree et retourne un booleen indiquant si la chaine de parentheses est valide.
bool is_valid(char *s)
{
	struct Stack stack;
	initialize(&stack);

	// Parcour chaque caractere de la chaine
	for (int i = 0; s[i] != '\0'; i++)
	{
		// Si le caractere est une ouverture de parenthese il est ajoute au sommet de la pile
		if (s[i] == '(' || s[i] == '{' || s[i] == '[')
		{
			push(&stack, s[i]);
		}

		// Si le caractere est une fermeture de parenthese, le programme verifie si la pile est vide.
		// Si la pile est vide, la chaine n'est pas valide.
		// Sinon, le programme verifie si le caractere de fermeture correspond a l'ouverture de parenthese en haut de la pile. SI c'est le cas, l'element est retirer de la pile
		// sinon, la chaine n'est pas valide. 
		else if (s[i] == ')' && (stack.top == -1 || pop(&stack) != '('))
			return false;
		else if (s[i] == '}' && (stack.top == -1 || pop(&stack) != '{'))
			return false;
		else if (s[i] == ']' && (stack.top == -1 || pop(&stack) != '['))
			return false;
	}
	// Verification finale, on verifie si la pile est vide si c'est le cas cela veut dire que chaque parentheses a trouve ca paire.
	return stack.top == -1;
}

int	main()
{
    printf("%s\n", is_valid("()") ? "true" : "false");
    printf("%s\n", is_valid("()[]{}") ? "true" : "false");
    printf("%s\n", is_valid("(]") ? "true" : "false");

    return 0;
}
