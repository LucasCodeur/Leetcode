# 21. Merge Two Sorted Lists

## Description
On vous donne les têtes de deux listes chaînées triées list1 et list2.

Fusionnez les deux listes en une seule liste triée. La liste doit être créée en reliant les nœuds des deux premières listes.

Retournez la tête de la liste fusionnée.
## Ma pensée
J'ai deux listes chaînées avec des nœuds contenant des valeurs, je dois les fusionner afin d'en faire qu'une seule.

- Entrées : Deux listes
- Sortie : Une seule liste

Si je dois fusionner deux listes chaînées, je dois changer l'adresse des nœuds à chaque ajout.

Je vais utiliser un algorithme de tri par insertion, étant adapté pour les listes chaînées.
## Approche et Algorithme
Tri par insertion (insertSort) : Cette fonction prend une liste chaînée non triée et la transforme en une liste chaînée triée en utilisant la fonction insertSorted. Elle parcourt la liste non triée et insère chaque nœud dans la liste triée.

Insertion triée (insertSorted) : Cette fonction insère un nouveau nœud dans une liste chaînée triée, en respectant l'ordre croissant des valeurs. Si la liste triée est vide ou si le nouveau nœud doit être inséré au début, le nouveau nœud devient la tête de la liste triée. Sinon, la fonction parcourt la liste triée pour trouver l'emplacement approprié pour le nouveau nœud et l'insère.

## Complexité
### Temporelle
Tri par insertion (insertSort) : La complexité temporelle pour trier une liste non triée par insertion est généralement 0(n^2), où n est le nombre d'éléments dans la liste. Cela est dû au fait que dans le pire cas, chaque nouvel élément doit être inséré à la bonne position dans la liste triée, et cela nécessite de parcourir la liste triée jusqu'à l'endroit approprié.

Insertion triée (insertSorted) : L'insertion d'un nouveau nœud dans une liste triée a une complexité linéaire en fonction du nombre d'éléments dans la liste triée. Dans le pire cas, la fonction doit parcourir toute la liste triée pour trouver l'emplacement approprié, ce qui donne une complexité de O(n).

En combinant ces deux parties, si vous appelez insertSort pour chaque nœud dans la liste non triée, et pour chaque nœud, vous appelez insertSorted, la complexité totale serait 0(n^2), où n est le nombre total d'éléments dans la liste.
### Spatial
Tri par insertion (insertSort) : L'algorithme ne nécessite pas d'espace supplémentaire en dehors des variables locales (par exemple, les pointeurs current, next, sorted, newNode). Ces variables occupent un espace constant, indépendamment de la taille de la liste.

Insertion triée (insertSorted) : La fonction effectue des opérations directement sur les nœuds existants sans utiliser de mémoire supplémentaire proportionnelle à la taille de la liste. Les modifications sont locales et n'impliquent pas l'allocation d'espace supplémentaire.

Dans l'ensemble, la mémoire utilisée par l'algorithme ne dépend pas linéairement de la taille de la liste, ce qui donne une complexité spatiale O(1). Cela signifie que l'algorithme utilise un espace mémoire constant indépendamment de la taille de la liste chaînée.
## Description
You are given the heads of two sorted linked lists, list1 and list2.

Merge the two lists into a single sorted list. The list must be created by linking the nodes of the first two lists.

Return the head of the merged list.
## My thought
I have two linked lists with nodes containing values, I need to merge them to make just one.

- Inputs: Two lists
- Output: One list

If I need to merge two linked lists, I need to change the address of the nodes each time I add them.

I'm going to use an insertion sort algorithm, which is suitable for chained lists.
## Complexity
### Temporal
Insertion sort (insertSort): The time complexity of sorting an unsorted list by insertion is usually 0(n^2), where n is the number of elements in the list. This is because in the worst case, each new element must be inserted at the correct position in the sorted list, and this requires traversing the sorted list to the appropriate location.

Sorted insertion (insertSorted): Inserting a new node into a sorted list has a linear complexity as a function of the number of elements in the sorted list. In the worst case, the function must traverse the entire sorted list to find the appropriate location, giving a complexity of O(n).

Combining these two parts, if you call insertSort for each node in the unsorted list, and for each node you call insertSorted, the total complexity would be 0(n^2), where n is the total number of elements in the list.
### Spatial
Insertion sorting (insertSort): The algorithm requires no additional space apart from local variables (e.g. current, next, sorted, newNode pointers). These variables occupy a constant amount of space, regardless of the size of the list.

Sorted insertion (insertSorted): The function performs operations directly on existing nodes without using additional memory proportional to the list size. Modifications are local and do not require the allocation of additional space.

Overall, the memory used by the algorithm does not depend linearly on the size of the list, resulting in O(1) space complexity. This means that the algorithm uses constant memory space irrespective of the size of the linked list.


