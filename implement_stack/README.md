# 225. Implement Stack using Queues

## Description
> Implémentation de la structure de données "last-in-first-out" (LIFO), également appelée pile (stack), en utilisant uniquement deux files. L'implémentation de la pile devra prendre en charge toutes les fonctions d'une pile normale (push, top, pop et empty).
> 

Implémentez la classe "MyStack" :

- **`void push(int x)`**: Ajoute l'élément x au sommet de la pile.
- **`int pop()`**: Retire l'élément en haut de la pile et le renvoie.
- **`int top()`**: Renvoie l'élément en haut de la pile.
- **`boolean empty()`**: Renvoie vrai si la pile est vide, sinon faux.

Notes :

- Vous ne devez utiliser que les opérations standard d'une file, ce qui signifie uniquement les opérations push à l'arrière, peek/pop à l'avant, size et is empty.
- En fonction de votre langage, la file pourrait ne pas être prise en charge nativement. Vous pouvez simuler une file en utilisant une liste ou une deque (double-ended queue), tant que vous n'utilisez que les opérations standard d'une file.
## Ma pensée
Le but de l'exercice étant de reproduire l'algorithme LIFO (Last-in, First-out) - Dernier arrivé, premier servi, il faudra utiliser plusieurs fonctions pour simuler cet algorithme, telles que pop (servant à retirer l'élément en haut de la pile et le renvoyer), push (ajout d'un élément au sommet de la pile), top (renvoie l'élément au-dessus de la pile), et empty (renvoie vrai si la pile est vide).

Entrée : ["MyStack", "push", "push", "top", "pop", "empty"]

Sortie : [null, null, null, 2, 2, false]

## Approche et Algorithme
L'algorithme implémente une structure de données appelée pile (stack) utilisant un tableau dynamique. La pile suit le principe Last-in, First-out (LIFO), ce qui signifie que le dernier élément ajouté est le premier à être retiré. Voici une description détaillée de chaque fonction :

my_stack_create() :

Cette fonction crée une instance de la pile (my_stack).
Elle alloue de la mémoire pour la structure my_stack et le tableau items à l'aide de malloc.
Si l'allocation échoue, elle affiche un message d'erreur et renvoie NULL.
*is_full(my_stack obj) :

Cette fonction vérifie si la pile est pleine en comparant l'index du sommet (top) avec la taille maximale (MAX_SIZE - 1).
*my_stack_push(my_stack obj, int x) :

Cette fonction ajoute un élément x au sommet de la pile.
Elle vérifie d'abord si la pile est pleine en appelant la fonction is_full.
Si la pile n'est pas pleine, elle incrémente top et ajoute l'élément à la position correspondante dans le tableau items.
*my_stack_pop(my_stack obj) :

Cette fonction retire l'élément du sommet de la pile.
Elle retourne la valeur de l'élément retiré.
Elle ne fait rien si la pile est vide.
*my_stack_top(my_stack obj) :

Cette fonction renvoie la valeur de l'élément situé au sommet de la pile sans le retirer.
Elle ne fait rien si la pile est vide.
*my_stack_empty(my_stack obj) :

Cette fonction vérifie si la pile est vide en comparant top avec -1.
Elle renvoie true si la pile est vide, sinon elle renvoie false.
*my_stack_free(my_stack obj) :

Cette fonction libère la mémoire allouée pour la pile en utilisant free pour items et obj.
main() :

La fonction principale crée une instance de la pile (obj).
Elle utilise les différentes fonctions de la pile (my_stack_push, my_stack_pop, my_stack_top, my_stack_empty) pour effectuer des opérations sur la pile.
Elle affiche les résultats à l'écran.
Type de l'algorithme :

L'algorithme mis en œuvre ici est une implémentation d'une pile (stack) basée sur un tableau dynamique en langage C. Cette structure de données est couramment utilisée pour gérer des éléments de manière Last-in, First-out (LIFO), ce qui signifie que le dernier élément ajouté est le premier à être retiré. La pile est utilisée pour stocker et récupérer des données de manière efficace, souvent dans des situations où l'ordre d'arrivée des éléments est important.
## Complexité
### Temporelle
Globalement, la complexité temporelle de chaque opération est constante (O(1)), ce qui signifie que le temps d'exécution de chaque opération ne dépend pas de la taille de la pile. Cela rend l'implémentation de la pile très efficace pour les opérations individuelles.
### Spatial
la complexité spatiale est constante (O(1)) pour chaque opération de la pile, car aucune allocation dynamique d'espace mémoire supplémentaire n'est effectuée à mesure que la pile est utilisée.

