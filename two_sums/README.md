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

