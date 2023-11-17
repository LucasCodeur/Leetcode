# Longest common prefixe

## Description
Développez une fonction visant à trouver la chaîne de préfixe commune la plus longue parmi un tableau de chaînes de caractères.
Si aucun préfixe commun n'est trouvé, retournez une chaîne vide "".
## Ma pensée
- "Je dois boucler sur chaque chaîne de caractères en gardant en mémoire les lettres, ce qui correspond pour moi à la fonction strstr en C."
- "Je compare chaque lettre de chaque chaîne de caractères. Si elles sont communes, je stocke la lettre dans un tableau et je renvoie le tableau."
    - "Pour ce faire, je dois trouver comment boucler sur les différentes chaînes de caractères en même temps."
        - "Éventuellement, en faisant une boucle différente pour chaque chaîne, mais cela augmenterait potentiellement la complexité temporelle de l'algorithme."
## Approche et Algorithme
Algorithme itératif : L'algorithme utilise une boucle for pour itérer à travers les caractères des chaînes de gauche à droite.
Algorithme de recherche : Il recherche le préfixe commun en comparant les caractères des chaînes à la même position.
Approche :

Initialisation : Vérifie si le tableau est vide et initialise des variables.
Itération : Utilise une boucle pour itérer sur les caractères des chaînes.
Comparaison : Compare les caractères à la même position dans chaque chaîne.
Construction du résultat : Ajoute les caractères communs au préfixe.
Arrêt prématuré : S'arrête si un caractère diffère.
Renvoi du résultat : Renvoie le préfixe commun trouvé.
## Complexité
Je m'excuse pour la confusion. Voici une version en markdown avec des caractères plus universels :

**Complexité Temporelle:**

La complexité temporelle de cet algorithme est \(O(m * n)\), où \(m\) est la longueur du plus court mot dans le tableau et \(n\) est le nombre de chaînes de caractères dans le tableau.

- **Notation Big O :** \(O(m * n)\)
- **Titre :** Quadratique

**Complexité Spatiale:**

La complexité spatiale de cet algorithme est \(O(1)\), ce qui signifie que l'utilisation de la mémoire reste constante indépendamment de la taille des entrées.

- **Notation Big O :** \(O(1)\)
- **Titre :** Constante

## Description
Develop a function to find the longest common prefix string among an array of strings. If no common prefix is found, return an empty string
## My thoughts
"I must iterate over each string, keeping track of the letters, which is equivalent to the strstr function in C."
"I compare each letter of each string. If they are common, I store the letter in an array and return the array."
"To do this, I need to figure out how to iterate over the different strings simultaneously."
"Possibly by using a separate loop for each string, but that could potentially increase the time complexity of the algorithm."
## Approach and Algorithm
Iterative algorithm: The algorithm uses a for loop to iterate through the characters of the strings from left to right.
Search algorithm: It searches for the common prefix by comparing the characters of the strings at the same position.
Approach:

Initialization: Checks if the array is empty and initializes variables.
Iteration: Uses a loop to iterate over the characters of the strings.
Comparison: Compares the characters at the same position in each string.
Result construction: Adds the common characters to the prefix.
Early stopping: Stops if a character differs.
Result return: Returns the found common prefix.
## Complexity
Certainly, here are the complexities in markdown:

**Time Complexity:**

The time complexity of this algorithm is \(O(m * n)\), where \(m\) is the length of the shortest word in the array, and \(n\) is the number of strings in the array.

- **Big O Notation:** \(O(m * n)\)
- **Title:** Quadratic

**Space Complexity:**

The space complexity of this algorithm is \(O(1)\), which means that the memory usage remains constant regardless of the input size.

- **Big O Notation:** \(O(1)\)
- **Title:** Constant