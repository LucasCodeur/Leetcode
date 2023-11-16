# Two Sums

## Description
The Two Sums problem involves finding two numbers in a given array such that their sum equals a given target value.

## Approach and Algorithm
To solve this problem, a brute-force approach is employed, involving iterating through all possible pairs of numbers in the array until the correct pair is found. The algorithm uses two nested loops to compare each number with the subsequent ones.

## Complexity
- Time: O(n^2) (due to the two nested loops)
- Space: O(1) (no additional memory used)

## Examples
```typescript
// Example Input/Output
const result = two_sums([1, 2, 3, 4], 3);
console.log(result); // Expected Output: [0, 2]

# Two Sums

## Description
Le problème des deux sommes consiste à trouver deux nombres dans un tableau donné tels que leur somme équivaut à une valeur cible donnée.

## Approche et Algorithme
Pour résoudre ce problème, une approche par force brute est utilisée, consistant à parcourir tous les paires possibles de nombres dans le tableau jusqu'à ce que la paire correcte soit trouvée. L'algorithme utilise deux boucles imbriquées pour comparer chaque nombre avec les suivants.

## Complexité
- Temporelle: O(n^2) (en raison des deux boucles imbriquées)
- Spatiale: O(1) (pas de mémoire supplémentaire utilisée)

## Exemples
```typescript
// Exemple d'entrée/sortie
const result = two_sums([1, 2, 3, 4], 3);
console.log(result); // Résultat attendu: [0, 2]

