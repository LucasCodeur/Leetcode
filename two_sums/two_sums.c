#include <stdio.h>
#include <stdlib.h>

// Structure du noeud pour la table de hachage
typedef struct node
{
    int     key;
    int     value;
    struct node *next; 
} node;

// Structure de la table de hachage
typedef struct hash_table
{
    int     size;
    node    **array;
} hash_table;

// Créer une nouvelle table de hachage
hash_table *create_hash_table(int size)
{
    hash_table *table = (hash_table *)malloc(sizeof(hash_table));
    table->size = size;
    table->array = (node **)malloc(sizeof(node *) * size);
    for (int i = 0; i < size; i++)
        table->array[i] = NULL;
    return table;
}

// Fonction de hachage simple (à améliiorer pour une utilisation réel)
int     hash(int key, int size)
{
    return key % size;
}

void    insert(hash_table *table, int key, int value)
{
    int     index;

    index = hash(key, table->size);
    node *new_node = (node *)malloc(sizeof(node));
    new_node->key = key;
    new_node->value = value;
    new_node->next = table->array[index];
    table->array[index] = new_node;
}

// Recherche une clé dans la table de hachage
int     search(hash_table *table, int key)
{
    int     index;

    index = hash(key, table->size);
    node *current = table->array[index];
    while (current != NULL)
    {
        if (current->key == key)
            return current->value;
        current = current->next;
    }
    return -1; // Clé non trouvée
}

int* twoSum(int* nums, int nums_size, int target, int* return_size)
{
    hash_table *table = create_hash_table(nums_size);
    for (int i = 0; i < nums_size; i++)
    {
        int     complement;
        int     complement_index;

        complement = target - nums[i];
        complement_index = search(table, complement);
        if (complement_index != -1)
        {
            int     *result = (int *)malloc(2 * sizeof(int));
            result[0] = complement_index;
            result[1] = i;
            *return_size = 2;
            return result;
        }
        insert(table, nums[i], i);
    }
    return NULL; // Pas de solution
}

int     main()
{
    int     nums[] = {2, 7, 11, 15};
    int     target = 9;
    int     return_size;
    int     *result = twoSum(nums, 4, target, &return_size);
    
    if (result != NULL)
    {
        printf("[%d, %d]\n", result[0], result[1]);
        free(result);
    }
    else
        printf("Pas de solution.\n");
    return 0;
}