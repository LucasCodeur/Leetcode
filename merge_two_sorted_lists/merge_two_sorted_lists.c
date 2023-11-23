#include <stdio.h>
#include <stdlib.h>

// Definition de la structure pour un noeud de la liste chainee
struct ListNode 
{
     int val;
     struct ListNode *next;
};

// Fonction pour afficher les elements d'une liste chainee
void	printList(struct ListNode* head) 
{
	while (head != NULL) 
	{
		printf("%d", head->val);
		head = head->next;
	}
	printf("\n");
}

// Fonction pour inserer un nouvel element dans la liste triee
void	insertSorted(struct ListNode **head, int newVal)
{
	// Cas de base : si la liste triee est vide ou si le nouveau noeud vas au debut
	struct ListNode * newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
	newNode->val = newVal;
	newNode->next = NULL;

	if (*head == NULL || newVal < (*head)->val)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		// Trouver le noeud approprie pour inserer le nouveau noeud
		struct ListNode* current = *head;
		while (current->next != NULL && current->next->val < newVal)
			current = current->next;
		// Inserer le nouveau noeud dans la liste triee
		newNode->next = current->next;
		current->next = newNode;
	}
}

// Fonction pour trier une liste chainee par insertion
void	insertSort(struct ListNode **head)
{
	// Initialiser la liste triee
	struct ListNode* sorted = NULL;
	//Parcourir la liste non triee
	struct ListNode* current = *head;
	while (current != NULL)
	{
		//Sauvegarder le prochain noeud a traiter
		struct ListNode* next = current->next;
		insertSorted(&sorted, current->val);
		// Passer au prochain noeud dans la liste non triee
		current = next;
	}
	// Mettre a jour la tete de la liste triee
	*head = sorted;
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) 
{
	struct ListNode *sorted = list2;
	struct ListNode *current = list1;
	while (current != NULL)
	{
		struct ListNode* next = current->next;
		insertSorted(&sorted, current->val);
		current = next;
	}
	insertSort(&sorted);
	return sorted;
}

int	main() 
{
	// Creation de la premier liste chainee
	struct ListNode *head1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	head1->val = 1;
	head1->next = (struct ListNode*)malloc(sizeof(struct ListNode));
	head1->next->val = 2;
	head1->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
	head1->next->next->val = 3;
	head1->next->next->next = NULL;

	//Affichage de la premier liste chainee
	printf("Premiere liste chainee: ");
	printList(head1);

	// Creation de la deuxieme liste chainee
	struct ListNode *head2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	head2->val = 1;
	head2->next = (struct ListNode*)malloc(sizeof(struct ListNode));
	head2->next->val = 4;
	head2->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
	head2->next->next->val = 3;
	head2->next->next->next = NULL;

	//Affichage de la deuxieme liste chainee
	printf("Deuxieme liste chainee: ");
	printList(head2);
	struct ListNode *listMerge = mergeTwoLists(head1, head2);
	printList(listMerge);
	
	return 0;
}
